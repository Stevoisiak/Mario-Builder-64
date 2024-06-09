// boo.inc.c

#define SPAWN_CASTLE_BOO_STAR_REQUIREMENT 12

static struct ObjectHitbox sBooGivingStarHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 3,
    /* health:            */ 3,
    /* numLootCoins:      */ 0,
    /* radius:            */ 140,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};

// Relative positions
static s16 sCourtyardBooTripletPositions[][3] = {
    { 0, 50, 0 },
    { 210, 110, 210 },
    { -210, 70, -210 },
};

static void boo_stop(void) {
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
    o->oGravity = 0.0f;
}

void bhv_boo_init(void) {
    o->oQuicksandDepthToDie = 0;
    o->oBooInitialMoveYaw = o->oMoveAngleYaw;
}

static s32 boo_should_be_stopped(void) {
    if (o->activeFlags & ACTIVE_FLAG_IN_DIFFERENT_ROOM) {
        return TRUE;
    }

    if (o->oRoom == 10 && (gTimeStopState & TIME_STOP_MARIO_OPENED_DOOR)) {
        return TRUE;
    }

    return FALSE;
}

static s32 boo_should_be_active(void) {
    f32 activationRadius = o->oDrawingDistance;

    if (o->oRoom == -1) {
        if (o->oDistanceToMario < activationRadius) {
            return TRUE;
        }
    } else if (!boo_should_be_stopped()) {
        if (o->oDistanceToMario < activationRadius
            && (o->oRoom == gMarioCurrentRoom || gMarioCurrentRoom == 0)) {
            return TRUE;
        }
    }

    return FALSE;
}

static void boo_approach_target_opacity_and_update_scale(void) {
    f32 scale;

    if (o->oBooTargetOpacity != o->oOpacity) {
        if (o->oBooTargetOpacity > o->oOpacity) {
            o->oOpacity += 20;

            if (o->oBooTargetOpacity < o->oOpacity) {
                o->oOpacity = o->oBooTargetOpacity;
            }
        } else {
            o->oOpacity -= 20;

            if (o->oBooTargetOpacity > o->oOpacity) {
                o->oOpacity = o->oBooTargetOpacity;
            }
        }
    }

    scale = (o->oOpacity / 255.0f * 0.4 + 0.6) * o->oBooBaseScale;
    obj_scale(o, scale); // why no cur_obj_scale? was cur_obj_scale written later?
}

static void boo_oscillate(s32 ignoreOpacity) {
    o->oFaceAnglePitch = sins(o->oBooOscillationTimer) * 0x400;

    if (o->oOpacity == 255 || ignoreOpacity == TRUE) {
        o->header.gfx.scale[0] = sins(o->oBooOscillationTimer) * 0.08 + o->oBooBaseScale;
        o->header.gfx.scale[1] = -sins(o->oBooOscillationTimer) * 0.08 + o->oBooBaseScale;
        o->header.gfx.scale[2] = o->header.gfx.scale[0];
        o->oGravity = sins(o->oBooOscillationTimer) * o->oBooBaseScale;
        o->oBooOscillationTimer += 0x400;
    }
}

static s32 boo_vanish_or_appear(void) {
    s16 relativeAngleToMario = abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw);
    s16 relativeMarioFaceAngle = abs_angle_diff(o->oMoveAngleYaw, gMarioObject->oFaceAngleYaw);
    // magic?
    s16 relativeAngleToMarioThreshhold = 0x1568;
    s16 relativeMarioFaceAngleThreshhold = 0x6B58;
    s32 doneAppearing = FALSE;

    o->oVelY = 0.0f;

    if (relativeAngleToMario > relativeAngleToMarioThreshhold
        || relativeMarioFaceAngle < relativeMarioFaceAngleThreshhold) {
        if (o->oOpacity == 40) {
            o->oBooTargetOpacity = 255;
            cur_obj_play_sound_2(SOUND_OBJ_BOO_LAUGH_LONG);
        }

        if (o->oOpacity > 180) {
            doneAppearing = TRUE;
        }
    } else if (o->oOpacity == 255) {
        o->oBooTargetOpacity = 40;
    }

    return doneAppearing;
}

static void boo_set_move_yaw_for_during_hit(s32 hurt) {
    cur_obj_become_intangible();

    o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    o->oBooMoveYawBeforeHit = (f32) o->oMoveAngleYaw;

    if (hurt) {
        o->oBooMoveYawDuringHit = gMarioObject->oMoveAngleYaw;
    } else if (coss((s16) o->oMoveAngleYaw - (s16) o->oAngleToMario) < 0.0f) {
        o->oBooMoveYawDuringHit = o->oMoveAngleYaw;
    } else {
        o->oBooMoveYawDuringHit = (s16)(o->oMoveAngleYaw + 0x8000);
    }
}

// Boo Roll
static s16 sBooHitRotations[] = {
    0x179F, 0x1620, 0x14AC, 0x1346,
    0x11EB, 0x109E, 0x0B75, 0x0E28,
    0x0D01, 0x0BE6, 0x0AD7, 0x09D5,
    0x08DF, 0x07F7, 0x071A, 0x064B,
    0x0588, 0x04D1, 0x0427, 0x038A,
    0x02F9, 0x0275, 0x01FD, 0x0192,
    0x0134, 0x00E2, 0x009D, 0x0064,
    0x0038, 0x0019, 0x0004, 0x0000
};

static void boo_move_during_hit(s32 roll, f32 fVel) {
    // Boos seem to have been supposed to oscillate up then down then back again
    // when hit. However it seems the programmers forgot to scale the cosine,
    // so the Y velocity goes from 1 to -1 and back to 1 over 32 frames.
    // This is such a small change that the Y position only changes by 5 units.
    // It's completely unnoticable in-game.
    s32 oscillationVel = o->oTimer * 0x800 + 0x800;

    o->oForwardVel = fVel;
    o->oVelY = coss(oscillationVel);
    o->oMoveAngleYaw = o->oBooMoveYawDuringHit;

    if (roll) {
        o->oFaceAngleYaw  += sBooHitRotations[o->oTimer];
        o->oFaceAngleRoll += sBooHitRotations[o->oTimer];
    }
}

static void big_boo_shake_after_hit(void) {
    // Oscillate yaw
    s32 oscillationVel = o->oTimer * 0x2000 - 0x3E000;
    o->oFaceAngleYaw += coss(oscillationVel) * 0x400;
}

static void boo_reset_after_hit(void) {
    o->oMoveAngleYaw = o->oBooMoveYawBeforeHit;
    o->oFlags |= OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    o->oInteractStatus = INT_STATUS_NONE;
    o->oFaceAngleRoll = 0;
}

// called iff boo/big boo/cage boo is in action 2, which only occurs if it was non-attack-ly interacted with/bounced on?
static s32 boo_update_after_bounced_on(f32 a0) {
    boo_stop();

    if (o->oTimer == 0) {
        boo_set_move_yaw_for_during_hit(FALSE);
    }

    if (o->oTimer < 32) {
        boo_move_during_hit(FALSE, sBooHitRotations[o->oTimer] / 5000.0f * a0);
    } else {
        cur_obj_become_tangible();
        boo_reset_after_hit();
        o->oAction = 1;

        return TRUE;
    }

    return FALSE;
}

// called iff big boo nonlethally hit
static s32 big_boo_update_during_nonlethal_hit(f32 a0) {
    boo_stop();

    if (o->oTimer == 0) {
        boo_set_move_yaw_for_during_hit(TRUE);
    }

    if (o->oTimer < 32) {
        boo_move_during_hit(TRUE, sBooHitRotations[o->oTimer] / 5000.0f * a0);
    } else if (o->oTimer < 48) {
        big_boo_shake_after_hit();
    } else {
        cur_obj_become_tangible();
        boo_reset_after_hit();
        o->oAction = 1;

        return TRUE;
    }

    return FALSE;
}

// called every frame once mario lethally hits the boo until the boo is deleted,
// returns whether death is complete
static s32 boo_update_during_death(void) {
    if (o->oTimer == 0) {
        o->oForwardVel = 40.0f;
        o->oMoveAngleYaw = gMarioObject->oMoveAngleYaw;
        o->oBooDeathStatus = BOO_DEATH_STATUS_DYING;
        o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    } else {
        if (o->oTimer == 5) {
            o->oBooTargetOpacity = 0;
        }

        if (o->oTimer > 30 || o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
            spawn_mist_particles();
            o->oBooDeathStatus = BOO_DEATH_STATUS_DEAD;

            if (o->oBooParentBigBoo != NULL) {
                struct Object *parentBigBoo = o->oBooParentBigBoo;

                if (!cur_obj_has_behavior(bhvBoo)) {
                    parentBigBoo->oBigBooNumMinionBoosKilled++;
                }
            }

            return TRUE;
        }
    }

    o->oVelY = 5.0f;
    o->oFaceAngleRoll += 0x800;
    o->oFaceAngleYaw += 0x800;

    return FALSE;
}

static s32 obj_has_attack_type(u32 attackType) {
    return (o->oInteractStatus & INT_STATUS_ATTACK_MASK) == attackType;
}

static s32 boo_get_attack_status(void) {
    s32 attackStatus = BOO_NOT_ATTACKED;

    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        if ((o->oInteractStatus & INT_STATUS_WAS_ATTACKED)
            && !obj_has_attack_type(ATTACK_FROM_ABOVE)) {
            cur_obj_become_intangible();

            o->oInteractStatus = INT_STATUS_NONE;

            cur_obj_play_sound_2(SOUND_OBJ_BOO_LAUGH_SHORT);

            attackStatus = BOO_ATTACKED;
        } else {
            cur_obj_play_sound_2(SOUND_OBJ_BOO_BOUNCE_TOP);

            o->oInteractStatus = INT_STATUS_NONE;

            attackStatus = BOO_BOUNCED_ON;
        }
    }

    return attackStatus;
}

// boo idle/chasing movement?
static void boo_chase_mario(f32 minDY, s16 yawIncrement, f32 mul) {
    s16 targetYaw;

    if (boo_vanish_or_appear()) {
        o->oInteractType = INTERACT_BOUNCE_TOP;

        targetYaw = o->oAngleToMario;

        cur_obj_rotate_yaw_toward(targetYaw, yawIncrement);
        o->oVelY = 0.0f;

        if (!mario_is_in_air_action()) {
            f32 dy = o->oPosY - gMarioObject->oPosY;
            if ((minDY < dy) && (dy < 500.0f)) {
                o->oVelY = increment_velocity_toward_range(o->oPosY, gMarioObject->oPosY + 50.0f, 10.0f, 2.0f);
            }
        }

        cur_obj_set_vel_from_mario_vel(10.0f - o->oBooNegatedAggressiveness, mul);

        if (o->oForwardVel != 0.0f) {
            boo_oscillate(FALSE);
        }
    } else {
        o->oInteractType = 0;
        boo_stop();
    }
}

static void boo_act_0(void) {
    o->activeFlags |= ACTIVE_FLAG_MOVE_THROUGH_GRATE;

    if (o->oBehParams2ndByte == 2) {
        o->oRoom = 10;
    }

    o->oMoveAngleYaw = o->oBooInitialMoveYaw;
    boo_stop();

    o->oBooParentBigBoo = cur_obj_nearest_object_with_behavior(bhvGhostHuntBigBoo);
    o->oBooBaseScale = 1.0f;
    o->oBooTargetOpacity = 255;

    if (boo_should_be_active()) {
        // Condition is met if the object is bhvBalconyBigBoo or bhvMerryGoRoundBoo
        if (o->oBehParams2ndByte == 2) {
            o->oBooParentBigBoo = NULL;
            o->oAction = 5;
        } else {
            o->oAction = 1;
        }
    }
}

static void boo_act_5(void) {
    if (o->oTimer < 30) {
        o->oVelY = 0.0f;
        o->oForwardVel = 13.0f;
        boo_oscillate(FALSE);
        o->oWallHitboxRadius = 0.0f;
    } else {
        o->oAction = 1;
        o->oWallHitboxRadius = 30.0f;
    }
}

static void boo_act_1(void) {
    s32 attackStatus;

    if (o->oTimer == 0) {
        o->oBooNegatedAggressiveness = -random_float() * 5.0f;
        o->oBooTurningSpeed = (s32)(random_float() * 128.0f);
    }

    boo_chase_mario(-100.0f, o->oBooTurningSpeed + 0x180, 0.5f);

    attackStatus = boo_get_attack_status();

    if (boo_should_be_stopped()) {
        o->oAction = 0;
    }

    if (attackStatus == BOO_BOUNCED_ON) {
        o->oAction = 2;
    }

    if (attackStatus == BOO_ATTACKED) {
        o->oAction = 3;
    }

    if (attackStatus == BOO_ATTACKED) {
        create_sound_spawner(SOUND_OBJ_DYING_ENEMY1);
    }
}

static void boo_act_2(void) {
    if (boo_update_after_bounced_on(20.0f)) {
        o->oAction = 1;
    }
}

static void boo_act_3(void) {
    if (o->oTimer == 0) {
        if (o->oImbue != IMBUE_STAR) cur_obj_drop_imbued_object(128);
    }
    if (boo_update_during_death()) {
        obj_mark_for_deletion(o);
        cur_obj_drop_imbued_object(128);
    }
}

// Called when a Go on a Ghost Hunt boo dies
static void boo_act_4(void) {
    s32 dialogID;

    // If there are no remaining "minion" boos, show the dialog of the Big Boo
    if (cur_obj_nearest_object_with_behavior(bhvGhostHuntBoo) == NULL) {
        dialogID = DIALOG_108;
    } else {
        dialogID = DIALOG_107;
    }

    if (cur_obj_update_dialog(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_TEXT_DEFAULT, dialogID, 0)) {
        create_sound_spawner(SOUND_OBJ_DYING_ENEMY1);
        obj_mark_for_deletion(o);

        if (dialogID == DIALOG_108) { // If the Big Boo should spawn, play the jingle
            play_puzzle_jingle();
        }
    }
}

static ObjActionFunc sBooActions[] = {
    boo_act_0,
    boo_act_1,
    boo_act_2,
    boo_act_3,
    boo_act_4,
    boo_act_5,
};

void bhv_boo_update_home(f32 yOffset) {
    if (!SURFACE_IS_UNSAFE(o->oFloorType) && !o->oFloor->object && (o->oPosY - o->oFloorHeight < yOffset) && (o->oImbue != IMBUE_STAR)) {
        vec3f_copy(&o->oHomeVec, &o->oPosVec);
        o->oHomeY = o->oFloorHeight;
    }
}

void bhv_boo_loop(void) {
    // PARTIAL_UPDATE

    cur_obj_update_floor_and_walls();
    bhv_boo_update_home(150.f);
    cur_obj_call_action_function(sBooActions);
    cur_obj_move_standard(78);
    boo_approach_target_opacity_and_update_scale();

    if (o->oDistanceToMario < o->oDrawingDistance) {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
        }
        else
        {
        o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
        }

    o->oInteractStatus = INT_STATUS_NONE;
}

static void big_boo_act_0(void) {
    if (cur_obj_has_behavior(bhvBalconyBigBoo)) {
        obj_set_secondary_camera_focus();
        // number of killed boos set > 5 so that boo always loads
        // redundant? this is also done in behavior_data.s
        o->oBigBooNumMinionBoosKilled = 10;
    }

    o->oBooParentBigBoo = NULL;

    if (boo_should_be_active() && o->oBigBooNumMinionBoosKilled >= gDebugInfo[DEBUG_PAGE_ENEMYINFO][0] + 5) {
        o->oAction = 1;

        o->oPosY -= 200.0f;
        o->oMoveAngleYaw = o->oBooInitialMoveYaw;

        cur_obj_unhide();

        o->oBooTargetOpacity = 255;
        o->oBooBaseScale = 3.0f;
        o->oHealth = 3;

        cur_obj_scale(3.0f);
        cur_obj_become_tangible();
    } else {
        cur_obj_hide();
        cur_obj_become_intangible();
        boo_stop();
    }
}

static void big_boo_act_1(void) {
    s16 yawIncrement;
    f32 mul;

    if (o->oHealth == 3) {
        yawIncrement = 0x180; mul = 0.5f;
    } else if (o->oHealth == 2) {
        yawIncrement = 0x240; mul = 0.6f;
    } else {
        yawIncrement = 0x300; mul = 0.8f;
    }

    boo_chase_mario(-100.0f, yawIncrement, mul);

    s32 attackStatus = boo_get_attack_status();

    // redundant; this check is in boo_should_be_stopped
    if (boo_should_be_stopped()) {
        o->oAction = 0;
    }

    if (attackStatus == BOO_BOUNCED_ON) {
        o->oAction = 2;
    }

    if (attackStatus == BOO_ATTACKED) {
        o->oAction = 3;
        create_sound_spawner(SOUND_OBJ_THWOMP);
    }
}

static void big_boo_act_2(void) {
    if (boo_update_after_bounced_on(20.0f)) {
        o->oAction = 1;
    }
}

static void big_boo_act_3(void) {
    if (o->oTimer == 0) {
        o->oHealth--;
        if (save_file_get_badge_equip() & (1 << BADGE_DAMAGE)) {
            o->oHealth--;
        }
    }

    if (o->oHealth <= 0) {
        if (o->oTimer == 0) {
            if (o->oImbue != IMBUE_STAR) cur_obj_drop_imbued_object(0);
        }
        if (boo_update_during_death()) {
            cur_obj_disable();

            o->oAction = 4;

            obj_set_angle(o, 0, 0, 0);

            cur_obj_drop_imbued_object(0);
        }
    } else {
        if (o->oTimer == 0) {
            spawn_mist_particles();
            o->oBooBaseScale -= 0.5f;
        }

        if (big_boo_update_during_nonlethal_hit(40.0f)) {
            o->oAction = 1;
        }
    }
}

static void big_boo_act_4(void) {
    boo_stop();
    obj_mark_for_deletion(o);
}

static ObjActionFunc sBooGivingStarActions[] = {
    big_boo_act_0,
    big_boo_act_1,
    big_boo_act_2,
    big_boo_act_3,
    big_boo_act_4,
};

void bhv_big_boo_loop(void) {
    //PARTIAL_UPDATE

    obj_set_hitbox(o, &sBooGivingStarHitbox);

    o->oGraphYOffset = o->oBooBaseScale * 60.0f;

    cur_obj_update_floor_and_walls();
    bhv_boo_update_home(300.f);
    cur_obj_call_action_function(sBooGivingStarActions);
    cur_obj_move_standard(78);


    boo_approach_target_opacity_and_update_scale();
    o->oInteractStatus = INT_STATUS_NONE;
}

void obj_set_secondary_camera_focus(void) {
    gSecondCameraFocus = o;
}
