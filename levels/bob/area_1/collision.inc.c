const Collision bob_area_1_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(12),
	COL_VERTEX(4650, 1050, 4950),
	COL_VERTEX(4650, 1350, 4950),
	COL_VERTEX(4650, 1350, 4650),
	COL_VERTEX(4650, 1050, 4650),
	COL_VERTEX(4950, 1350, 4650),
	COL_VERTEX(4950, 1050, 4650),
	COL_VERTEX(4950, 1350, 4950),
	COL_VERTEX(4950, 1050, 4950),
	COL_VERTEX(-150, -2000, 9450),
	COL_VERTEX(9450, -2000, 9450),
	COL_VERTEX(9450, -2000, -150),
	COL_VERTEX(-150, -2000, -150),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(3, 5, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 6),
	COL_TRI_INIT(SURFACE_DEATH_PLANE, 2),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI_STOP(),
	COL_END()
};