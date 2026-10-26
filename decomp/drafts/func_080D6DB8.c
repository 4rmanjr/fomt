s32 free();                                           /* extern */
s32 func_08007128(void *);                            /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_0800745C(void *, s32);                     /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
} GenObj;
void func_080D6DB8(GenObj *arg0, u32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_sl;
    s32 var_r8;
    s32 var_sl;
    void *temp_r2;
    void *temp_r3;
    void *temp_r5;
    void *temp_r6;
    void *var_r0;
    void *var_r0_2;
    GenObj *var_r4;
    GenObj *var_r4_2;
    GenObj *var_r5;
    void *var_r6;

    temp_r2 = arg0->unk0;
    if ((u32) ((s32) (arg0->unkC - temp_r2) >> 3) < arg1) {
        temp_r3 = arg0->unk4;
        temp_sl = (s32) (temp_r3 - temp_r2) >> 3;
        if (temp_r2 != 0) {
            var_r5 = temp_r2;
            temp_r6 = temp_r3;
            if (arg1 != 0) {
                temp_r4 = arg1 * 8;
                var_r0 = malloc(temp_r4);
                var_r8 = temp_r4;
                if (var_r0 == 0) {
                    var_r0 = func_080D3BC0(var_r8);
                }
            } else {
                var_r0 = 0;
                var_r8 = 0;
            }
            var_r4 = var_r0;
            var_sl = temp_sl * 8;
            if (var_r5 != temp_r6) {
                do {
                    if (var_r4 != 0) {
                        func_08007128(var_r4);
                        var_r4->unk4 = func_0800745C(var_r4, var_r5->unk4);
                    }
                    var_r5 += 8;
                    var_r4 += 8;
                } while (var_r5 != temp_r6);
            }
            var_r6 = var_r0;
            temp_r5 = arg0->unk4;
            var_r4_2 = arg0->unk0;
            if (var_r4_2 != temp_r5) {
                do {
                    func_080073E0(var_r4_2, var_r4_2->unk4);
                    func_08007184(var_r4_2, 2);
                    var_r4_2 += 8;
                } while (var_r4_2 != temp_r5);
            }
            if (arg0->unk0 != 0) {
                free();
            }
        } else {
            if (arg1 != 0) {
                temp_r4_2 = arg1 * 8;
                var_r0_2 = malloc(temp_r4_2);
                var_r8 = temp_r4_2;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_r8);
                }
            } else {
                var_r0_2 = 0;
                var_r8 = 0;
            }
            var_r6 = var_r0_2;
            var_sl = temp_sl * 8;
        }
        arg0->unk0 = var_r6;
        arg0->unk4 = (void *) (var_sl + var_r6);
        arg0->unkC = (void *) (var_r8 + var_r6);
    }
}
