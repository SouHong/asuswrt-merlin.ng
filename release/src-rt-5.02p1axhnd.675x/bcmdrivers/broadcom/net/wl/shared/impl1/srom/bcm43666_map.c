#include <typedefs.h>

#if 1

uint16 wl_srom_map_4365[590] = {
/* NOTE: */
/* BCM94365EMC_1 (P101) (Dual Band 3x3 11ac PCIe Mini Card with 3.3V Dual-Band FEM)*/
/* 4365C0 */
/* PA values MUST be calibrated and refilled for the actual EEPROM/SROM-less design*/
/* MAC address are zero'ed */
/* CRC here is not recalculated, do not program this to EEPROM/SROM, this is for EEPROM/SROM-less use only */

/* 4365E C0 */
/*  srom[000]:*/  0x3801, 0x3000, 0x0808, 0x14e4, 0x0218, 0x1b7e, 0x0a00, 0x2bc4,
/*  srom[008]:*/  0x2a64, 0x2964, 0x2c64, 0x3ce7, 0x480a, 0x113c, 0x2132, 0x3164,
/*  srom[016]:*/  0x1852, 0x0005, 0x1f2e, 0x4df7, 0x8080, 0x000b, 0x8630, 0x0190,
/*  srom[024]:*/  0x5f00, 0x41f6, 0x8630, 0x0191, 0x8300, 0x01eb, 0x9f01, 0x65f5,
/*  srom[032]:*/  0x8200, 0xd800, 0x8010, 0x007c, 0x1f00, 0x0004, 0x8000, 0x200c,
/*  srom[040]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[048]:*/  0x43c3, 0x8000, 0x0002, 0x0000, 0x3ff7, 0x1800, 0x0005, 0xffff,
/*  srom[056]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[064]:*/  0x4d55, 0x1101, 0x1000, 0x1000, 0x0004, 0x0000, 0x0000, 0x0000,
/*  srom[072]:*/  0x0000, 0x0000, 0x0000, 0x5553, 0x0000, 0xffff, 0xffff, 0xffff,
/*  srom[080]:*/  0x0f0f, 0x0202, 0x0202, 0x0202, 0x00ff, 0x1001, 0x0001, 0x78ff,
/*  srom[088]:*/  0xffff, 0xffff, 0x9c40, 0xffff, 0x5a28, 0x7f7f, 0x6738, 0x6cd9,
/*  srom[096]:*/  0x0000, 0xffff, 0x5b39, 0x0339, 0x0202, 0x0000, 0x0000, 0x0000,
/*  srom[104]:*/  0x00bb, 0x0862, 0x0042, 0x0005, 0xcaca, 0x8484, 0x8484, 0x8484,
/*  srom[112]:*/  0x8484, 0xb8b8, 0xb8b8, 0xb8b8, 0xb8b8, 0xb8b8, 0xb8b8, 0x9640,
/*  srom[120]:*/  0x2eca, 0x9640, 0x2eca, 0xa640, 0x40ec, 0xa640, 0x40ec, 0xa640,
/*  srom[128]:*/  0x40ec, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3838,
/*  srom[136]:*/  0x3838, 0x3e3e, 0x3e3e, 0x3e3e, 0x3e3e, 0x3e3e, 0x3e3e, 0xffff,
/*  srom[144]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[152]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[160]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x739c,
/*  srom[168]:*/  0x2222, 0x2222, 0x4220, 0x8866, 0x4220, 0x8866, 0x6422, 0x0000,
/*  srom[176]:*/  0x9640, 0x2eca, 0x9640, 0x2eca, 0x9640, 0x2eca, 0x0000, 0x0000,
/*  srom[184]:*/  0x9640, 0x2eca, 0x9640, 0x2eca, 0x9640, 0x2eca, 0x0000, 0x0000,
/*  srom[192]:*/  0xa640, 0x40ec, 0xa640, 0x40ec, 0xa640, 0x40ec, 0x0000, 0x0000,
/*  srom[200]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[208]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[216]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0f12, 0xffff, 0xffff,
/*  srom[224]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[232]:*/  0xffff, 0xffff, 0xa640, 0x40ec, 0xa640, 0x40ec, 0xa640, 0x40ec,
/*  srom[240]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xa640, 0x40ec, 0xa640,
/*  srom[248]:*/  0x40ec, 0xa640, 0x40ec, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[256]:*/  0x5050, 0x236c, 0xb15f, 0x0000, 0x0010, 0xb3bb, 0x5050, 0x5050,
/*  srom[264]:*/  0x21ae, 0xb52e, 0xffa6, 0x0000, 0x21a4, 0xb605, 0xff3f, 0x0000,
/*  srom[272]:*/  0x21ab, 0xb542, 0x0000, 0x0000, 0x21d8, 0xb580, 0x0000, 0x0000,
/*  srom[280]:*/  0x225b, 0xb521, 0x0000, 0x0000, 0x249e, 0xc3cd, 0xf53c, 0x0000,
/*  srom[288]:*/  0x221d, 0xcc7c, 0xf2a2, 0x0000, 0x2264, 0xcab8, 0xf36b, 0x0000,
/*  srom[296]:*/  0x22b5, 0xc8c1, 0xf48f, 0x0000, 0x238d, 0xc3c6, 0xf6db, 0x0000,
/*  srom[304]:*/  0x23ac, 0xc50b, 0xf649, 0x0000, 0x2958, 0xb9a4, 0xf54d, 0x0000,
/*  srom[312]:*/  0x296e, 0xbaaf, 0xf4c9, 0x0000, 0x2b0b, 0xaf48, 0xf995, 0x0000,
/*  srom[320]:*/  0x2c30, 0xa8ba, 0xfc70, 0x0000, 0x2a81, 0xb4bb, 0xf7ac, 0x0000,
/*  srom[328]:*/  0x5050, 0x231b, 0xb3bd, 0x0000, 0x004d, 0xb3bb, 0x5050, 0x5050,
/*  srom[336]:*/  0x2124, 0xb5ab, 0x0000, 0x0000, 0x211d, 0xb5e1, 0x0000, 0x0000,
/*  srom[344]:*/  0x20e6, 0xb778, 0xffce, 0x0000, 0x215f, 0xb6d9, 0x0000, 0x0000,
/*  srom[352]:*/  0x2186, 0xb773, 0x0000, 0x0000, 0x2583, 0xbc79, 0xf8b2, 0x0000,
/*  srom[360]:*/  0x2168, 0xcbf5, 0xf3ac, 0x0000, 0x215d, 0xcc1c, 0xf3bc, 0x0000,
/*  srom[368]:*/  0x21de, 0xc8fb, 0xf565, 0x0000, 0x20df, 0xd0be, 0xf241, 0x0000,
/*  srom[376]:*/  0x2163, 0xce6d, 0xf3c8, 0x0000, 0x2671, 0xbfb0, 0xf4dd, 0x0000,
/*  srom[384]:*/  0x271d, 0xbcd4, 0xf5cc, 0x0000, 0x26ac, 0xbd7f, 0xf650, 0x0000,
/*  srom[392]:*/  0x2853, 0xb3de, 0xfa77, 0x0000, 0x25c0, 0xc53a, 0xf3c7, 0x0000,
/*  srom[400]:*/  0x5050, 0x238d, 0xb206, 0x0000, 0x0000, 0xb3bb, 0x5050, 0x5050,
/*  srom[408]:*/  0x2181, 0xb4bf, 0x0000, 0x0000, 0x2191, 0xb4db, 0x0000, 0x0000,
/*  srom[416]:*/  0x2140, 0xb672, 0x0000, 0x0000, 0x2189, 0xb7ab, 0x0000, 0x0000,
/*  srom[424]:*/  0x21e5, 0xb71b, 0x0000, 0x0000, 0x2678, 0xb96e, 0xf91e, 0x000f,
/*  srom[432]:*/  0x223b, 0xca06, 0xf3c8, 0x0000, 0x2207, 0xcb2f, 0xf37f, 0x0000,
/*  srom[440]:*/  0x234c, 0xc312, 0xf731, 0x0000, 0x2415, 0xbf77, 0xf895, 0x0000,
/*  srom[448]:*/  0x2334, 0xc6d4, 0xf601, 0x0000, 0x299d, 0xb51d, 0xf768, 0x0000,
/*  srom[456]:*/  0x2a15, 0xb465, 0xf75e, 0x0000, 0x29fc, 0xb35e, 0xf880, 0x0000,
/*  srom[464]:*/  0x2ae0, 0xaf44, 0xfa9c, 0x0abb, 0x2930, 0xb941, 0xf6eb, 0x0000,
/*  srom[472]:*/  0x18c6, 0x6339, 0x6739, 0x6338, 0x6739, 0x6739, 0x0842, 0x0c63,
/*  srom[480]:*/  0x0842, 0x0c62, 0x0c63, 0xffff, 0xffff, 0xffff, 0x0108, 0x0000,
/*  srom[488]:*/  0x6f7b, 0x739c, 0x6f7b, 0x6f7b, 0x6f7c, 0x0001, 0x36bd, 0x0088,
/*  srom[496]:*/  0x24ac, 0x24ac, 0x7ebd, 0x4888, 0x6cac, 0x6cac, 0x0000, 0x0000,
/*  srom[504]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6f9b, 0x037b,
/*  srom[512]:*/  0x5050, 0x2401, 0xb0aa, 0x0000, 0x001d, 0xb3bb, 0x5050, 0x5050,
/*  srom[520]:*/  0x228d, 0xb2f3, 0x0000, 0x0000, 0x229f, 0xb2e1, 0x0000, 0x0000,
/*  srom[528]:*/  0x228c, 0xb3d1, 0x0000, 0x0000, 0x2310, 0xb3d1, 0x0000, 0x0000,
/*  srom[536]:*/  0x2324, 0xb3fa, 0x0000, 0x0000, 0x2556, 0xc0ba, 0xf60a, 0x0000,
/*  srom[544]:*/  0x2349, 0xc7fb, 0xf3e9, 0x0000, 0x234e, 0xc86b, 0xf397, 0x0000,
/*  srom[552]:*/  0x23c3, 0xc59d, 0xf4fa, 0x0000, 0x2385, 0xc86d, 0xf3e3, 0x0000,
/*  srom[560]:*/  0x237e, 0xca60, 0xf343, 0x0000, 0x2a90, 0xb765, 0xf527, 0x0000,
/*  srom[568]:*/  0x2af4, 0xb6bb, 0xf53e, 0x0000, 0x2c18, 0xae6f, 0xf8cf, 0x0000,
/*  srom[576]:*/  0x2b2f, 0xb52f, 0xf663, 0x0000, 0x2ad8, 0xb7a4, 0xf598, 0x0000,
/*  srom[584]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x470d
};

#else

uint16 wl_srom_map_4365[590] = {
/* NOTE: */
/* BCM94365EMCM5 (P102) (5G Band 3x3 11ac PCIe Mini Card with medium tx power FEM)*/
/* 4365C0 */
/* PA values MUST be calibrated and refilled for the actual EEPROM/SROM-less design*/
/* MAC address are zero'ed */
/* CRC here is not recalculated, do not program this to EEPROM/SROM, this is for EEPROM/SROM-less use only */

/* 4365E C0 */
/*  srom[000]:*/  0x3801, 0x3000, 0x0809, 0x14e4, 0x0218, 0x1b7e, 0x0a00, 0x2bc4,
/*  srom[008]:*/  0x2a64, 0x2964, 0x2c64, 0x3ce7, 0x480a, 0x113c, 0x2132, 0x3164,
/*  srom[016]:*/  0x1852, 0x0005, 0x1f2e, 0x4df7, 0x8080, 0x000b, 0x8630, 0x0190,
/*  srom[024]:*/  0x5f00, 0x41f6, 0x8630, 0x0191, 0x8300, 0x01eb, 0x9f01, 0x65f5,
/*  srom[032]:*/  0x8200, 0xd800, 0x8010, 0x007c, 0x1f00, 0x0004, 0x8000, 0x200c,
/*  srom[040]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[048]:*/  0x43c5, 0x8000, 0x0002, 0x0000, 0x3ff7, 0x1800, 0x0005, 0xffff,
/*  srom[056]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[064]:*/  0x4d55, 0x1102, 0x0000, 0x1000, 0x0004, 0x0000, 0x0000, 0x0000,
/*  srom[072]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
/*  srom[080]:*/  0x0f0f, 0x0202, 0x0202, 0x0202, 0x00ff, 0x1001, 0x0031, 0x78ff,
/*  srom[088]:*/  0xffff, 0xffff, 0x9c40, 0xffff, 0x5a28, 0x7f7f, 0xffff, 0xffff,
/*  srom[096]:*/  0x0000, 0xabab, 0x0000, 0x0000, 0x0202, 0x0000, 0x0000, 0x0000,
/*  srom[104]:*/  0x00bb, 0x0000, 0x0000, 0x0005, 0xffff, 0xedfd, 0xeded, 0xedfd,
/*  srom[112]:*/  0xeded, 0xfefe, 0xfefe, 0x1f63, 0x1f1f, 0x1f63, 0x1f1f, 0x6542,
/*  srom[120]:*/  0xba87, 0x6654, 0xba87, 0x6654, 0xca87, 0x6654, 0xca87, 0x6654,
/*  srom[128]:*/  0xca87, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
/*  srom[136]:*/  0x0000, 0x0000, 0x0000, 0x00f0, 0x0000, 0xf0f0, 0xf0f0, 0xffff,
/*  srom[144]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[152]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[160]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[168]:*/  0x0000, 0x0000, 0x7222, 0x9977, 0x7222, 0x9977, 0x7722, 0x0022,
/*  srom[176]:*/  0x6420, 0xa987, 0x6542, 0xba87, 0x6542, 0xba87, 0x0000, 0x0000,
/*  srom[184]:*/  0x6420, 0xa987, 0x6654, 0xba87, 0x6654, 0xba87, 0x0000, 0x0000,
/*  srom[192]:*/  0x7642, 0xba98, 0x6654, 0xca87, 0x6654, 0xca87, 0x0000, 0x0000,
/*  srom[200]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[208]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[216]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0f12, 0xffff, 0xffff,
/*  srom[224]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0x0004, 0x0004, 0x0008, 0x0008,
/*  srom[232]:*/  0xffff, 0xffff, 0x7642, 0xba98, 0x6654, 0xca87, 0x6654, 0xca87,
/*  srom[240]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7642, 0xba98, 0x6655,
/*  srom[248]:*/  0xca87, 0x6654, 0xca87, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[256]:*/  0x6464, 0xffff, 0xffff, 0xffff, 0xffff, 0xabab, 0x6464, 0x6464,
/*  srom[264]:*/  0x1aae, 0xd5bc, 0x333c, 0x255c, 0x1ad3, 0xd80c, 0x3a02, 0x2645,
/*  srom[272]:*/  0x1a65, 0xe7f5, 0x69ad, 0x2a63, 0x1a5d, 0xe60e, 0x659b, 0x2a38,
/*  srom[280]:*/  0x1a32, 0xe6c3, 0x711e, 0x2bb8, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[288]:*/  0x1adb, 0xec99, 0x7980, 0x2b56, 0x1b15, 0xeae6, 0x6a8a, 0x29e0,
/*  srom[296]:*/  0x1aa9, 0xef03, 0x6929, 0x2937, 0x1ab8, 0xedac, 0x6d66, 0x298c,
/*  srom[304]:*/  0x1a98, 0xec01, 0x6bd5, 0x29c8, 0x1c2d, 0xea5e, 0x5e19, 0x2812,
/*  srom[312]:*/  0x1be7, 0xf270, 0x77b0, 0x2a0f, 0x1b6c, 0xf355, 0x6639, 0x2845,
/*  srom[320]:*/  0x1b8e, 0xf265, 0x6e78, 0x28fd, 0x1b39, 0xf1a5, 0x712f, 0x295b,
/*  srom[328]:*/  0x6464, 0xffff, 0xffff, 0xffff, 0xffff, 0xabab, 0x6464, 0x6464,
/*  srom[336]:*/  0x1a54, 0xd802, 0x38a4, 0x260e, 0x1aa5, 0xcf80, 0x2159, 0x2288,
/*  srom[344]:*/  0x1a28, 0xe40e, 0x5ffc, 0x2a55, 0x19e3, 0xe33c, 0x562f, 0x2893,
/*  srom[352]:*/  0x19c6, 0xda7c, 0x45f9, 0x2751, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[360]:*/  0x1a8e, 0xed03, 0x74f0, 0x2adb, 0x1acc, 0xe86c, 0x6750, 0x29d5,
/*  srom[368]:*/  0x1a57, 0xee26, 0x6837, 0x2956, 0x1a2e, 0xebbd, 0x6448, 0x2925,
/*  srom[376]:*/  0x1a1d, 0xe4ba, 0x5c8b, 0x28df, 0x1b41, 0xf190, 0x77cc, 0x2a74,
/*  srom[384]:*/  0x1bae, 0xefa6, 0x7db8, 0x2b2c, 0x1af9, 0xf5b4, 0x7a46, 0x2a3d,
/*  srom[392]:*/  0x1af2, 0xf239, 0x6df1, 0x292a, 0x1a9e, 0xed99, 0x7287, 0x2a23,
/*  srom[400]:*/  0x6464, 0xffff, 0xffff, 0xffff, 0xffff, 0xabab, 0x6464, 0x6464,
/*  srom[408]:*/  0x1aa3, 0xcf70, 0x2647, 0x2399, 0x1ad0, 0xd39e, 0x2fc3, 0x253d,
/*  srom[416]:*/  0x1aa1, 0xe2ac, 0x5e26, 0x29ca, 0x1a70, 0xe023, 0x531b, 0x28bf,
/*  srom[424]:*/  0x1a6f, 0xe175, 0x522f, 0x2857, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[432]:*/  0x1b25, 0xe081, 0x4fc7, 0x27de, 0x1b2c, 0xe7e5, 0x689d, 0x2a23,
/*  srom[440]:*/  0x1ad4, 0xf041, 0x75d9, 0x2a64, 0x1ac1, 0xee80, 0x7481, 0x2a8c,
/*  srom[448]:*/  0x1ac4, 0xebb1, 0x6540, 0x2921, 0x1c6e, 0xdd58, 0x41c9, 0x25ff,
/*  srom[456]:*/  0x1c41, 0xebf4, 0x6e02, 0x29db, 0x1bf3, 0xf239, 0x6b70, 0x2888,
/*  srom[464]:*/  0x1b92, 0xf0a5, 0x6d96, 0x291c, 0x1b77, 0xf790, 0x7fff, 0x2aef,
/*  srom[472]:*/  0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[480]:*/  0x0000, 0x0000, 0x0000, 0xabab, 0xabab, 0xabab, 0x010e, 0x0000,
/*  srom[488]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x4444, 0x3333,
/*  srom[496]:*/  0x2222, 0x0000, 0x4444, 0x3333, 0x2222, 0x0000, 0x0000, 0x0000,
/*  srom[504]:*/  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[512]:*/  0x6464, 0xffff, 0xffff, 0xffff, 0xffff, 0xabab, 0x6464, 0x6464,
/*  srom[520]:*/  0x1ae8, 0xcd70, 0x1fef, 0x2309, 0x1af2, 0xd16a, 0x2949, 0x247d,
/*  srom[528]:*/  0x1a86, 0xe9a2, 0x6e14, 0x2b7e, 0x1a2d, 0xebbe, 0x6edd, 0x2b03,
/*  srom[536]:*/  0x1a2a, 0xeefc, 0x75d4, 0x2b62, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[544]:*/  0x1b61, 0xdf35, 0x4ce9, 0x2807, 0x1b31, 0xe867, 0x6663, 0x2a36,
/*  srom[552]:*/  0x1ab3, 0xf2fc, 0x7208, 0x2a07, 0x1a7c, 0xef81, 0x6102, 0x28aa,
/*  srom[560]:*/  0x1a82, 0xefa8, 0x5f9f, 0x2890, 0x1c8f, 0xe3a8, 0x5519, 0x2842,
/*  srom[568]:*/  0x1c5b, 0xe5ed, 0x519c, 0x278a, 0x1b8a, 0xfb29, 0x7fff, 0x2a71,
/*  srom[576]:*/  0x1b34, 0xf6d1, 0x688a, 0x287e, 0x1af2, 0xf326, 0x5dd5, 0x27bc,
/*  srom[584]:*/  0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x470d
};

#endif
