s32 func_080C7F58();                                  /* extern */
s32 memcpy(void *, s32 *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 gUnk_080FF838;
extern s32 vtable_unk_080E7D14;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    u8 _pad6A8[96];
    s32 unk708;
    s32 unk70C;
    s32 unk710;
    u8 _pad714[23260];
    s32 unk61F0;
} GenObj;
void *func_08083BD4(GenObj *arg0) {
    s32 var_r0;
    u32 var_r4;
    void *temp_r6;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7D14;
    arg0->unk6A4 = 0;
    arg0->unk708 = 0;
    arg0->unk70C = 0;
    arg0->unk710 = 0;
    var_r0 = 0x13;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r6 = arg0 + 0x6170;
    var_r4 = strlen(&gUnk_080FF838);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r6, &gUnk_080FF838, var_r4);
    *((u8 *)temp_r6 + var_r4) = 0;
    arg0->unk61F0 = 0;
    return arg0;
}
