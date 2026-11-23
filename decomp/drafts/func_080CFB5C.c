void *GetMapData(s32);                                 /* extern */
s32 Unpack(s32, s32);                                  /* extern */
void func_08008E64(s32, s32, s32);                     /* extern */
extern s32 gUnk_086D6368;
extern s32 gUnk_08699FF4;

void func_080CFB5C(u8 *arg0, s32 arg1, u32 arg2) {
    s32 map;
    s32 m;
    u32 off;
    u8 *base;
    s32 *p;

    map = (s32) GetMapData(*(s32 *) (arg0 + 4));
    m = *(s32 *) (map + 4);
    off = arg2 * 4;
    base = arg0 + 0x1C;
    p = (s32 *) (base + off);
    Unpack(m, *p);
    if (*(s32 *) (arg0 + 4) == 0x3E) {
        func_08008E64((s32) &gUnk_086D6368, *p + 0x100, 0x60);
        func_08008E64((s32) &gUnk_08699FF4, *p + 0x160, 0x80);
    }
}
