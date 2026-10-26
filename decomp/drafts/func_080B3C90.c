s32 memcpy(void *, s32 *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 gUnk_081078BC;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    s32 unk11;
} GenObj;
void *func_080B3C90(GenObj *arg0) {
    u32 var_r4;

    var_r4 = strlen(&gUnk_081078BC);
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy(arg0, &gUnk_081078BC, var_r4);
    *((u8 *)arg0 + var_r4) = 0;
    arg0->unk10 = 0;
    arg0->unk11 = 0;
    return arg0;
}
