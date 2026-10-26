s32 func_080C7F58();                                  /* extern */
s32 memcpy(void *, s32 *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 gUnk_080FD9EC;
extern s32 vtable_unk_080E7BEC;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    s32 unk6A8;
    u8 _pad6AC[64];
    s32 unk6EC;
    u8 _pad6F0[7108];
    s32 unk22B4;
} GenObj;
void *func_0807B0F0(GenObj *arg0, s32 arg2) {
    s32 var_r0;
    u32 var_r4;
    void *temp_r6;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7BEC;
    if (arg2 != 0) {
        arg0->unk6A4 = 4;
    } else {
        arg0->unk6A4 = arg2;
    }
    arg0->unk6A8 = 0;
    arg0->unk6EC = 0;
    var_r0 = 8;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r6 = arg0 + 0x2234;
    var_r4 = strlen(&gUnk_080FD9EC);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r6, &gUnk_080FD9EC, var_r4);
    *((u8 *)temp_r6 + var_r4) = 0;
    arg0->unk22B4 = 0;
    return arg0;
}
