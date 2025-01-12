// respawner.inc.c

void bhv_respawner_loop(void) {
    struct Object *spawnedObject;
    if (o->oAction == 0) return;
    if ((o->oTimer >= o->oRespawnerTimer) && !is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, o->oRespawnerSpawnDist)) {
        spawnedObject = spawn_object(o, o->oRespawnerModel, o->oRespawnerBehavior);
        spawnedObject->oBehParams = o->oBehParams;
        spawnedObject->oImbue = o->oImbue;
        if (o->oRespawnerMist) spawn_mist_at_obj(spawnedObject);
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void create_respawner(ModelID32 model, const BehaviorScript *behToSpawn, s32 minSpawnDist, s32 timer, s32 mist) {
    struct Object *respawner = spawn_object(o, MODEL_NONE, bhvRespawner);
    respawner->oRespawnerModel = model;
    respawner->oRespawnerSpawnDist = minSpawnDist;
    respawner->oRespawnerBehavior = behToSpawn;
    respawner->oRespawnerTimer = timer;
    respawner->oRespawnerMist = mist;
    respawner->oAction = 0;
}

void cur_obj_trigger_respawner() {
    // Search all respawner objects
    uintptr_t *behaviorAddr = segmented_to_virtual(bhvRespawner);
    struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];
    struct Object *obj = (struct Object *) listHead->next;

    while (obj != (struct Object *) listHead) {
        if (obj->behavior == behaviorAddr && obj->parentObj == o) {
            obj->oAction = 1;
            obj->oBehParams = o->oBehParams;
            obj->oImbue = o->oImbue;
            obj->oTimer = 0;
            break;
        }

        obj = (struct Object *) obj->header.next;
    }
}
