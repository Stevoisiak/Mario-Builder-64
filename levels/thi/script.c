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
#include "levels/thi/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_thi_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bits_skybox_yay0SegmentRomStart, _bits_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, thi_geo_0005F0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_PINK_COIN, pink_coin_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ANGEL, angel_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TWISTY, twisty_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_IDOL_1, idol1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_IDOL_2, idol2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_IDOL_3, idol3_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_IDOL_4, idol4_geo), 
	//LOAD_MODEL_FROM_GEO(MODEL_TVHEAD_THI, tvhead_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_CAGE, thi_cage_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, thi_area_1),
		WARP_NODE(0x0A, LEVEL_THI, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_THI, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02/*rec*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_BITS, 0x01, 0x08, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_BITS, 0x01, 0x07, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_1UP, -7356, 8157, -10650, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -721, 7393, -10929, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, 4950, 3556, -5794, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -2887, 5903, -9278, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_ANGEL, -3742, 6204, -1843, 0, 63, 0, (DIALOG_CUBOID_6 << 16), bhvAngel),
		OBJECT(MODEL_ANGEL, 4431, 3556, 1603, 0, 48, 0, (DIALOG_CUBOID_1 << 16), bhvAngel),
		OBJECT(MODEL_ANGEL, -6781, 6105, -1399, 0, -46, 0, (DIALOG_CUBOID_2 << 16), bhvAngel),
		OBJECT(MODEL_ANGEL, -6727, 7641, -2690, 0, -9, 0, (DIALOG_CUBOID_3 << 16), bhvAngel),
		OBJECT(MODEL_ANGEL, -5270, 6105, -3928, 0, 44, 0, (DIALOG_CUBOID_4 << 16), bhvAngel),
		OBJECT(MODEL_ANGEL, -4774, 7705, -4412, 0, 6, 0, (DIALOG_CUBOID_5 << 16), bhvAngel),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -6258, 3983, -5446, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BLUE_COIN, -5761, 3983, -6077, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5761, 4183, -6077, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5761, 4383, -6077, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5761, 4583, -6077, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -7004, 3983, -6076, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -9106, 3983, -6077, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -9106, 4183, -6077, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_THI_CAGE, -3486, 8738, 2200, 0, 0, 0, (4 << 24), bhvThiCage),
		OBJECT(MODEL_CHUCKYA, 5672, 3555, -5051, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 91, 4923, -10435, 0, 76, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_NONE, -1258, 4603, 1218, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -486, 5238, -120, 0, 0, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1853, 3556, -784, 0, 0, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2910, 6105, -1026, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2462, 6456, 753, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3643, 4603, 4266, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6660, 6105, -8541, 0, 0, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4296, 5517, -9884, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2002, 6777, -9362, 0, 81, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5156, 3654, -4609, 0, -180, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -482, 4603, 2065, 0, -90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -8710, 7060, 322, 0, 0, 0, 0x00000000, bhvStaticObject),
		OBJECT(MODEL_EXCLAMATION_BOX, 2786, 7916, -7665, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 3051, 6400, -3829, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -4298, 5049, -774, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -4299, 4314, 2470, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 3327, 6895, -9582, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1253, 10623, -7973, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2042, 6505, -2199, 0, 0, 0, (2 << 16), bhvExclamationBox),
		OBJECT(0xEB, -2965, 6346, -3741, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -3632, 4926, 4198, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -5647, 7761, -7391, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, -487, 5567, -1132, 0, 90, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEB, 5005, 3933, -3768, 0, -180, 0, 0x00000000, bhvGoldRing),
		OBJECT(0xEF, -1499, 7031, -2177, 0, 0, 0, 0x00000000, bhvGreenCoin),
		OBJECT(0xEF, -103, 3556, 3304, 0, 0, 0, 0x00000000, bhvGreenCoin),
		OBJECT(0xEF, -3130, 4603, 2826, 0, 0, 0, 0x00000000, bhvGreenCoin),
		OBJECT(0xEF, -3481, 6105, -5096, 0, 0, 0, 0x00000000, bhvGreenCoin),
		OBJECT(0xEF, -4693, 3996, -1154, 0, 0, 0, 0x00000000, bhvGreenCoin),
		OBJECT(0xEF, -5982, 8666, -7559, 0, 0, 0, 0x00000000, bhvGreenCoin),
		OBJECT(MODEL_IDOL_1, -7935, 3556, -299, 0, -180, 0, (6 << 24), bhvIdol),
		OBJECT(MODEL_IDOL_1, -2926, 8529, -11440, 0, -180, 0, (6 << 24), bhvIdol),
		OBJECT(MODEL_IDOL_1, -20, 4923, -9567, 0, -180, 0, (6 << 24), bhvIdol),
		OBJECT(MODEL_IDOL_1, 75, 7330, -6619, 0, 90, 0, (6 << 24), bhvIdol),
		OBJECT(MODEL_IDOL_1, -4296, 5517, -10508, 0, -180, 0, (6 << 24), bhvIdol),
		MARIO_POS(0x01, 0, 4686, 3556, 1814),
		OBJECT(MODEL_MARIO, -6667, 3983, -5446, 0, 0, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, -5850, 3983, -5446, 0, 0, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, -1614, 10287, -8370, 0, 0, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_MARIO, -6979, 6105, -10903, 0, 0, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_THI_PINK_COIN, 205, 4322, 104, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, -1280, 5042, -494, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, -2015, 5362, 178, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, 2988, 6048, -9829, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, -4237, 5760, -8694, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, -2413, 5635, -178, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, 443, 4973, -3324, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_THI_PINK_COIN, -3288, 4145, 259, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -1980, 10287, -8849, 0, 0, 0, (200 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3486, 7052, 2948, 0, 0, 0, (200 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 1452, 4923, -10066, 0, 0, 0, (200 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 1137, 3556, 3597, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 228, 3556, 3844, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 5218, 3556, -6299, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -1148, 6105, -4452, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -560, 6105, -5298, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2829, 4669, -3218, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 4105, 6034, -6212, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -4526, 6105, -6593, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -7356, 6105, -10650, 0, 0, 0, (200 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5517, 3556, 3180, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6100, 3556, 1820, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -7057, 3556, -639, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6975, 8666, -8694, 0, 0, 0, (50 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_PURPLE_SWITCH, -3288, 4145, -369, 0, 0, 0, (2 << 24) | (40 << 16), bhvPurpleSwitchHiddenBoxes),
		OBJECT(MODEL_NONE, 976, 4803, 2649, 0, 0, 0, (1 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 3046, 4966, -7144, 0, -180, 0, (2 << 16), bhvAirborneWarp),
		OBJECT(MODEL_NONE, -8608, 13092, -10191, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_NONE, 937, 3920, -10530, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_TVHEAD_THI, -3674, 8537, -2165, 0, 51, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TVHEAD_THI, 2282, 6495, -6172, 0, -44, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TVHEAD_THI, -8091, 6325, -10953, 0, 41, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TVHEAD_THI, -5786, 3686, 2261, 0, 111, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TVHEAD_THI, -7481, 6322, -5043, 0, 86, 0, 0x00000000, bhvTVhead),
		OBJECT(MODEL_TWISTY, -4104, 6375, 753, 0, 90, 0, 0x00000000, bhvTwisty),
		OBJECT(MODEL_TWISTY, -6780, 12401, -10191, 0, 90, 0, 0x00000000, bhvTwisty),
		OBJECT(MODEL_TWISTY, -7999, 3902, -6077, 0, 90, 0, 0x00000000, bhvTwisty),
		OBJECT(MODEL_TWISTY, -7694, 7005, 322, 0, 90, 0, 0x00000000, bhvTwisty),
		OBJECT(MODEL_NONE, 4686, 3556, 1814, 0, -90, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -3231, 4517, -686, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		TERRAIN(thi_area_1_collision),
		MACRO_OBJECTS(thi_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_NSMB_CASTLE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, thi_area_2),
		WARP_NODE(0x0A, LEVEL_THI, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_THI, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02/*rec*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_BITS, 0x01, 0x08, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_BITS, 0x01, 0x07, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_FLAME, -1216, 764, 1767, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1216, 764, -766, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1216, 764, -3299, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1216, 764, 1767, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1216, 764, -766, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1216, 764, -3299, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_NONE, 0, 253, 3819, 0, -180, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 0, -664, -5141, 0, 0, 0, (50 << 24) | (1 << 16), bhvWarp),
		TERRAIN(thi_area_2_collision),
		MACRO_OBJECTS(thi_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 4686, 3556, 1814),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
