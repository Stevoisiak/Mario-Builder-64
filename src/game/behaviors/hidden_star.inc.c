// hidden_star.inc.c

void bhv_hidden_star_init(void) {
    gStarTriggersTotal = count_star_triggers();
    if (gStarTriggersTotal == 0) {
        struct Object *starObj = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStar, o->oPosX, o->oPosY, o->oPosZ, 0, 0, 0);
        starObj->oBehParams = o->oBehParams;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }

    o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
    o->oHiddenStarTriggerTotal = gStarTriggersTotal + gStarTriggersCollected;
    o->oHiddenStarTriggerCounter = o->oHiddenStarTriggerTotal - gStarTriggersTotal;
}

void bhv_hidden_star_loop(void) {
    gStarTriggersCollected = o->oHiddenStarTriggerCounter;

    switch (o->oAction) {
        case HIDDEN_STAR_ACT_INACTIVE:
            if (o->oHiddenStarTriggerCounter == o->oHiddenStarTriggerTotal) {
                o->oAction = HIDDEN_STAR_ACT_ACTIVE;
            }
            break;

        case HIDDEN_STAR_ACT_ACTIVE:
            if (o->oTimer > 2) {
                spawn_red_coin_cutscene_star(o->oPosX, o->oPosY, o->oPosZ);
                spawn_mist_particles();
                o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            }
            break;
    }
}

void star_trigger_activated(void) {
    struct Object *star = cur_obj_nearest_object_with_behavior(bhvHiddenStar);
    if (!star) return;

    star->oHiddenStarTriggerCounter++;

    if (star->oHiddenStarTriggerCounter != star->oHiddenStarTriggerTotal) {
        spawn_big_orange_number(star->oHiddenStarTriggerCounter);
    }
    if (star->oHiddenStarTriggerTotal - star->oHiddenStarTriggerCounter > 4) {
        // Play the first sound until it gets to the final 8
        play_sound(SOUND_MENU_COLLECT_SECRET, gGlobalSoundSource);
    } else {
        play_sound(SOUND_MENU_COLLECT_SECRET
                + (((u8) 4 - (star->oHiddenStarTriggerTotal - star->oHiddenStarTriggerCounter)) << 16),
                gGlobalSoundSource);
    }
}

// void bhv_hidden_star_trigger_loop(void) {
//     if (obj_check_if_collided_with_object(o, gMarioObject)) {
//         struct Object *hiddenStar = cur_obj_nearest_object_with_behavior(bhvHiddenStar);

//         if (hiddenStar != NULL) {
//             hiddenStar->oHiddenStarTriggerCounter++;

//             if (hiddenStar->oHiddenStarTriggerCounter != 5) {
//                 spawn_orange_number(hiddenStar->oHiddenStarTriggerCounter, 0, 0, 0);
//             }

//             play_sound(SOUND_MENU_COLLECT_SECRET + (((u8) hiddenStar->oHiddenStarTriggerCounter - 1) << 16), gGlobalSoundSource);
//         }

//         o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
//     }
// }

// void bhv_bowser_course_red_coin_star_init(void) {
//     if (o->oBehParams2ndByte != 0) {
//         o->oHiddenStarTriggerTotal = o->oBehParams2ndByte;
//         o->oHiddenStarTriggerCounter = gRedCoinsCollected;
//     }
//     else {
//         gRedCoinsTotal = count_red_coins();
//         o->oHiddenStarTriggerTotal = gRedCoinsTotal + gRedCoinsCollected;
//         o->oHiddenStarTriggerCounter = o->oHiddenStarTriggerTotal - gRedCoinsTotal;
//     }
// }

// void bhv_bowser_course_red_coin_star_loop(void) {
//     gRedCoinsCollected = o->oHiddenStarTriggerCounter;

//     switch (o->oAction) {
//         case 0:
//             if (o->oHiddenStarTriggerCounter == o->oHiddenStarTriggerTotal) {
//                 o->oAction = 1;
//             }
//             break;

//         case 1:
//             if (o->oTimer > 2) {
//                 spawn_no_exit_star(o->oPosX, o->oPosY, o->oPosZ);
//                 spawn_mist_particles();
//                 o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
//             }
//             break;
//     }
// }

// void bhv_plant_star_loop(void) {
//     switch (o->oAction) {
//         case 0:
//             cur_obj_hide();
//             if (!cur_obj_nearest_object_with_behavior(bhvFirePiranhaPlantBig)) {
//                 o->oAction = 1;
//             }
//             break;

//         case 1:
//             if (o->oTimer > 2) {
//                 spawn_red_coin_cutscene_star(o->oPosX, o->oPosY, o->oPosZ);
//                 spawn_mist_particles();
//                 o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
//             }
//             break;
//     }
// }