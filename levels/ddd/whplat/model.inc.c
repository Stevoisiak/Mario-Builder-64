Lights1 whplat_Bricks_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 whplat_Floor_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx whplat_Bricks_ci8_aligner[] = {gsSPEndDisplayList()};
u8 whplat_Bricks_ci8[] = {
	0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x02, 0x03, 
	0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x05, 0x06, 
	0x07, 0x08, 0x08, 0x04, 0x09, 0x09, 0x00, 0x00, 
	0x0a, 0x0a, 0x04, 0x04, 0x00, 0x04, 0x04, 0x00, 
	0x00, 0x00, 0x0a, 0x0a, 0x02, 0x02, 0x04, 0x03, 
	0x0b, 0x0b, 0x0b, 0x0c, 0x05, 0x05, 0x05, 0x05, 
	0x0d, 0x08, 0x08, 0x08, 0x00, 0x00, 0x0e, 0x00, 
	0x04, 0x04, 0x0a, 0x0a, 0x04, 0x04, 0x04, 0x0f, 
	0x01, 0x01, 0x0a, 0x0a, 0x00, 0x02, 0x02, 0x02, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x03, 0x03, 0x03, 0x05, 
	0x07, 0x08, 0x0d, 0x04, 0x09, 0x00, 0x00, 0x00, 
	0x0a, 0x04, 0x0a, 0x04, 0x04, 0x05, 0x0f, 0x04, 
	0x00, 0x10, 0x10, 0x0a, 0x00, 0x04, 0x02, 0x04, 
	0x11, 0x11, 0x0b, 0x0b, 0x03, 0x12, 0x03, 0x05, 
	0x07, 0x04, 0x04, 0x04, 0x09, 0x09, 0x09, 0x00, 
	0x01, 0x01, 0x01, 0x13, 0x00, 0x00, 0x0f, 0x04, 
	0x00, 0x10, 0x14, 0x00, 0x15, 0x12, 0x15, 0x15, 
	0x0b, 0x0b, 0x04, 0x04, 0x09, 0x09, 0x04, 0x05, 
	0x16, 0x04, 0x00, 0x04, 0x17, 0x18, 0x18, 0x00, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x09, 0x0f, 
	0x00, 0x14, 0x00, 0x00, 0x15, 0x12, 0x11, 0x11, 
	0x04, 0x00, 0x1a, 0x04, 0x09, 0x04, 0x02, 0x05, 
	0x16, 0x04, 0x00, 0x00, 0x0f, 0x18, 0x18, 0x18, 
	0x1b, 0x1b, 0x00, 0x19, 0x19, 0x00, 0x00, 0x0f, 
	0x00, 0x14, 0x00, 0x1c, 0x12, 0x1b, 0x12, 0x12, 
	0x00, 0x00, 0x1a, 0x04, 0x04, 0x04, 0x02, 0x05, 
	0x1d, 0x04, 0x04, 0x00, 0x18, 0x18, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x09, 
	0x14, 0x10, 0x10, 0x1c, 0x1b, 0x1b, 0x12, 0x12, 
	0x04, 0x04, 0x00, 0x00, 0x02, 0x04, 0x02, 0x05, 
	0x1d, 0x04, 0x00, 0x04, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x09, 0x00, 0x09, 0x00, 
	0x1e, 0x1e, 0x1e, 0x0a, 0x12, 0x12, 0x1c, 0x12, 
	0x12, 0x12, 0x12, 0x12, 0x04, 0x04, 0x04, 0x06, 
	0x16, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 
	0x0a, 0x0f, 0x08, 0x08, 0x0f, 0x04, 0x04, 0x00, 
	0x1e, 0x1e, 0x0a, 0x0a, 0x12, 0x12, 0x12, 0x12, 
	0x12, 0x12, 0x12, 0x12, 0x04, 0x04, 0x06, 0x1f, 
	0x16, 0x04, 0x04, 0x04, 0x1a, 0x1a, 0x04, 0x04, 
	0x0f, 0x0f, 0x0f, 0x0a, 0x04, 0x04, 0x00, 0x00, 
	0x0a, 0x20, 0x0a, 0x21, 0x11, 0x11, 0x12, 0x12, 
	0x12, 0x12, 0x05, 0x05, 0x04, 0x05, 0x1f, 0x1f, 
	0x22, 0x21, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 
	0x0f, 0x0f, 0x08, 0x0f, 0x0f, 0x05, 0x0f, 0x0f, 
	0x21, 0x20, 0x20, 0x21, 0x11, 0x23, 0x23, 0x23, 
	0x24, 0x0d, 0x0d, 0x0d, 0x06, 0x1f, 0x1f, 0x1f, 
	0x22, 0x22, 0x16, 0x21, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x1d, 0x1d, 0x08, 0x08, 0x0f, 0x0f, 0x05, 0x05, 
	0x05, 0x07, 0x07, 0x07, 0x25, 0x25, 0x16, 0x16, 
	0x0b, 0x04, 0x04, 0x0f, 0x0b, 0x1d, 0x16, 0x16, 
	0x26, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0a, 0x05, 
	0x27, 0x27, 0x27, 0x27, 0x28, 0x0b, 0x0b, 0x0b, 
	0x1e, 0x12, 0x05, 0x07, 0x25, 0x16, 0x0b, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x09, 0x0b, 0x1d, 0x16, 
	0x0f, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x00, 0x0a, 
	0x00, 0x27, 0x27, 0x1f, 0x28, 0x00, 0x00, 0x00, 
	0x1e, 0x12, 0x05, 0x05, 0x16, 0x0b, 0x00, 0x00, 
	0x04, 0x04, 0x04, 0x04, 0x09, 0x0b, 0x0b, 0x16, 
	0x04, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x01, 0x00, 0x27, 0x1f, 0x0b, 0x00, 0x00, 0x19, 
	0x1e, 0x1e, 0x12, 0x12, 0x16, 0x0b, 0x0b, 0x0b, 
	0x04, 0x0f, 0x00, 0x00, 0x09, 0x09, 0x09, 0x16, 
	0x04, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x27, 0x1f, 0x00, 0x19, 0x00, 0x00, 
	0x19, 0x19, 0x00, 0x09, 0x29, 0x1d, 0x03, 0x03, 
	0x15, 0x15, 0x15, 0x15, 0x05, 0x04, 0x05, 0x06, 
	0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x12, 0x1c, 0x08, 0x29, 0x1a, 0x1a, 0x10, 0x10, 
	0x00, 0x19, 0x00, 0x0f, 0x29, 0x29, 0x29, 0x03, 
	0x15, 0x15, 0x11, 0x11, 0x06, 0x06, 0x1f, 0x1f, 
	0x0f, 0x00, 0x04, 0x04, 0x18, 0x00, 0x18, 0x0f, 
	0x08, 0x12, 0x08, 0x29, 0x27, 0x1a, 0x1a, 0x1a, 
	0x00, 0x00, 0x09, 0x0f, 0x03, 0x03, 0x2a, 0x2a, 
	0x00, 0x1a, 0x1a, 0x00, 0x04, 0x05, 0x06, 0x1f, 
	0x26, 0x04, 0x04, 0x0f, 0x0f, 0x18, 0x18, 0x18, 
	0x1c, 0x12, 0x08, 0x29, 0x27, 0x18, 0x1a, 0x1a, 
	0x09, 0x00, 0x00, 0x0f, 0x2a, 0x2a, 0x2a, 0x2a, 
	0x1a, 0x1a, 0x00, 0x15, 0x04, 0x04, 0x06, 0x1f, 
	0x26, 0x0f, 0x00, 0x0f, 0x0f, 0x18, 0x18, 0x17, 
	0x1c, 0x12, 0x12, 0x29, 0x27, 0x18, 0x1a, 0x18, 
	0x20, 0x09, 0x14, 0x09, 0x00, 0x0f, 0x0f, 0x04, 
	0x19, 0x00, 0x09, 0x09, 0x08, 0x04, 0x04, 0x06, 
	0x07, 0x1e, 0x12, 0x05, 0x04, 0x00, 0x04, 0x04, 
	0x12, 0x12, 0x05, 0x05, 0x1d, 0x09, 0x09, 0x09, 
	0x20, 0x09, 0x09, 0x20, 0x0f, 0x04, 0x0f, 0x00, 
	0x00, 0x00, 0x09, 0x0f, 0x08, 0x04, 0x04, 0x06, 
	0x12, 0x12, 0x12, 0x05, 0x2b, 0x04, 0x00, 0x04, 
	0x03, 0x03, 0x05, 0x06, 0x16, 0x0b, 0x09, 0x09, 
	0x20, 0x14, 0x00, 0x09, 0x00, 0x04, 0x0f, 0x00, 
	0x00, 0x00, 0x09, 0x0f, 0x04, 0x12, 0x04, 0x06, 
	0x12, 0x05, 0x05, 0x05, 0x2b, 0x00, 0x14, 0x00, 
	0x03, 0x05, 0x06, 0x06, 0x16, 0x1d, 0x09, 0x09, 
	0x09, 0x14, 0x09, 0x09, 0x00, 0x00, 0x04, 0x00, 
	0x09, 0x00, 0x0f, 0x0f, 0x04, 0x12, 0x04, 0x08, 
	0x12, 0x05, 0x05, 0x05, 0x00, 0x14, 0x14, 0x14, 
	0x03, 0x06, 0x06, 0x06, 0x16, 0x1d, 0x0b, 0x0b, 
	0x00, 0x00, 0x18, 0x18, 0x1c, 0x1c, 0x20, 0x09, 
	0x18, 0x18, 0x18, 0x0f, 0x20, 0x20, 0x20, 0x20, 
	0x0f, 0x08, 0x0f, 0x0a, 0x1b, 0x1e, 0x1e, 0x1b, 
	0x02, 0x06, 0x06, 0x1f, 0x07, 0x21, 0x21, 0x20, 
	0x00, 0x00, 0x00, 0x0f, 0x09, 0x09, 0x20, 0x20, 
	0x18, 0x18, 0x00, 0x18, 0x20, 0x20, 0x20, 0x1d, 
	0x08, 0x08, 0x0f, 0x0a, 0x00, 0x1e, 0x1e, 0x1b, 
	0x02, 0x06, 0x06, 0x1f, 0x06, 0x21, 0x20, 0x20, 
	0x18, 0x18, 0x18, 0x17, 0x08, 0x09, 0x20, 0x20, 
	0x0f, 0x0f, 0x0f, 0x18, 0x20, 0x20, 0x1d, 0x2c, 
	0x08, 0x0f, 0x0a, 0x0a, 0x00, 0x1e, 0x1b, 0x1b, 
	0x00, 0x02, 0x06, 0x1f, 0x06, 0x07, 0x21, 0x20, 
	0x17, 0x0f, 0x0f, 0x0f, 0x20, 0x20, 0x20, 0x20, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x20, 0x1d, 0x2d, 0x2d, 
	0x16, 0x08, 0x08, 0x0f, 0x12, 0x00, 0x12, 0x00, 
	0x00, 0x02, 0x1f, 0x1f, 0x06, 0x07, 0x07, 0x21, 
	0x16, 0x16, 0x16, 0x16, 0x1d, 0x03, 0x03, 0x03, 
	0x11, 0x11, 0x0c, 0x0c, 0x08, 0x07, 0x23, 0x2e, 
	0x22, 0x22, 0x16, 0x16, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x1f, 0x1f, 0x1f, 0x29, 0x29, 0x29, 0x29, 
	0x16, 0x16, 0x16, 0x16, 0x29, 0x29, 0x1d, 0x1d, 
	0x11, 0x11, 0x11, 0x11, 0x07, 0x07, 0x23, 0x2e, 
	0x2f, 0x2f, 0x22, 0x22, 0x1f, 0x1f, 0x06, 0x1f, 
	0x1f, 0x1f, 0x1f, 0x1f, 0x29, 0x29, 0x29, 0x29, 
	0x08, 0x08, 0x0f, 0x0f, 0x03, 0x03, 0x1d, 0x1d, 
	0x0b, 0x0b, 0x0b, 0x0c, 0x08, 0x08, 0x07, 0x2e, 
	0x2f, 0x22, 0x16, 0x16, 0x06, 0x02, 0x00, 0x00, 
	0x00, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x2a, 0x2a, 0x03, 0x03, 
	0x0b, 0x04, 0x04, 0x0b, 0x08, 0x08, 0x07, 0x23, 
	0x22, 0x0b, 0x0b, 0x0b, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x1b, 0x1b, 0x04, 0x08, 
	
};

Gfx whplat_Bricks_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 whplat_Bricks_ci8_pal_rgba16[] = {
	0x94, 0xa5, 0xa4, 0xe7, 0x83, 0xdf, 0x7b, 0x9d, 
	0x84, 0x21, 0x6b, 0x5b, 0x5a, 0xd7, 0x4a, 0x53, 
	0x73, 0x9b, 0x8c, 0x63, 0x94, 0xa3, 0x73, 0x9d, 
	0x6b, 0x19, 0x5a, 0xd5, 0xa5, 0x27, 0x7b, 0xdf, 
	0xb5, 0x6b, 0x62, 0xd7, 0x94, 0x63, 0xb5, 0xad, 
	0xa5, 0x29, 0x7b, 0xdd, 0x52, 0x95, 0x73, 0x5b, 
	0x8c, 0x21, 0xad, 0x6b, 0x9c, 0xe5, 0x9c, 0xa5, 
	0x9c, 0xe7, 0x63, 0x19, 0xad, 0x29, 0x42, 0x11, 
	0x84, 0x1f, 0x6b, 0x59, 0x41, 0xcf, 0x39, 0xcd, 
	0x3a, 0x0f, 0x39, 0x8d, 0x52, 0x53, 0x63, 0x17, 
	0x52, 0x93, 0x4a, 0x51, 0x8c, 0x61, 0x6b, 0x1b, 
	0x52, 0x55, 0x39, 0x8f, 0x18, 0xc7, 0x29, 0x09, 
	
};

Gfx whplat_Floor_i8_aligner[] = {gsSPEndDisplayList()};
u8 whplat_Floor_i8[] = {
	0x8d, 0x98, 0xb5, 0xc0, 0xc0, 0xc0, 0xc0, 0xb5, 
	0xa8, 0xb8, 0xb8, 0x90, 0x98, 0x98, 0x68, 0x68, 
	0x80, 0x98, 0x98, 0xa8, 0x88, 0x88, 0x88, 0x68, 
	0x5d, 0x68, 0x68, 0x79, 0x90, 0x90, 0x90, 0x90, 
	0x8d, 0x8d, 0x98, 0xc0, 0xc8, 0xc8, 0xb0, 0xb0, 
	0xa8, 0xa8, 0x68, 0x68, 0x65, 0x65, 0x65, 0x65, 
	0x70, 0x8d, 0x8d, 0x70, 0x68, 0x68, 0x98, 0xc0, 
	0xa8, 0x98, 0x95, 0x8d, 0x86, 0x8e, 0x8e, 0x8e, 
	0x98, 0xb5, 0xb5, 0x98, 0x98, 0x98, 0x98, 0x8d, 
	0x90, 0x98, 0xa8, 0xb8, 0xc0, 0x98, 0x88, 0x88, 
	0x89, 0x80, 0x89, 0x98, 0x88, 0x68, 0x68, 0x68, 
	0x5d, 0x79, 0x79, 0x79, 0x90, 0x98, 0x90, 0xa8, 
	0x8d, 0x98, 0xb5, 0xb5, 0xa1, 0xa1, 0x90, 0xa1, 
	0xa8, 0xa8, 0xc0, 0xa8, 0xa1, 0xa1, 0x79, 0x65, 
	0x58, 0x58, 0x70, 0x70, 0x98, 0x98, 0xa8, 0xa8, 
	0xa8, 0x98, 0x98, 0x8d, 0x86, 0x86, 0x8e, 0x98, 
	0xb5, 0x98, 0x8d, 0x8d, 0x98, 0x98, 0x98, 0x98, 
	0x90, 0x90, 0x98, 0xb8, 0xc0, 0x88, 0x88, 0x98, 
	0xa8, 0x80, 0x80, 0x80, 0x88, 0x98, 0x98, 0x88, 
	0x90, 0x79, 0x68, 0x79, 0xa8, 0xa8, 0x98, 0xa8, 
	0x8d, 0xc0, 0xc0, 0x98, 0xa1, 0xb0, 0x90, 0x90, 
	0xa8, 0x98, 0xa8, 0xa8, 0xb9, 0xb9, 0xa1, 0xa1, 
	0x70, 0x70, 0x58, 0x8d, 0xa8, 0xc0, 0xc0, 0xa8, 
	0x95, 0xa8, 0x98, 0x98, 0x98, 0x86, 0x98, 0xa8, 
	0xb5, 0xb5, 0x98, 0x98, 0x98, 0x98, 0x98, 0x8d, 
	0x90, 0xa8, 0xb8, 0xb8, 0xc0, 0x68, 0x98, 0x98, 
	0x98, 0xa8, 0xa8, 0xa8, 0xc0, 0xc0, 0x98, 0x98, 
	0x90, 0x90, 0x68, 0x79, 0xb8, 0xb8, 0xa8, 0xb8, 
	0xc0, 0xc0, 0x98, 0xb5, 0xa1, 0xa1, 0x90, 0x90, 
	0x98, 0xa8, 0xa8, 0xa8, 0xb9, 0xb9, 0xb9, 0xb9, 
	0x8d, 0x70, 0x8d, 0xa8, 0xa8, 0xc0, 0xa8, 0xa8, 
	0x98, 0xa8, 0xa8, 0x98, 0xa8, 0xa8, 0xa8, 0xa8, 
	0x90, 0x90, 0x90, 0xb8, 0xb0, 0xa8, 0xa8, 0xa8, 
	0xa1, 0xb0, 0xb0, 0xc8, 0xa8, 0x65, 0x79, 0x8d, 
	0xb8, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xa8, 
	0xa8, 0x90, 0x78, 0x78, 0xc0, 0xc0, 0xa0, 0xa0, 
	0xb0, 0xa8, 0xa8, 0xb0, 0xb0, 0xb0, 0xa1, 0xa1, 
	0x90, 0xa8, 0xa8, 0x98, 0xc8, 0xc8, 0xb0, 0xb0, 
	0xb9, 0x79, 0xa1, 0xb9, 0xb8, 0xd0, 0xb8, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xb8, 0xb8, 0x98, 0x90, 
	0x98, 0xa8, 0x90, 0xa8, 0xb0, 0xc0, 0xa8, 0xb0, 
	0xb0, 0xb0, 0xc8, 0xc8, 0x79, 0x65, 0x8d, 0xa8, 
	0xb8, 0xb0, 0x98, 0x98, 0x98, 0x98, 0x98, 0xa8, 
	0xa8, 0xa8, 0x88, 0x88, 0xb9, 0xb9, 0xa0, 0xa0, 
	0xb0, 0xb8, 0xa8, 0xb0, 0xb0, 0xb0, 0xb0, 0xa1, 
	0x98, 0x98, 0xb8, 0xb8, 0xc8, 0xb0, 0xb0, 0xb0, 
	0xa1, 0x65, 0xa1, 0xa1, 0xa8, 0x98, 0x98, 0x98, 
	0x98, 0xb8, 0xb8, 0xb8, 0xb8, 0xa8, 0x90, 0x90, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xc0, 0xa0, 0xa0, 0xc0, 
	0xc8, 0xb0, 0xc8, 0xa1, 0x65, 0x79, 0xa8, 0xa8, 
	0xb0, 0x98, 0x98, 0x98, 0xa8, 0xa8, 0x98, 0x98, 
	0x90, 0xa8, 0x90, 0x78, 0x81, 0x81, 0xa0, 0xb9, 
	0xc8, 0xc8, 0xb8, 0xb8, 0xb0, 0x90, 0x90, 0xa1, 
	0xb8, 0xa8, 0xa8, 0xa8, 0xa1, 0xa1, 0xa1, 0xa1, 
	0xa1, 0x65, 0x79, 0xb9, 0xa8, 0xa8, 0x98, 0x98, 
	0x90, 0x90, 0x98, 0x98, 0x98, 0xa8, 0xa8, 0xa8, 
	0xb8, 0xb8, 0xb8, 0x90, 0xb0, 0xb0, 0xa8, 0xb0, 
	0xb0, 0xc8, 0xa1, 0x90, 0x79, 0xa8, 0xa8, 0xa8, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xa8, 0xa8, 0xa8, 0xa8, 
	0x90, 0xa8, 0xa8, 0x88, 0xa0, 0xa0, 0xb9, 0xc0, 
	0xc8, 0xc8, 0xc8, 0xb0, 0xa1, 0xa1, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0x90, 0x90, 0x90, 0xa1, 0xa1, 
	0xb9, 0xa1, 0x79, 0xb9, 0xa8, 0xb8, 0xa8, 0xa8, 
	0x98, 0x98, 0x98, 0xa8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0x88, 0x88, 0x90, 0xa8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xa8, 0xa8, 0x8d, 0x70, 0x90, 0xb9, 0xb9, 0xb9, 
	0x8e, 0xa8, 0xa8, 0xa8, 0xb9, 0xb9, 0xb9, 0xa1, 
	0x98, 0xb0, 0xb0, 0xb0, 0x90, 0x90, 0xa1, 0xa1, 
	0xa1, 0xa1, 0xb0, 0xb0, 0xa1, 0xb9, 0x90, 0x81, 
	0x98, 0x98, 0x98, 0x90, 0x90, 0x98, 0xb8, 0xb8, 
	0xa8, 0x90, 0x78, 0xa8, 0xb8, 0xb8, 0xb8, 0x98, 
	0x98, 0x98, 0xa8, 0xb8, 0xb9, 0xb9, 0xb9, 0x90, 
	0x88, 0x78, 0x78, 0x88, 0x90, 0xb8, 0xc0, 0xc0, 
	0xa8, 0x8d, 0x58, 0x70, 0xa1, 0xb9, 0xa1, 0x81, 
	0x86, 0x86, 0x8e, 0x8e, 0xa1, 0xa1, 0xa1, 0xb9, 
	0xb0, 0xb0, 0xb0, 0xb0, 0x90, 0x81, 0x81, 0xa1, 
	0xa1, 0x98, 0x98, 0x98, 0x90, 0x90, 0xa1, 0x90, 
	0x98, 0xa8, 0xa8, 0x98, 0x90, 0xb8, 0x90, 0x90, 
	0x90, 0x78, 0x78, 0xa8, 0xb8, 0xa8, 0xa8, 0xa8, 
	0xb8, 0xb8, 0xa8, 0xa8, 0xa1, 0x90, 0x90, 0x81, 
	0x88, 0x88, 0x88, 0x88, 0x90, 0xb8, 0xb8, 0x90, 
	0x70, 0x58, 0x70, 0x70, 0xa1, 0x90, 0x81, 0x90, 
	0x86, 0x86, 0x98, 0x98, 0x90, 0x90, 0x90, 0xa1, 
	0x89, 0x98, 0x98, 0x98, 0x90, 0x81, 0x90, 0xb9, 
	0xa0, 0x98, 0x98, 0x98, 0x81, 0x90, 0xa1, 0xb9, 
	0xb8, 0xa8, 0xa8, 0x90, 0xa8, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x78, 0x90, 0xa8, 0xa8, 0x98, 0x90, 
	0x90, 0x90, 0x90, 0x98, 0xa1, 0xa1, 0x90, 0x90, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xc0, 0xb8, 0x90, 0x68, 
	0x70, 0x8d, 0xa8, 0x8d, 0x81, 0x81, 0x90, 0x90, 
	0x98, 0x98, 0x98, 0x8e, 0x81, 0x81, 0x90, 0xa1, 
	0x98, 0x89, 0x89, 0x98, 0xa1, 0x81, 0x90, 0xb9, 
	0xa1, 0xa0, 0x98, 0x98, 0xa1, 0x90, 0x90, 0xb9, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xa8, 0x90, 0x98, 0xa8, 
	0x90, 0xa8, 0x78, 0x78, 0x98, 0x98, 0xa8, 0xa8, 
	0x98, 0x98, 0x98, 0x98, 0xb9, 0xa1, 0xa1, 0xa1, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x98, 0x88, 0x88, 
	0xb0, 0xb0, 0xb8, 0x98, 0x65, 0x79, 0xa1, 0xa1, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0xa8, 0xa8, 
	0x98, 0x95, 0x8d, 0x8d, 0x98, 0x88, 0x98, 0xc0, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xa8, 0xb8, 0xb8, 
	0xb8, 0x98, 0x90, 0x90, 0x90, 0x90, 0xa1, 0xb0, 
	0xa0, 0xa0, 0xa0, 0x70, 0xa0, 0xb9, 0xb9, 0xc0, 
	0xb0, 0xa8, 0xa8, 0xb0, 0xb5, 0xb5, 0xc0, 0xc0, 
	0xa0, 0xb9, 0xc0, 0xa0, 0x88, 0x68, 0x88, 0x98, 
	0xb8, 0xb8, 0xc0, 0xb0, 0xa1, 0x79, 0x79, 0xa1, 
	0xb8, 0xb8, 0x90, 0x98, 0x98, 0xa8, 0xa8, 0xa8, 
	0xa8, 0x98, 0x8d, 0x8d, 0x98, 0x88, 0x98, 0xc0, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0xa8, 0xb8, 
	0x98, 0x98, 0x98, 0x98, 0xa1, 0xa1, 0xb0, 0xb0, 
	0xc0, 0xc0, 0xa0, 0x70, 0xb9, 0xc0, 0xa0, 0xc0, 
	0xc0, 0xb0, 0xb0, 0xb0, 0xb5, 0xb5, 0xb5, 0xc0, 
	0xc0, 0xa0, 0xa0, 0x81, 0x68, 0x68, 0x98, 0xc0, 
	0xc0, 0xb0, 0xc0, 0xb0, 0xa1, 0xa1, 0x65, 0xa1, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 0x98, 0xa8, 
	0xa8, 0xa8, 0x95, 0xa8, 0x98, 0x88, 0x88, 0x98, 
	0xa8, 0x98, 0xa8, 0xa8, 0x98, 0x90, 0x90, 0x90, 
	0x90, 0xa8, 0x98, 0x90, 0x90, 0xb0, 0xb0, 0xc8, 
	0xc0, 0xc0, 0xa0, 0x70, 0xc0, 0xc0, 0xb9, 0xc0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xb5, 0xb5, 
	0xa0, 0x81, 0x81, 0x81, 0x88, 0x88, 0xc0, 0xc0, 
	0x98, 0xb0, 0xb8, 0xb8, 0xb9, 0xb9, 0x79, 0x79, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0x98, 0xa8, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0x98, 0x88, 0x88, 0x88, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x90, 0x90, 0x98, 
	0x90, 0x98, 0xa8, 0x98, 0xb0, 0xb0, 0xa1, 0xa1, 
	0xa0, 0xa0, 0x70, 0x38, 0x81, 0xc0, 0xc0, 0xb9, 
	0xd0, 0xb0, 0xc0, 0xc0, 0xc0, 0xb5, 0x98, 0x8d, 
	0x70, 0x70, 0x70, 0x70, 0xa0, 0xc0, 0xc0, 0xc0, 
	0x98, 0x98, 0x98, 0xa8, 0xa8, 0xa8, 0xa8, 0x70, 
	0xa8, 0x98, 0x98, 0x80, 0x70, 0x98, 0xb0, 0x98, 
	0x98, 0x98, 0x98, 0xa8, 0xa1, 0x88, 0xa1, 0xa1, 
	0x8e, 0x8e, 0x8e, 0x98, 0x98, 0xb8, 0xb8, 0xb8, 
	0xa0, 0xa0, 0xb0, 0xb0, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa8, 0x8d, 0x58, 0x58, 0x65, 0xa1, 0xb9, 0xb9, 
	0xb0, 0x98, 0x89, 0x70, 0x78, 0x90, 0xa8, 0x88, 
	0x70, 0x89, 0x98, 0xb0, 0xc0, 0xb0, 0xa8, 0xa0, 
	0x90, 0x98, 0x98, 0x98, 0x90, 0xa8, 0xd0, 0xa8, 
	0xa8, 0x98, 0x98, 0x80, 0x89, 0x98, 0x98, 0x89, 
	0x86, 0x86, 0x86, 0xa8, 0xa1, 0x78, 0xa1, 0xa1, 
	0x98, 0x98, 0x98, 0x86, 0x90, 0xa8, 0x90, 0x90, 
	0xa0, 0xa8, 0xb0, 0xa8, 0xa8, 0xc0, 0xc0, 0xc0, 
	0xa8, 0x70, 0x70, 0x70, 0x65, 0x65, 0xa1, 0x79, 
	0x70, 0x70, 0x70, 0x70, 0x90, 0xa8, 0xa8, 0xa8, 
	0x70, 0xb0, 0xb0, 0xb0, 0xb0, 0xa8, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xb8, 0xb8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0x80, 0x98, 0xa8, 0xa8, 0x98, 0x89, 0x89, 0x70, 
	0x86, 0x86, 0x8e, 0x98, 0xa1, 0x78, 0xa1, 0xa1, 
	0x98, 0xa8, 0x86, 0x86, 0x90, 0x90, 0x98, 0xa8, 
	0xb0, 0xc0, 0xc0, 0xc0, 0xc0, 0xa8, 0xa8, 0xa8, 
	0x58, 0x58, 0x70, 0x70, 0x79, 0x79, 0xa1, 0xb9, 
	0xb0, 0xb0, 0x98, 0x70, 0x78, 0x90, 0x90, 0x88, 
	0xb0, 0xb0, 0xb0, 0x98, 0xa8, 0xa0, 0xa8, 0xb0, 
	0xb8, 0xb8, 0x98, 0x90, 0x90, 0x90, 0x90, 0xa8, 
	0x89, 0x89, 0x98, 0x98, 0xb0, 0x98, 0x89, 0x89, 
	0x86, 0x98, 0xa8, 0xa8, 0xa1, 0x78, 0x88, 0xa1, 
	0xa8, 0x86, 0x86, 0x86, 0x90, 0x90, 0xa8, 0xb8, 
	0xc0, 0xc0, 0xa8, 0xa0, 0x98, 0xa8, 0x98, 0x68, 
	0x70, 0x8d, 0x8d, 0xa8, 0xb9, 0xb9, 0xb9, 0xa1, 
	0x98, 0xb0, 0xb0, 0x98, 0x78, 0x78, 0x88, 0x88, 
	0xb9, 0xc0, 0xb9, 0xb9, 0xa8, 0xa8, 0xb8, 0xb8, 
	0xb9, 0x90, 0x90, 0xa1, 0x98, 0xa8, 0x90, 0xa8, 
	0xb0, 0x89, 0x89, 0x98, 0x86, 0x86, 0xa8, 0xa8, 
	0xa8, 0xb8, 0xb8, 0xb8, 0xa8, 0x78, 0x88, 0x90, 
	0xa8, 0x90, 0x90, 0x98, 0xa8, 0xa8, 0xa8, 0xc8, 
	0xb0, 0xb0, 0xb0, 0xb0, 0x89, 0x70, 0x70, 0x89, 
	0xb0, 0xb0, 0xb0, 0xa1, 0x98, 0x98, 0xb8, 0xb8, 
	0xc8, 0xc8, 0xc8, 0xa1, 0x81, 0x81, 0x81, 0x81, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xb8, 0xb8, 0xa8, 0xa8, 
	0xa1, 0x90, 0x90, 0x90, 0xa8, 0xa8, 0xa8, 0xb8, 
	0xb0, 0xb0, 0x70, 0x89, 0x86, 0x98, 0x8e, 0x86, 
	0x90, 0xa8, 0xb8, 0xb8, 0xa8, 0x78, 0x90, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xb8, 0xc8, 0xc8, 0xb8, 0xb8, 
	0xb0, 0xb0, 0x85, 0x85, 0x70, 0x89, 0x98, 0x98, 
	0xa1, 0xb0, 0xb0, 0x90, 0xa8, 0xa8, 0x98, 0x90, 
	0x90, 0xb0, 0xc8, 0xc8, 0xc0, 0x81, 0x81, 0xa0, 
	0x81, 0xc0, 0xb9, 0xa0, 0x98, 0xa8, 0xa8, 0x98, 
	0x90, 0x90, 0x90, 0xa1, 0x98, 0x98, 0x98, 0xb8, 
	0xb0, 0xb0, 0x98, 0x70, 0xa8, 0x8e, 0x8e, 0x8e, 
	0x90, 0x90, 0xa8, 0x90, 0xa8, 0x78, 0xa8, 0xa8, 
	0xb8, 0xb8, 0xa8, 0x98, 0xb8, 0xc8, 0xc8, 0xa8, 
	0x85, 0x68, 0x68, 0x45, 0x70, 0xb0, 0x98, 0xb0, 
	0xb0, 0xa1, 0xb0, 0xa1, 0xb8, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0xa1, 0x90, 0xb9, 0xc0, 0xb9, 0xa0, 
	0x81, 0x81, 0xb9, 0xb9, 0x98, 0x98, 0xa8, 0xb8, 
	0xa1, 0xa1, 0x90, 0x90, 0x98, 0xa8, 0xa8, 0xa8, 
	0xb0, 0xb0, 0xb0, 0x89, 0x86, 0xa8, 0xa8, 0xa8, 
	0xa8, 0x98, 0x98, 0x98, 0x88, 0x78, 0x90, 0xa8, 
	0x98, 0xa8, 0xa8, 0xa8, 0xc8, 0xa8, 0x78, 0x78, 
	0x85, 0x68, 0x68, 0x68, 0xb0, 0xb0, 0xb0, 0xb0, 
	0xb0, 0xb0, 0xb0, 0xb0, 0x98, 0x90, 0x90, 0x98, 
	0xa1, 0xa1, 0xa1, 0x90, 0xa0, 0xc0, 0xc0, 0xb9, 
	0x89, 0x70, 0x98, 0xb0, 0x98, 0xb5, 0xb5, 0xb5, 
	0xc0, 0xc0, 0xa8, 0xa8, 0xb0, 0xb0, 0xb0, 0xb0, 
	0xb0, 0xb0, 0x98, 0x70, 0x70, 0x86, 0xa8, 0xa8, 
	0x98, 0x88, 0x88, 0x88, 0x70, 0x70, 0x70, 0x89, 
	0xa1, 0xb9, 0xa1, 0xa1, 0x8d, 0x70, 0x58, 0x8d, 
	0xb9, 0xb9, 0x79, 0x79, 0xa8, 0xb8, 0xb8, 0xa8, 
	0xa8, 0xb8, 0xb8, 0x98, 0x98, 0x90, 0x90, 0xa8, 
	0x98, 0x98, 0xa8, 0x98, 0xa0, 0xa1, 0xa1, 0xa0, 
	0x98, 0x70, 0x89, 0x98, 0xb5, 0xc0, 0xb5, 0xc0, 
	0xa8, 0xa8, 0xc0, 0xc0, 0xb0, 0xb0, 0xb0, 0x98, 
	0xb0, 0x89, 0x70, 0x70, 0x70, 0x86, 0x86, 0x86, 
	0x88, 0x88, 0x68, 0x68, 0x70, 0x70, 0x70, 0x70, 
	0xa1, 0xa1, 0xa1, 0x79, 0x58, 0x58, 0x8d, 0xa8, 
	0xa1, 0xa1, 0xb9, 0xa1, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0x98, 0x98, 0xb8, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xa8, 0x98, 0xa8, 0xb0, 0xb0, 0xa1, 0xa1, 
	0xb0, 0x89, 0x70, 0x98, 0xb5, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc0, 0xa8, 0xc0, 0xb0, 0x89, 0x89, 0x89, 
	0x89, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 
	0x88, 0x88, 0x98, 0x88, 0x89, 0x98, 0x70, 0x70, 
	0x79, 0x79, 0x65, 0x65, 0x70, 0xa8, 0xa8, 0xa8, 
	0xa1, 0xb9, 0xa1, 0xa1, 0xb8, 0x98, 0xa8, 0xa8, 
	0x90, 0xa8, 0xb8, 0xb8, 0xb8, 0x98, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xa8, 0xa8, 0x98, 0xa1, 0xb0, 0xb0, 
	0xb0, 0xb0, 0x70, 0x70, 0x8d, 0x98, 0xc0, 0xc0, 
	0xc0, 0xc0, 0x98, 0x98, 0x89, 0x70, 0x70, 0x70, 
	0x89, 0x70, 0x89, 0x98, 0xa8, 0xa8, 0xa8, 0xd0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0x98, 0x98, 0x98, 0x70, 
	0x65, 0x65, 0x65, 0x65, 0x70, 0x8d, 0xa8, 0xa8, 
	0xb9, 0xb9, 0xa1, 0x79, 0x98, 0x90, 0x90, 0x90, 
	0xb8, 0xb8, 0xb8, 0xa8, 0x90, 0x90, 0x90, 0xa8, 
	0xa8, 0xb8, 0xb8, 0xb8, 0x98, 0x98, 0xb0, 0xb0, 
	0xa8, 0xa8, 0x70, 0x70, 0x80, 0x8d, 0x80, 0x98, 
	0x90, 0x81, 0x81, 0x81, 0x90, 0xa1, 0xb0, 0xa1, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xc0, 0xb0, 0xc0, 0xc0, 
	0xb8, 0xa8, 0xa8, 0xb8, 0x90, 0x90, 0xa1, 0xb0, 
	0x89, 0x70, 0x70, 0x70, 0x65, 0x79, 0x8d, 0x8d, 
	0x8d, 0x8d, 0x80, 0x80, 0xa1, 0xb9, 0xb9, 0xa1, 
	0x98, 0xa8, 0x98, 0xa8, 0x98, 0x98, 0xa8, 0xa8, 
	0x98, 0x98, 0xa8, 0xb8, 0xa1, 0xa1, 0xb8, 0xc0, 
	0xa8, 0xa8, 0xa8, 0x70, 0x80, 0x80, 0x8d, 0x80, 
	0x81, 0x90, 0xa1, 0xa1, 0xc8, 0xc8, 0xc8, 0xb0, 
	0x98, 0x90, 0x98, 0x98, 0xb0, 0xc0, 0xc0, 0xc0, 
	0xb8, 0xa8, 0x98, 0x98, 0xa1, 0xb0, 0xb0, 0x90, 
	0x98, 0x98, 0x98, 0x98, 0x65, 0x65, 0x79, 0x79, 
	0x80, 0x8d, 0x80, 0x80, 0xa1, 0xb9, 0xb9, 0xb9, 
	0x90, 0x90, 0x90, 0x98, 0xa8, 0xb8, 0xa8, 0x98, 
	0x98, 0x90, 0x98, 0x98, 0xb8, 0xb8, 0xc0, 0xb8, 
	0xa8, 0xa8, 0x90, 0x90, 0x80, 0x80, 0x80, 0x8d, 
	0xb9, 0xb9, 0xa1, 0xb9, 0xa1, 0x90, 0xa1, 0xa1, 
	0x98, 0x90, 0xa8, 0xb8, 0xb0, 0xb0, 0xa0, 0xa8, 
	0xb8, 0xa8, 0xa8, 0xa8, 0xb0, 0xb0, 0xb0, 0xa1, 
	0x89, 0x98, 0x98, 0x98, 0xa8, 0x8d, 0x65, 0x8d, 
	0x98, 0x8d, 0x98, 0x8d, 0x81, 0xa1, 0xa1, 0xa1, 
	0x90, 0x90, 0x98, 0xb8, 0xa8, 0xa8, 0x90, 0x90, 
	0x98, 0x98, 0xa8, 0x98, 0xb8, 0xc0, 0xc0, 0xb8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0x80, 0x80, 0x98, 0xd0, 
	0xb9, 0xb9, 0xb9, 0xa1, 0x90, 0x90, 0xa1, 0xa1, 
	0x98, 0x98, 0xa8, 0xa8, 0xa8, 0xa0, 0xa0, 0xa0, 
	0x98, 0xa8, 0xa8, 0x98, 0xa1, 0xa1, 0xa1, 0xa1, 
	0x98, 0xb0, 0xb0, 0xb0, 0xa8, 0xa8, 0xa8, 0x79, 
	0x98, 0x98, 0x98, 0x8d, 0x81, 0xa1, 0xa1, 0x90, 
	0x98, 0x98, 0xb8, 0xb8, 0x98, 0x98, 0x90, 0x98, 
	0x90, 0x98, 0x90, 0x98, 0xa1, 0xa1, 0xb8, 0xb8, 
	0x90, 0x98, 0xb8, 0xb8, 0x81, 0x81, 0xb9, 0xb9, 
	0xc8, 0xc8, 0xc8, 0xa1, 0xa0, 0xb0, 0xa0, 0xa0, 
	0xa0, 0xa8, 0xa0, 0xa0, 0xa8, 0x98, 0x98, 0x95, 
	0x95, 0x95, 0x98, 0x95, 0x90, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0xb0, 0xc8, 0xc0, 0xc0, 0xc0, 0x98, 
	0xb9, 0xb9, 0xb9, 0x90, 0x98, 0xb0, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x98, 0x89, 0x89, 0x89, 
	0x78, 0x88, 0x90, 0x88, 0x79, 0x65, 0x79, 0xa1, 
	0xa8, 0xb8, 0xb8, 0x98, 0x81, 0x81, 0xa1, 0xa1, 
	0xa1, 0xa1, 0xb0, 0xa1, 0xb0, 0xc0, 0xb0, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa0, 0x98, 0x98, 0x98, 0x8d, 
	0x8d, 0x98, 0x98, 0x98, 0x90, 0x90, 0xa1, 0xa1, 
	0xa1, 0xb0, 0xb0, 0xa1, 0xa8, 0xa8, 0x98, 0x68, 
	0x90, 0xb9, 0xb9, 0xa1, 0xc0, 0xc0, 0xb8, 0xb0, 
	0x98, 0x98, 0x90, 0x98, 0x98, 0x89, 0x89, 0x89, 
	0x90, 0xa8, 0x90, 0x88, 0x65, 0x79, 0xa1, 0xa1, 
	0xb8, 0xa8, 0x98, 0x90, 0x81, 0x90, 0xb9, 0xa1, 
	0xa1, 0x90, 0x90, 0x90, 0xa8, 0xb0, 0xa8, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa0, 0xa8, 0x98, 0x98, 0x95, 
	0x8d, 0x95, 0x98, 0xa8, 0xa1, 0xa1, 0xb0, 0xb0, 
	0xb0, 0xb0, 0xa1, 0x90, 0x98, 0xa8, 0x98, 0x68, 
	0x90, 0xa1, 0xb9, 0xa1, 0xb8, 0xb0, 0xb0, 0x98, 
	0xa8, 0xa8, 0x98, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 
	0xa8, 0x90, 0x78, 0x88, 0x65, 0x79, 0xb9, 0xb9, 
	0xb8, 0xb8, 0xa8, 0x98, 0x81, 0xb9, 0xb9, 0xa1, 
	0xa1, 0xa1, 0xa1, 0xb0, 0xb0, 0xb0, 0xc0, 0xb0, 
	0xc0, 0xc0, 0xb0, 0xa8, 0xa8, 0xa8, 0x98, 0x98, 
	0x95, 0x95, 0x98, 0xa8, 0xb0, 0xb0, 0xb0, 0xc8, 
	0xc8, 0xc8, 0xa1, 0xa1, 0xa8, 0xa8, 0x98, 0x68, 
	0x81, 0x90, 0x90, 0xa1, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xb8, 0xb8, 0xa8, 0xb8, 0xa8, 0xa8, 0xa8, 0x89, 
	0x78, 0x78, 0xa8, 0xa8, 0xa1, 0x79, 0xa1, 0xb9, 
	0xa1, 0xb0, 0xa1, 0xa1, 0x90, 0xc8, 0xa1, 0xa1, 
	0xa0, 0xb0, 0xb0, 0xc0, 0xc0, 0xc0, 0xb0, 0xa0, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb9, 0xb9, 0xb9, 0xa1, 
	0x90, 0xa1, 0xa1, 0xb9, 0xc8, 0xc8, 0xb8, 0xb0, 
	0xa8, 0xa0, 0xa0, 0xb0, 0xb0, 0xb0, 0xb0, 0x50, 
	0x65, 0x79, 0xa1, 0xb9, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xc8, 0xb9, 0xb9, 0x79, 0x65, 
	0x90, 0xb8, 0xb8, 0xa8, 0xc0, 0x88, 0x88, 0x98, 
	0xa1, 0xb0, 0xa1, 0xa1, 0x90, 0xc8, 0xb0, 0xa1, 
	0xb0, 0xb0, 0xc0, 0xc0, 0xc0, 0xa0, 0xa0, 0xa0, 
	0xa8, 0xa8, 0xa8, 0xa8, 0xa1, 0xa1, 0xa1, 0xa1, 
	0xa1, 0xa1, 0xb9, 0xb9, 0xc8, 0xb8, 0xa8, 0xa8, 
	0xa8, 0xa8, 0xa0, 0xa8, 0xb0, 0xd0, 0xb0, 0x50, 
	0x65, 0x79, 0xa1, 0xa1, 0xa8, 0x78, 0x78, 0x78, 
	0x78, 0x78, 0xa8, 0x78, 0x79, 0x79, 0x65, 0x79, 
	0xa8, 0xb8, 0xb8, 0xb8, 0xc0, 0x88, 0x68, 0x98, 
	0xc8, 0xc8, 0xb0, 0xa1, 0x90, 0x90, 0xa1, 0xb0, 
	0xc0, 0xb0, 0xb0, 0xb0, 0xa8, 0xa0, 0xa0, 0xa0, 
	0x98, 0x98, 0xa8, 0xa8, 0xa1, 0xa1, 0xa1, 0x90, 
	0x90, 0x90, 0x90, 0xa1, 0xa8, 0xb0, 0xa8, 0xb0, 
	0xc0, 0xc0, 0xb0, 0xc0, 0xd0, 0xb0, 0x70, 0x70, 
	0xa1, 0xb9, 0xb9, 0xb9, 0xb8, 0xa8, 0xb8, 0xb8, 
	0xa8, 0xa8, 0xa8, 0xa8, 0x79, 0x79, 0x65, 0xa1, 
	0x90, 0x90, 0x90, 0x98, 0x98, 0x98, 0x68, 0x98, 
	0xc8, 0xb0, 0xa1, 0x90, 0xb0, 0x90, 0x90, 0x90, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa8, 0xb0, 
	0xa8, 0xb8, 0xb8, 0xb8, 0xa1, 0xa1, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0xa1, 0xb8, 0xb8, 0xb8, 0xc8, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xd0, 0xb0, 0x50, 0x70, 
	0xa1, 0xb9, 0xb9, 0xa1, 0xa8, 0xa8, 0xb8, 0xb8, 
	0xb8, 0xc8, 0xc8, 0xc8, 0xa1, 0x79, 0x65, 0xb9, 
	0x98, 0x90, 0x98, 0xa8, 0xc0, 0xc0, 0x88, 0x88, 
	0x86, 0x70, 0xa8, 0xd0, 0xb9, 0xb9, 0x90, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x78, 0x88, 0x88, 0x78, 0x8d, 0x98, 0x8d, 0x8d, 
	0x8d, 0x70, 0x70, 0x8d, 0x90, 0x88, 0xa8, 0x90, 
	0xa1, 0xa1, 0xb0, 0xc8, 0xc0, 0x88, 0x68, 0x68, 
	0xc0, 0xa8, 0xa8, 0xa0, 0x98, 0xa8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xc0, 0xa8, 0x68, 0xc0, 
	0xa1, 0x90, 0xa1, 0xb9, 0xc0, 0xc0, 0x88, 0x68, 
	0x70, 0x70, 0xa8, 0xa8, 0xa1, 0xa1, 0xa1, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x81, 0xa1, 0x90, 0xa1, 
	0xa8, 0xa8, 0xa8, 0x90, 0x8d, 0x98, 0x98, 0xc0, 
	0xa8, 0xa8, 0x8d, 0x70, 0x78, 0x78, 0x78, 0x78, 
	0xa1, 0xa1, 0xb0, 0xb0, 0x98, 0x68, 0x98, 0xc0, 
	0xc0, 0xa0, 0xa8, 0xa8, 0x98, 0xb8, 0xa8, 0x98, 
	0x98, 0x98, 0x98, 0xb8, 0xc0, 0xa8, 0x68, 0xc0, 
	0xb9, 0xb9, 0xa1, 0xa1, 0x98, 0x88, 0x88, 0x68, 
	0x70, 0x70, 0x86, 0x86, 0x81, 0x90, 0xb9, 0xb9, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xb9, 0xb9, 0xa1, 0xa1, 
	0xa8, 0xa8, 0xa8, 0xa8, 0x98, 0x98, 0xb5, 0xc0, 
	0xa8, 0x8d, 0x58, 0x70, 0x90, 0xa8, 0x88, 0x88, 
	0xb0, 0xb0, 0xb0, 0xa1, 0x88, 0x68, 0xc0, 0xc0, 
	0xb0, 0xa8, 0xa8, 0xa0, 0xa8, 0x90, 0x90, 0x90, 
	0x98, 0xa8, 0xa8, 0xa8, 0xa8, 0x98, 0x68, 0x98, 
	0xa1, 0xa1, 0x90, 0xa1, 0x98, 0x88, 0xc0, 0x98, 
	0xa8, 0x86, 0x70, 0x70, 0x81, 0x90, 0xb9, 0xb9, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xa1, 0x90, 0xa1, 0x90, 
	0x90, 0xa8, 0x90, 0xa8, 0x98, 0x8d, 0x98, 0xb5, 
	0xa8, 0x8d, 0x58, 0x70, 0xa8, 0xa8, 0xa8, 0x90, 
	0x90, 0xb0, 0xb0, 0xa1, 0x88, 0x98, 0xc0, 0xc0, 
	0xa8, 0xb0, 0xb0, 0xb0, 0xa8, 0x90, 0x90, 0x90, 
	0x90, 0x90, 0x98, 0xa8, 0x98, 0x98, 0x68, 0x98, 
	0x90, 0x90, 0x81, 0x81, 0x88, 0x98, 0xc0, 0xc0, 
	0xd0, 0xa8, 0xa8, 0x70, 0x90, 0xb9, 0xb9, 0xb9, 
	0xa8, 0x90, 0x90, 0x90, 0x90, 0x90, 0xa8, 0x98, 
	0x90, 0x90, 0x98, 0xa8, 0xa1, 0xa1, 0x90, 0x90, 
	0xa1, 0x88, 0x60, 0x88, 0xb8, 0xa8, 0xa8, 0xb8, 
	0xb0, 0xb0, 0xb0, 0x85, 0xa8, 0xb8, 0xb8, 0xb8, 
	0xa8, 0x8e, 0x8e, 0x8e, 0x90, 0x90, 0x98, 0x90, 
	0x90, 0x90, 0x98, 0xa8, 0x90, 0xa8, 0x70, 0x90, 
	0xa1, 0x88, 0x78, 0x78, 0x90, 0xb8, 0xb8, 0xb8, 
	0x90, 0x90, 0xa8, 0x90, 0x81, 0xb9, 0xb9, 0xa1, 
	0x90, 0x88, 0x90, 0x90, 0x98, 0x90, 0x98, 0xa8, 
	0xa8, 0x98, 0xa8, 0xa8, 0xa1, 0xa1, 0xa1, 0x90, 
	0xa1, 0xa1, 0x60, 0xa1, 0xb8, 0xa8, 0xa8, 0xb8, 
	0xb0, 0x85, 0x85, 0x68, 0x90, 0xb8, 0xb8, 0xb8, 
	0x86, 0x86, 0x86, 0x8e, 0x98, 0x90, 0x98, 0xa8, 
	0xa8, 0xa8, 0x98, 0xb8, 0xa8, 0xa8, 0x70, 0x70, 
	0x60, 0x78, 0x88, 0x78, 0x98, 0xb8, 0xa8, 0xb8, 
	0xa8, 0x90, 0xa8, 0xa8, 0x81, 0xa1, 0xa1, 0x90, 
	0x90, 0x90, 0x90, 0x88, 0x90, 0xa8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb0, 0xa1, 0xb0, 0xa1, 
	0xa1, 0xa1, 0x60, 0xa1, 0xb8, 0x98, 0x90, 0x90, 
	0xb0, 0xb0, 0x85, 0x68, 0x90, 0xa8, 0xa8, 0xa8, 
	0x8e, 0x8e, 0x8e, 0x8e, 0x90, 0xa8, 0xb8, 0xb8, 
	0xb8, 0xb8, 0xa8, 0xb8, 0xd0, 0xa8, 0x70, 0x70, 
	0x78, 0x88, 0x78, 0x60, 0x90, 0xa8, 0x98, 0x98, 
	0xa8, 0xa8, 0xa8, 0xa8, 0x81, 0xa1, 0xa1, 0x90, 
	0x90, 0x90, 0xa8, 0xa8, 0xa8, 0xa8, 0x98, 0x98, 
	0x90, 0x90, 0x90, 0x90, 0x90, 0xc8, 0xc8, 0xb0, 
	0xa1, 0x88, 0x78, 0xa1, 0xa8, 0xa8, 0x90, 0x90, 
	0xb0, 0xb0, 0x85, 0x85, 0x98, 0x90, 0xa8, 0xa8, 
	0x98, 0x98, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x98, 
	0x98, 0x90, 0x90, 0x98, 0xa8, 0xd0, 0x90, 0x70, 
	0xa1, 0xa1, 0xa1, 0x60, 0x90, 0xa8, 0x90, 0x90, 
	0x8d, 0x8d, 0xa8, 0x8d, 0x68, 0xc0, 0xc0, 0xa8, 
	0x90, 0xa1, 0xa1, 0xa1, 0xb0, 0x98, 0x98, 0x98, 
	0x98, 0x98, 0x98, 0x89, 0x98, 0xb0, 0xb0, 0xb0, 
	0xa8, 0x79, 0x79, 0xa8, 0xa8, 0xa8, 0xa8, 0x86, 
	0xa1, 0x90, 0x81, 0x81, 0xa8, 0xc0, 0xc0, 0xc0, 
	0xa0, 0xa0, 0xb0, 0xb0, 0xa8, 0x90, 0x90, 0xa8, 
	0xa8, 0xa8, 0xa8, 0xa0, 0xc0, 0xc0, 0x98, 0x68, 
	0xa1, 0xa1, 0xa1, 0x81, 0x78, 0xa1, 0xa1, 0xa1, 
	0xa8, 0xa8, 0x8d, 0x58, 0x68, 0xa8, 0xa8, 0x98, 
	0x90, 0xa1, 0xa1, 0xb9, 0x98, 0xb0, 0xb0, 0xb0, 
	0xb0, 0xb0, 0xb0, 0x89, 0x98, 0x98, 0xb0, 0x98, 
	0x8d, 0x79, 0x79, 0xa8, 0xa8, 0xa8, 0x98, 0x98, 
	0xa1, 0xb9, 0x90, 0x81, 0xa0, 0xa0, 0xa8, 0xa0, 
	0xa0, 0xa8, 0xa8, 0xb0, 0x98, 0xa8, 0xb8, 0xb8, 
	0xc0, 0xc0, 0xc0, 0xb0, 0xc0, 0xc0, 0x98, 0x68, 
	0xa1, 0xb9, 0xa1, 0x81, 0x60, 0xa1, 0xa1, 0xa1, 
	0xa8, 0x70, 0x58, 0x70, 0x98, 0x98, 0xc0, 0xa8, 
	0xa1, 0xb9, 0xb9, 0xb9, 0xb0, 0xb0, 0xb0, 0x98, 
	0x98, 0x70, 0x98, 0x89, 0x89, 0x89, 0x98, 0x70, 
	0x79, 0x65, 0x79, 0x8d, 0x98, 0xa8, 0xa8, 0x98, 
	0xa1, 0xb9, 0xa1, 0x90, 0xa0, 0xa0, 0xa8, 0xa8, 
	0xb0, 0xc0, 0xc0, 0xc0, 0xb8, 0xb8, 0xa8, 0x98, 
	0xa0, 0xa0, 0xa8, 0xc0, 0xc0, 0x98, 0x88, 0x68, 
	0x90, 0xb9, 0xa1, 0x81, 0x60, 0x88, 0xa1, 0xa1, 
	0x58, 0x58, 0x70, 0x70, 0x68, 0x68, 0x98, 0x98, 
	0xa1, 0xa1, 0x81, 0x81, 0x70, 0x70, 0x70, 0x70, 
	0x70, 0x70, 0x70, 0x70, 0x89, 0x70, 0x70, 0x70, 
	0x79, 0x79, 0x79, 0x8d, 0x98, 0x98, 0x98, 0xa8, 
	0xa1, 0xa1, 0xa1, 0x81, 0xa0, 0xa8, 0xc0, 0xb0, 
	0xc0, 0xc0, 0xa8, 0xa0, 0x98, 0x98, 0x90, 0x90, 
	0xa0, 0xa0, 0xa0, 0xa8, 0xc0, 0xc0, 0x88, 0x68, 
	0xa1, 0xb9, 0xb9, 0xa1, 0x60, 0x60, 0x60, 0x60, 
	0x88, 0x68, 0x88, 0x98, 0x98, 0x8d, 0x8d, 0x8d, 
	0x89, 0x70, 0x70, 0x70, 0x70, 0x58, 0x58, 0x70, 
	0x78, 0xa8, 0xa8, 0xa8, 0xa1, 0x90, 0xb9, 0xb9, 
	0xa1, 0xa1, 0x78, 0xa1, 0x98, 0x98, 0x98, 0x98, 
	0x98, 0xa8, 0xa8, 0x98, 0xb0, 0xb0, 0xc8, 0xc8, 
	0xc0, 0xb0, 0xb0, 0xb0, 0x98, 0x98, 0x98, 0x98, 
	0xb0, 0xb0, 0xb0, 0xb8, 0xc0, 0xb8, 0xb8, 0x90, 
	0xc0, 0xc0, 0xc0, 0x98, 0x78, 0x78, 0x78, 0x78, 
	0xc0, 0x98, 0xc0, 0xc0, 0xc0, 0xc0, 0xb5, 0xb5, 
	0xb0, 0xb0, 0x98, 0x98, 0x81, 0x81, 0x58, 0x70, 
	0xa8, 0xc8, 0xb8, 0xa8, 0xa1, 0xb9, 0xa1, 0x90, 
	0x88, 0xa1, 0x78, 0xa1, 0xc0, 0x98, 0xb0, 0xb0, 
	0xc0, 0xa8, 0xc0, 0x98, 0xb0, 0xc8, 0xb0, 0xa1, 
	0xa0, 0xa0, 0xa0, 0xa8, 0xb0, 0x98, 0xb0, 0xb0, 
	0xb0, 0xa8, 0xa8, 0xa8, 0xc0, 0xc0, 0xb8, 0x68, 
	0x98, 0xc0, 0x98, 0x88, 0x78, 0xa8, 0xa8, 0xb8, 
	0xc0, 0xc0, 0x98, 0x98, 0xb5, 0xc0, 0xc0, 0xb5, 
	0x98, 0xb0, 0xb0, 0xb0, 0xb9, 0xb9, 0x81, 0x70, 
	0xa8, 0xc8, 0xa8, 0xa8, 0xb9, 0x90, 0x81, 0x81, 
	0x88, 0xa1, 0x78, 0x60, 0xb0, 0xc0, 0xb8, 0xb8, 
	0xc0, 0xc0, 0xc0, 0x68, 0x90, 0xc8, 0xb0, 0xa1, 
	0xa0, 0xa0, 0xa0, 0xa0, 0xb0, 0xb8, 0xb8, 0xb8, 
	0xb0, 0xa8, 0xb0, 0xb0, 0xc0, 0xc0, 0xb8, 0x68, 
	0x88, 0x88, 0x98, 0x68, 0xb8, 0xc8, 0xc8, 0xc8, 
	0xc0, 0x98, 0x88, 0x88, 0x98, 0x98, 0xb5, 0xb5, 
	0xb0, 0xb0, 0xb0, 0xb0, 0xb9, 0xb9, 0xb9, 0x70, 
	0xb8, 0xc8, 0xa8, 0xa8, 0xa1, 0x90, 0x81, 0x90, 
	0xa1, 0xa1, 0xa1, 0x60, 0x98, 0xb8, 0xc0, 0xb8, 
	0xa8, 0xa8, 0xc0, 0x98, 0x90, 0xb0, 0xb0, 0xb0, 
	0xb0, 0xa8, 0xa0, 0xa0, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xb8, 0xb0, 0xc8, 0xc8, 0xc0, 0xb8, 0xc0, 0x68, 
	0x88, 0x98, 0x98, 0x68, 0xb8, 0xc8, 0xc8, 0xc8, 
	0xa1, 0xa8, 0xa1, 0xa1, 0xa8, 0xb0, 0xa0, 0xa0, 
	0xb0, 0xc0, 0xb0, 0xa0, 0xd0, 0xd0, 0xa8, 0x70, 
	0xb0, 0xb0, 0xa1, 0x90, 0x90, 0x90, 0xa1, 0xa1, 
	0x90, 0x90, 0xb9, 0x81, 0x98, 0xa0, 0xa1, 0xa0, 
	0xa8, 0xb8, 0xc8, 0xb0, 0x78, 0xb8, 0xa8, 0xa8, 
	0xb8, 0xb8, 0xa8, 0xa8, 0xc0, 0xc0, 0xc0, 0xb5, 
	0xb8, 0xb8, 0xb8, 0xa1, 0xa8, 0xa8, 0xc0, 0x98, 
	0x70, 0x90, 0x70, 0x90, 0xc8, 0xb8, 0xc0, 0xb8, 
	0xa1, 0xa1, 0xa8, 0xa1, 0xa8, 0xa0, 0xa8, 0xa0, 
	0xa8, 0xa0, 0xc0, 0xc0, 0xa8, 0xd0, 0x90, 0x70, 
	0xc8, 0x90, 0x90, 0xb0, 0xb9, 0xb9, 0xb9, 0xa1, 
	0xa1, 0x90, 0xa1, 0x90, 0xa1, 0xa0, 0xa1, 0xa0, 
	0xb0, 0xb8, 0xc8, 0xb8, 0x78, 0xb8, 0xb8, 0xb8, 
	0xa8, 0xa8, 0xb8, 0xb8, 0xc0, 0xb5, 0xc0, 0xc0, 
	0xb8, 0xa1, 0xa1, 0xb8, 0xc0, 0xc0, 0xc0, 0xc0, 
	0x70, 0x70, 0x70, 0xa8, 0xb8, 0xc0, 0xb8, 0xb8, 
	0xa8, 0xa8, 0xb9, 0xa8, 0xb0, 0xc0, 0xb0, 0xb0, 
	0xa8, 0xc0, 0xa0, 0xb0, 0xd0, 0xa8, 0x70, 0x90, 
	0xb0, 0xa1, 0xa1, 0xb0, 0xb9, 0xa1, 0xa1, 0xa1, 
	0xb9, 0xa1, 0xa1, 0x81, 0x98, 0xb0, 0xb0, 0xb0, 
	0xc8, 0xb8, 0xc8, 0xc8, 0x78, 0xb8, 0xc8, 0xc8, 
	0xa8, 0xb8, 0xa8, 0xb8, 0xb5, 0x98, 0xb5, 0xb5, 
	0xa1, 0xa1, 0xb8, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
	0x90, 0x90, 0x90, 0xd0, 0xb8, 0xc8, 0xb8, 0xb8, 
	0xa8, 0xb9, 0xb9, 0xa8, 0xa0, 0xa0, 0xc0, 0xc0, 
	0xb0, 0xa8, 0xa8, 0xa8, 0xa8, 0xa8, 0x70, 0x70, 
	0xb0, 0xc8, 0xa1, 0xa1, 0x81, 0x81, 0x90, 0xa1, 
	0x90, 0xb9, 0xb9, 0xa1, 0x98, 0xa1, 0xb0, 0xb0, 
	0xc8, 0xb8, 0xc8, 0xc8, 0x78, 0x78, 0xc8, 0xc8, 
	0xb8, 0xb8, 0xa8, 0x98, 0x8d, 0x8d, 0x98, 0x98, 
	0xc0, 0xc0, 0xc0, 0xa1, 0x98, 0x98, 0xa8, 0xa8, 
	0x70, 0x90, 0xd0, 0xd0, 0xb8, 0xb8, 0xb8, 0xb8, 
	0xa8, 0x98, 0xa8, 0x98, 0x90, 0x90, 0x90, 0x90, 
	0x98, 0x95, 0x8d, 0x98, 0xc0, 0xc0, 0x98, 0x88, 
	0xb8, 0x98, 0x98, 0x98, 0xa0, 0x98, 0xb0, 0xa0, 
	0xa1, 0x90, 0xa1, 0xa1, 0x90, 0x98, 0xb8, 0xb8, 
	0xb0, 0x98, 0xb0, 0x98, 0x68, 0x68, 0x88, 0x98, 
	0x98, 0x98, 0x98, 0x98, 0x90, 0x90, 0xb9, 0x90, 
	0xa8, 0xa8, 0xa8, 0x98, 0x90, 0xb0, 0xb0, 0x90, 
	0x60, 0xa1, 0xc0, 0xc0, 0xb8, 0xb0, 0xc0, 0xc0, 
	0xa8, 0xa8, 0x98, 0x98, 0xa1, 0x90, 0x90, 0x90, 
	0x95, 0x95, 0x95, 0xa8, 0xc0, 0xc0, 0x88, 0x88, 
	0xa8, 0x90, 0x90, 0x90, 0xa1, 0xb0, 0xb0, 0xb0, 
	0xb9, 0x90, 0x90, 0x90, 0xa8, 0xb8, 0xb8, 0xa8, 
	0xb0, 0xb0, 0xb0, 0x89, 0x68, 0x68, 0x68, 0x88, 
	0x98, 0x98, 0x98, 0x98, 0xa1, 0xb9, 0xb9, 0xa1, 
	0x98, 0x98, 0x90, 0x90, 0xb0, 0xb0, 0xb0, 0x70, 
	0xa1, 0xb8, 0xc0, 0xb8, 0xb8, 0xc0, 0xc0, 0xb0, 
	0xa8, 0xa8, 0x98, 0xa8, 0xb0, 0xa1, 0xa1, 0x90, 
	0x98, 0x98, 0xa8, 0xa8, 0x98, 0x98, 0x68, 0x88, 
	0x98, 0x98, 0xa8, 0xa8, 0xb0, 0xb0, 0xa1, 0xb0, 
	0xb9, 0xa1, 0x81, 0x81, 0xb8, 0xb8, 0xb8, 0xa8, 
	0xb0, 0xb0, 0x98, 0x70, 0x68, 0x68, 0x68, 0x68, 
	0x89, 0xb0, 0x98, 0xb0, 0xa1, 0xa1, 0xb9, 0x90, 
	0x90, 0x90, 0xa8, 0xa8, 0xb0, 0x90, 0x70, 0x90, 
	0xb8, 0xc0, 0xa1, 0xa1, 0xb8, 0xc0, 0xc0, 0xb8, 
	0xa8, 0xa8, 0xb8, 0xb8, 0xc8, 0xb0, 0xb0, 0xa1, 
	0x95, 0xa8, 0xa8, 0x95, 0x98, 0x98, 0x68, 0x88, 
	0xa8, 0xa8, 0xb8, 0xa8, 0xa0, 0x98, 0xa1, 0xa0, 
	0x81, 0x81, 0x81, 0x81, 0x90, 0xa8, 0xa8, 0xb8, 
	0xb0, 0xb0, 0x98, 0x98, 0xc0, 0x98, 0x98, 0x98, 
	0x89, 0x70, 0x70, 0x70, 0x81, 0x90, 0x90, 0x90, 
	0xa8, 0xa8, 0xb8, 0xb8, 0x90, 0x70, 0x70, 0x90, 
	0xb8, 0xb8, 0xa1, 0xa1, 0x98, 0xb0, 0xb8, 0xb8, 
	
};

Vtx whplat_viscol_001_mesh_layer_1_vtx_0[18] = {
	{{{0, -93, -437},0, {4080, 447},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{0, 47, -437},0, {4080, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{309, 47, -309},0, {3568, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{309, -93, -309},0, {3568, 447},{0x86, 0x86, 0x86, 0xFF}}},
	{{{437, 47, 0},0, {3056, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{437, -93, 0},0, {3056, 447},{0x86, 0x86, 0x86, 0xFF}}},
	{{{309, 47, 309},0, {2544, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{309, -93, 309},0, {2544, 447},{0x99, 0x99, 0x99, 0xFF}}},
	{{{0, 47, 437},0, {2032, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, -93, 437},0, {2032, 447},{0x86, 0x86, 0x86, 0xFF}}},
	{{{-309, 47, 309},0, {1520, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-309, -93, 309},0, {1520, 447},{0xB8, 0xB8, 0xB8, 0xFF}}},
	{{{-437, 47, 0},0, {1008, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-437, -93, 0},0, {1008, 447},{0x8E, 0x8E, 0x8E, 0xFF}}},
	{{{-309, 47, -309},0, {496, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-309, -93, -309},0, {496, 447},{0x86, 0x86, 0x86, 0xFF}}},
	{{{0, 47, -437},0, {-16, -79},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, -93, -437},0, {-16, 447},{0xB7, 0xB7, 0xB7, 0xFF}}},
};

Gfx whplat_viscol_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(whplat_viscol_001_mesh_layer_1_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
	gsSPEndDisplayList(),
};

Vtx whplat_viscol_001_mesh_layer_1_vtx_1[24] = {
	{{{-309, -93, -309},0, {-352, 210},{0x86, 0x86, 0x86, 0xFF}}},
	{{{0, -93, -437},0, {817, -274},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{309, -93, -309},0, {1987, 210},{0x86, 0x86, 0x86, 0xFF}}},
	{{{309, -93, 309},0, {1987, 2550},{0x99, 0x99, 0x99, 0xFF}}},
	{{{437, -93, 0},0, {2472, 1380},{0x86, 0x86, 0x86, 0xFF}}},
	{{{-309, -93, 309},0, {-352, 2550},{0xB8, 0xB8, 0xB8, 0xFF}}},
	{{{0, -93, 437},0, {817, 3034},{0x86, 0x86, 0x86, 0xFF}}},
	{{{-437, -93, 0},0, {-837, 1380},{0x8E, 0x8E, 0x8E, 0xFF}}},
	{{{0, 47, -131},0, {934, 208},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{93, 47, -93},0, {1608, 487},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{309, 47, -309},0, {3187, -1092},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{437, 47, 0},0, {4120, 1161},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{131, 47, 0},0, {1887, 1161},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{309, 47, 309},0, {3187, 3414},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{93, 47, 93},0, {1608, 1835},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 47, 437},0, {934, 4347},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 47, 131},0, {934, 2115},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-309, 47, 309},0, {-1319, 3414},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-93, 47, 93},0, {260, 1835},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-437, 47, 0},0, {-2252, 1161},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-131, 47, 0},0, {-20, 1161},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-309, 47, -309},0, {-1319, -1092},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-93, 47, -93},0, {260, 487},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 47, -437},0, {934, -2025},{0xFF, 0xFF, 0xFF, 0xFF}}},
};

Gfx whplat_viscol_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(whplat_viscol_001_mesh_layer_1_vtx_1 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(3, 6, 5, 0, 5, 7, 0, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
	gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 14, 13, 0, 14, 15, 13, 0),
	gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
	gsSP2Triangles(16, 18, 17, 0, 18, 19, 17, 0),
	gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
	gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
	gsSP2Triangles(22, 8, 23, 0, 8, 10, 23, 0),
	gsSPEndDisplayList(),
};


Gfx mat_whplat_Bricks[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whplat_Bricks_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 47),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, whplat_Bricks_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(whplat_Bricks_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_whplat_Bricks[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_whplat_Floor[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, whplat_Floor_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(whplat_Floor_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_whplat_Floor[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx whplat_viscol_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_whplat_Bricks),
	gsSPDisplayList(whplat_viscol_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_whplat_Bricks),
	gsSPDisplayList(mat_whplat_Floor),
	gsSPDisplayList(whplat_viscol_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_whplat_Floor),
	gsSPEndDisplayList(),
};

Gfx whplat_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
