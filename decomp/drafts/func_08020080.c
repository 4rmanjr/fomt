typedef struct GenObj {
    u8 _pad0[24];
    s32 unk18;
    s32 unk1C;
    u8 unk20;
} GenObj;
void func_08020080(GenObj *arg0, s32 arg1) {
    GenObj *a3 = arg0;
    s32 var_r4;
    s32 var_r5;
    u8 t;

    var_r4 = 0;
    var_r5 = 0;
    if (arg1 != 0) {
        t = a3->unk20;
        switch (t) {
        case 0:
            var_r5 = arg1;
            break;
        case 1:
            var_r5 = 0 - arg1;
            break;
        case 2:
            var_r4 = 0 - arg1;
            break;
        case 3:
            var_r4 = arg1;
            break;
        }
    }
    a3->unk18 = var_r4;
    a3->unk1C = var_r5;
}

/* ATTEMPT-NOTE opencode: unk20 u8 + u8 t switch (bukan if-else): switch polos comparator-chain beq/bgt/beq + push r4,r5 via var s32 + t. */
