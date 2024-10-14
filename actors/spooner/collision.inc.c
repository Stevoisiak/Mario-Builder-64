const Collision spooner_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(12),
	COL_VERTEX(100, 0, 58),
	COL_VERTEX(100, 0, -58),
	COL_VERTEX(100, 256, -58),
	COL_VERTEX(100, 256, 58),
	COL_VERTEX(-100, 0, 58),
	COL_VERTEX(-100, 0, -58),
	COL_VERTEX(0, 0, -115),
	COL_VERTEX(0, 0, 115),
	COL_VERTEX(0, 256, -115),
	COL_VERTEX(-100, 256, -58),
	COL_VERTEX(-100, 256, 58),
	COL_VERTEX(0, 256, 115),
	COL_TRI_INIT(SURFACE_NO_CAM_COLLISION, 20),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(6, 1, 0),
	COL_TRI(0, 7, 4),
	COL_TRI(6, 0, 4),
	COL_TRI(2, 8, 9),
	COL_TRI(9, 10, 11),
	COL_TRI(11, 3, 2),
	COL_TRI(9, 11, 2),
	COL_TRI(6, 5, 9),
	COL_TRI(6, 9, 8),
	COL_TRI(4, 7, 11),
	COL_TRI(4, 11, 10),
	COL_TRI(1, 6, 8),
	COL_TRI(1, 8, 2),
	COL_TRI(7, 0, 3),
	COL_TRI(7, 3, 11),
	COL_TRI(5, 4, 10),
	COL_TRI(5, 10, 9),
	COL_TRI_STOP(),
	COL_END()
};
