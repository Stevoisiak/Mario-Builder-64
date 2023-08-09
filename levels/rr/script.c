#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "actors/group0.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/rr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_rr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_FOUNTAIN, fountain2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BLOCKER, blocker_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_DOOR, rr_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TUBE, rr_tube_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PINK_COIN_RR, pink_coin_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_EYE, rr_eye_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_BILLMASK, billmask_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_PYRAMID, rr_pyramid_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPINSEED, spinseed_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BLOOD, blood_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TVHEAD_RR, tvhead_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PALAMEDES, palamedes_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGHEART, agheart_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGPORTAL, agportal_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BLOOD_PARTICLE, blood_particle_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGCRACK, agcrack_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGPILLAR1, agpillar1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGPILLAR2, agpillar2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGPILLAR3, agpillar3_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGWALL, agwall_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGCRUMBLE, agcrumble_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGRING, agring_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AG_KILLER_LASER, ag_killer_laser_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGBOOM, agboom_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGMOON, agmoon_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGFLAMES, endflames_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AGTRI, agtri_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FORM1, form1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FORM2, form2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FORM2A, form2a_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FORM3, form3_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LOPALAM, lopalam_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, rr_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_RR, 0x05, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_RR, 0x06, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_RR, 0x07, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07/*finale*/, LEVEL_RR, 0x00, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(11/*win_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(12/*death_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLOCKER, 250, 1060, -369, 0, 0, 0, (0 << 16), bhvBlocker),
		OBJECT(MODEL_BLOCKER, 150, 1060, -369, 0, 0, 0, (1 << 16), bhvBlocker),
		OBJECT(MODEL_BLOCKER, 50, 1060, -369, 0, 0, 0, (2 << 16), bhvBlocker),
		OBJECT(MODEL_BLOCKER, -50, 1060, -369, 0, 0, 0, (3 << 16), bhvBlocker),
		OBJECT(MODEL_BLOCKER, -150, 1060, -369, 0, 0, 0, (4 << 16), bhvBlocker),
		OBJECT(MODEL_BLOCKER, -250, 1060, -369, 0, 0, 0, (5 << 16), bhvBlocker),
		OBJECT(MODEL_NONE, 0, 16, -5479, 0, -180, 0, (12 << 16), bhvDeathWarp),
		OBJECT(MODEL_NONE, 0, -237, 12427, 0, 0, 0, 0x00000000, bhvEvent),
		OBJECT(MODEL_FOUNTAIN, 0, -4512, -3900, 0, 0, 0, 0x00000000, bhvFountain),
		OBJECT(MODEL_NONE, 0, 808, -5479, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -82, -237, 11346),
		OBJECT(MODEL_RR_DOOR, 0, 245, -225, 0, 0, 0, 0x00000000, bhvRR_Door),
		OBJECT(MODEL_RR_DOOR, 0, 245, 11852, 0, 0, 0, 0x00000000, bhvRR_Door),
		OBJECT(MODEL_SHOWRUNNER, -991, -100, 2831, 0, 90, 0, (3 << 16), bhvShowrunner),
		OBJECT(MODEL_SHOWRUNNER, 991, -100, 2831, 0, -90, 0, (3 << 16), bhvShowrunner),
		OBJECT(MODEL_SHOWRUNNER, -991, -100, 5813, 0, 90, 0, (3 << 16), bhvShowrunner),
		OBJECT(MODEL_SHOWRUNNER, 991, -100, 5813, 0, -90, 0, (3 << 16), bhvShowrunner),
		OBJECT(MODEL_SHOWRUNNER, -991, -100, 8795, 0, 90, 0, (3 << 16), bhvShowrunner),
		OBJECT(MODEL_NONE, 0, 16, -5479, 0, -180, 0, (11 << 16), bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, -904, -237, -7499, 0, 0, 0, (DIALOG_ENTRY_1 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -543, -237, -7499, 0, 0, 0, (DIALOG_ENTRY_2 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -181, -237, -7499, 0, 0, 0, (DIALOG_ENTRY_3 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 181, -237, -7499, 0, 0, 0, (DIALOG_ENTRY_4 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 543, -237, -7499, 0, 0, 0, (DIALOG_ENTRY_5 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 904, -237, -7499, 0, 0, 0, (DIALOG_ENTRY_6 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 1491, -237, 1341, 0, -90, 0, (DIALOG_ENTRY_7 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 1491, -237, 4322, 0, -90, 0, (DIALOG_ENTRY_9 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 1491, -237, 7304, 0, -90, 0, (DIALOG_ENTRY_12 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 1491, -237, 10286, 0, -90, 0, (DIALOG_ENTRY_14 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -1491, -237, 10286, 0, 90, 0, (DIALOG_ENTRY_13 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -1491, -237, 7304, 0, 90, 0, (DIALOG_ENTRY_11 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -1491, -237, 4322, 0, 90, 0, (DIALOG_ENTRY_10 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -1491, -237, 1341, 0, 90, 0, (DIALOG_ENTRY_8 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 994, -237, 11777, 0, 180, 0, (DIALOG_ENTRY_15 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, -994, -237, 11777, 0, 180, 0, (DIALOG_ENTRY_16 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 2225, -214, -6124, 0, 0, 0, (1 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 3146, -214, -3900, 0, 0, 0, (2 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 2225, -214, -1675, 0, 0, 0, (3 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -2225, -214, -1675, 0, 0, 0, (4 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -3146, -214, -3900, 0, 0, 0, (5 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -2225, -214, -6124, 0, 0, 0, (6 << 16), bhvFadingWarp),
		TERRAIN(rr_area_1_collision),
		MACRO_OBJECTS(rr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, rr_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(11/*win_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(12/*death_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 0, 10451, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_KOOPA_SHELL, 0, -1423, -9574, 0, 0, 0, (3 << 16), bhvKoopaShell),
		OBJECT(MODEL_NONE, 0, -1410, -9756, 0, 0, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_RR_TUBE, 0, 0, 0, 0, 0, 0, 0x00000000, bhvRR_Tube),
		TERRAIN(rr_area_2_collision),
		MACRO_OBJECTS(rr_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, rr_area_3),
		WARP_NODE(0x0A, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(11/*win_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(12/*death_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RR_BILLMASK, -2136, 748, -64, 0, 0, 0, (2 << 16), bhvCrowbarPower),
		OBJECT(MODEL_NONE, -1564, 10994, 1100, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_NONE, -1890, 675, -64, 0, 90, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1495, 2834, 118, 0, 0, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_RR_PYRAMID, -1564, 8146, 1100, 0, 0, 0, 0x00000000, bhvRR_Pyramid),
		OBJECT(MODEL_NONE, 0, -2763, 0, 0, 0, 0, (0x0A << 16), bhvInstantActiveWarp),
		TERRAIN(rr_area_3_collision),
		MACRO_OBJECTS(rr_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, rr_area_4),
		WARP_NODE(0x0A, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(11/*win_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(12/*death_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 7800, 5400, 0, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_EXCLAMATION_BOX, -5600, 7200, 0, 0, 0, 0, (2 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -4800, 1800, 0, 0, 90, 0, (0x0A << 16), bhvInstantActiveWarp),
		TERRAIN(rr_area_4_collision),
		MACRO_OBJECTS(rr_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, rr_area_5),
		WARP_NODE(0x0A, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, -90, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(0xEB, -1000, 1869, -2400, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -1700, 4119, -1400, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -2500, 469, -3200, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -500, 4519, -1400, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, 4200, 5469, 800, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(MODEL_PURPLE_SWITCH, -1300, -331, 300, 0, 0, 0, (3 << 24) | (99 << 16), bhvPurpleSwitchHiddenBoxes),
		OBJECT(0xE2, 0, -431, 0, 0, 0, 0, (3 << 16), bhvSnakeMain),
		TERRAIN(rr_area_5_collision),
		MACRO_OBJECTS(rr_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, rr_area_6),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_PINK_COIN_RR, -4000, 1600, 4000, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, -4000, 1600, 2400, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, -2400, 3200, 1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, 0, 4400, 800, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, 0, 2400, -1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, 0, -2400, -1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, -4000, -800, 1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_PINK_COIN_RR, -2400, 0, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 0, 0, (4 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RR_EYE, 0, 1600, 2400, 0, 0, 0, 0x00000000, bhvRR_Eye),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, -180, 0, (0x0A << 16), bhvSwimmingWarp),
		TERRAIN(rr_area_6_collision),
		MACRO_OBJECTS(rr_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(7, rr_area_7),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_RR, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_RR, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(11/*win_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(12/*death_entry*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240/*win*/, LEVEL_BITS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -6803, 926, -8278, 0, 90, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 2762, 4293, 2010, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BLUE_COIN, 2457, 4293, 2022, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2135, 4293, 1921, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1939, 4293, 1483, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2281, 4293, 1140, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2754, 4293, 1038, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3373, 4293, 1282, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3868, 4293, 1985, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3697, 4293, 2695, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2724, 4293, 3136, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1920, 4293, 2938, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_NONE, 1550, 768, -2981, 0, 126, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2303, 771, -3707, 0, 133, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -77, 768, -8314, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 988, 1447, -436, 0, 110, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5400, 1819, -4069, 0, 107, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 367, 1985, 4196, 0, 63, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 234, 3910, 2092, 0, -25, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5016, 1331, 849, 0, 67, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6059, 1076, 2614, 0, 67, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7137, 2198, 4154, 0, 67, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5345, 1039, -1495, 0, 67, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3683, 1101, -7803, 0, 67, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_MARIO, 2321, 807, -8628, 0, -95, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, 284, 768, -4962, 0, 4, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, -4076, 768, -3580, 0, 4, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, -5943, 768, -5353, 0, 77, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, -181, 2669, 2901, 0, 128, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, 3692, 3072, -59, 0, -62, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, 5856, 931, -4346, 0, -62, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, 7021, 2080, 4442, 0, -62, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, 3495, 3666, 4511, 0, 48, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_TVHEAD_RR, -5947, 1268, -684, 0, 30, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TVHEAD_RR, 3140, 1071, -6032, 0, -83, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TVHEAD_RR, 4685, 2050, -310, 0, -107, 0, 0x00000000, bhvTVhead),
		TERRAIN(rr_area_7_collision),
		MACRO_OBJECTS(rr_area_7_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(0, rr_area_0),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(241/*death*/, LEVEL_BITS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01/*end_credits_warp*/, LEVEL_ENDING, 0x00, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AGMOON, 1374, 15200, -1535, 0, 0, 0, 0x00000000, bhvAgmoon),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 0, 0, 0x00000000, bhvAgpillars),
		OBJECT(MODEL_AGRING, 0, 262, 0, 0, 0, 0, 0x00000000, bhvAgring),
		OBJECT(MODEL_AGRING, 0, 262, 0, -22, 10, 30, 0x00000000, bhvAgring),
		OBJECT(MODEL_AGRING, 0, 262, 0, 59, -7, -44, 0x00000000, bhvAgring),
		OBJECT(MODEL_AGRING, 0, 262, 0, -122, 47, -82, 0x00000000, bhvAgring),
		OBJECT(MODEL_AGRING, 0, 262, 0, 15, 51, -157, 0x00000000, bhvAgring),
		OBJECT(MODEL_AGWALL, 0, 3050, 0, 0, 0, 0, 0x00000000, bhvAgwall),
		OBJECT(MODEL_BLOOD, 0, 29, 0, 0, 0, 0, 0x00000000, bhvBlood),
		OBJECT(MODEL_AGTRI, 0, -9244, 0, 0, 0, 0, 0x00000000, bhvAgtri),
		OBJECT(MODEL_AGCRACK, 0, -8821, -3000, 0, 0, 0, (6 << 24), bhvAgcrack),
		OBJECT(MODEL_AGCRACK, -2598, -8821, 1500, 0, 120, 0, (6 << 24), bhvAgcrack),
		OBJECT(MODEL_AGCRACK, 2598, -8821, 1500, 0, -120, 0, (6 << 24), bhvAgcrack),
		OBJECT(MODEL_EXCLAMATION_BOX, -4214, 2294, -5821, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1745, 2635, 6497, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 3277, 3978, 5047, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_FORM1, 0, -9144, 0, 0, 0, 0, 0x00000000, bhvAgform),
		OBJECT(MODEL_AGHEART, 0, 3050, 0, 0, 0, 0, 0x00000000, bhvAgheart),
		OBJECT(MODEL_AG_KILLER_LASER, 0, 3050, 0, 0, 0, 0, 0x00000000, bhvKillerLaser),
		OBJECT(MODEL_PALAMEDES, 91, 238, 7941, 0, 0, 0, 0x00000000, bhvPalamedes),
		OBJECT(MODEL_RR_DOOR, 91, 880, 10924, 0, 0, 0, 0x00000000, bhvRR_Door),
		OBJECT(MODEL_NONE, 83, 398, 11453, 0, -180, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -2481, 14618, 2496, 0, 0, 0, 0x00000000, bhvStaticObject),
		TERRAIN(rr_area_0_collision),
		ROOMS(rr_area_0_collision_rooms),
		MACRO_OBJECTS(rr_area_0_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -82, -237, 11346),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
