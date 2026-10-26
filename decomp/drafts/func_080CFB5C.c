void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
extern s32 gUnk_08699FF4;
extern s32 gUnk_086D6368;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080CFB5C(GenObj *arg0, s32 arg2) {
    s32 *temp_r4;

    temp_r4 = arg0 + 0x1C + (arg2 * 4);
    Unpack(GetMapData(arg0->unk4)->unk4, *temp_r4);
    if (arg0->unk4 == 0x3E) {
        func_08008E64(&gUnk_086D6368, *temp_r4 + 0x100, 0x60);
        func_08008E64(&gUnk_08699FF4, *temp_r4 + 0x160, 0x80);
    }
}
