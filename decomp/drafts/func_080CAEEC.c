s32 __builtin_new(s32);                             /* extern */
s32 func_0804EE64(s32, s32, ?, u16, s32, s32);        /* extern */
s32 *func_080D3BC0(s32);                              /* extern */
s32 *malloc(s32);                                     /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    struct GenObj *unk10;
} GenObj;
void func_080CAEEC(GenObj *arg0, ? arg1, ? arg2, u16 arg3, s32 arg4, s32 arg5) {
    GenObj *spC;
    s32 *temp_r1;
    GenObj *var_r2;
    s32 temp_r4;
    GenObj *temp_r0;

    temp_r4 = func_0804EE64(__builtin_new(0x1C), arg1, arg2, arg3, (s32) (u16) arg4, arg5);
    spC = arg0->unk8;
    var_r2 = malloc(0xC);
    if (var_r2 == 0) {
        var_r2 = func_080D3BC0(0xC);
    }
    if (((GenObj *)((u8 *)var_r2 + 8)) != 0) {
        var_r2->unk8 = temp_r4;
    }
    temp_r1 = spC->unk4;
    var_r2->unk0 = spC;
    var_r2->unk4 = temp_r1;
    *temp_r1 = var_r2;
    spC->unk4 = var_r2;
    temp_r0 = arg0->unk0;
    ((void (*)(void *,...))(temp_r0->unk8->unk10))(temp_r0, temp_r4, var_r2);
}
