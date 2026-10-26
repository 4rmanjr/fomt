s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s16 func_08007D4C(void *);                          /* extern */
s32 memset(void *, u8);                               /* extern */
extern s32 vtable_unk_080E82D8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    u8 _pad14[16];
    void *unk24;
} GenObj;
void *func_080A46AC(GenObj *arg0, void **arg1, s32 arg2, s32 arg3, u32 arg4) {
    u8 sp0;
    s32 temp_r2;
    s32 var_r8;
    s8 *var_r4;
    u32 var_r5;
    GenObj *temp_r4;

    var_r8 = arg3;
    arg0->unk24 = &vtable_unk_080E82D8;
    arg0->unk0 = arg1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 4);
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, arg2);
    arg0->unkC = func_08007D4C(temp_r4);
    sp0 = 0;
    arg0->unk10 = 0U;
    if (arg4 <= 0x10U) {
        memset((GenObj *)((u8 *)arg0 + 0x14), sp0);
        arg0->unk10 = arg4;
    }
    var_r5 = 0;
    if (arg4 > 0U) {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x14);
        do {
            temp_r2 = var_r8 + 4;
            var_r8 = temp_r2;
            *var_r4 = (*arg1)->unk48(arg1, *(temp_r2 - 4));
            var_r4 += 1;
            var_r5 += 1;
        } while (var_r5 < arg4);
    }
    return arg0;
}
