s32 func_080D0EBC(s32 *, s32, s32, s32);                /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void func_08008FE4(void *arg0, s32 arg1) {
    s32 *sp0;
    s32 *var_r3;
    GenObj *var_r4;

    var_r4 = arg0;
    if (var_r4 != arg1) {
        do {
            var_r3 = var_r4->unk4;
            if (var_r4->unk0 == 1) {
                sp0 = var_r3;
                var_r3 = &sp0;
            }
            func_080D0EBC(var_r3, var_r4->unk8, var_r4->unkC, 0x040000D4);
            var_r4 += 0x10;
        } while (var_r4 != arg1);
    }
}
