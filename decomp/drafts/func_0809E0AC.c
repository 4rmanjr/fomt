extern ? gUnk_086DC3C4;
extern ? gUnk_086DC3D0;
extern ? gUnk_086DC3DC;
extern ? gUnk_086DC3E8;
extern ? gUnk_086DC3F4;

? *func_0809E0AC(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r0;

    temp_r0 = (u32) (*(arg0 + ((arg2 * 0x38) + 4) + (arg1 * 2)) << 0x1C) >> 0x1C;
    switch (temp_r0) {
    case 0:
        return &gUnk_086DC3C4;
    case 1:
        return &gUnk_086DC3D0;
    case 2:
        return &gUnk_086DC3DC;
    case 3:
        return &gUnk_086DC3E8;
    case 4:
        return &gUnk_086DC3F4;
    default:
        return 0;
    }
}
