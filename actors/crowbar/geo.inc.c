#include "src/game/envfx_snow.h"

const GeoLayout crowbar_geo[] = {
	GEO_CULLING_RADIUS(100),
	GEO_OPEN_NODE(),
		GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, crowbar3_Cylinder_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, crowbar3_material_revert_render_settings),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
