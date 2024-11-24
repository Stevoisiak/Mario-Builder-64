// jumping_box.inc.c

struct ObjectHitbox sJumpingBoxHitbox = {
    /* interactType:      */ INTERACT_GRABBABLE,
    /* downOffset:        */ 20,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 5,
    /* radius:            */ 150,
    /* height:            */ 250,
    /* hurtboxRadius:     */ 150,
    /* hurtboxHeight:     */ 250,
};

void jumping_box_begin_respawn(void) {
    spawn_mist_particles_variable(0, 0, 46.f);
    cur_obj_become_intangible();
    cur_obj_hide();
    o->oAction = 1;
    o->oHeldState = HELD_FREE;
}

void jumping_box_respawn(void) {
    struct Object *newbox = spawn_object(o, MODEL_BREAKABLE_BOX, bhvJumpingBox);
    newbox->oPosX = o->oHomeX;
    newbox->oPosY = o->oHomeY;
    newbox->oPosZ = o->oHomeZ;
    newbox->oFaceAngleYaw = 0;
    newbox->oFaceAnglePitch = 0;
    newbox->oFaceAngleRoll = 0;
    newbox->oBehParams = o->oBehParams;
    spawn_mist_at_obj(newbox);
    o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
}

void jumping_box_act_0(void) {
    cur_obj_update_floor_and_walls();
    cur_obj_move_standard(78);

    if (o->oSubAction == 0) {
        o->oVelY = random_float() * 5.0f + 15.0f;
        o->oSubAction++;
    } else if (o->oMoveFlags & OBJ_MOVE_ON_GROUND) {
        o->oSubAction = 0;
    }

    if (cur_obj_die_if_on_death_barrier(0)) {
        jumping_box_respawn();
    }
}

void jumping_box_waiting_to_respawn(void) {
    cur_obj_become_intangible();
    cur_obj_hide();
    if (o->oTimer > 5*30) {
        jumping_box_respawn();
    }
}

ObjActionFunc sJumpingBoxActions[] = {
    jumping_box_act_0,
    jumping_box_waiting_to_respawn,
};

void jumping_box_free_update(void) {
    cur_obj_scale(0.38f);
    obj_set_hitbox(o, &sJumpingBoxHitbox);
    cur_obj_call_action_function(sJumpingBoxActions);
}

void bhv_jumping_box_loop(void) {
    switch (o->oHeldState) {
        case HELD_FREE:
            jumping_box_free_update();
            break;

        case HELD_HELD:
            obj_copy_pos(o, gMarioObject);
            cur_obj_unrender_set_action_and_anim(-1, 0);
            break;

        case HELD_THROWN:
            cur_obj_get_thrown_or_placed(40.0f, 20.0f, 1);
            break;

        case HELD_DROPPED:
            jumping_box_begin_respawn();
            break;
    }

    if (o->oInteractStatus & INT_STATUS_STOP_RIDING) {
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);

        spawn_triangle_break_particles(10, MODEL_DIRT_ANIMATION, 3.0f, TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW);
        if (!GET_BPARAM3(o->oBehParams)) {
            obj_spawn_loot_yellow_coins(o, o->oNumLootCoins, 20.0f);
        }
        
        SET_BPARAM3(o->oBehParams, 1);

        jumping_box_begin_respawn();
    }

    o->oInteractStatus = INT_STATUS_NONE;
}
