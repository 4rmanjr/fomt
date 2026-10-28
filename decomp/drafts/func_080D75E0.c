s32 func_08007844(s32);                               /* extern */
s32 func_080D6F0C(void *);                            /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080D75E0(GenObj *arg0, s32 arg1, u32 arg2) {
    s32 var_r1;
    s32 var_r1_2;
    u8 *var_r3;
    s8 var_r2;

    if (arg2 <= 5U) {
        var_r3 = (u8 *)arg0 + 4;
        if (0x20 & arg1) {
            goto add4;
        }
        goto call;
    add4:
        var_r3 = (u8 *)arg0 + 8;
    call:
        func_08007844(var_r3);
        arg0->unk0 = 0;
        var_r2 = 0;
        var_r1 = 0;
        if (arg0->unk4 == 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r1_2 = 0;
            if (arg0->unk8 == 0) {
                var_r1_2 = 1;
            }
            if (var_r1_2 != 0) {
                var_r2 = 1;
            }
        }
        arg0->unk1 = var_r2;
    } else if (arg2 == 6) {
        func_080D6F0C(arg0);
    }
}

/* ATTEMPT-NOTE opencode: unk0/unk1 u8 + unk4/8 s32 + byte-arith; sisa: var_r3 di r2 (ref r3; register-asm r3 dicoba) + urutan adds-vs-ands. */
