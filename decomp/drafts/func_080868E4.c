s32 GetCow__4BarnUi(s32, s32);                       /* extern */
u32 GetProductRank__C9Livestock();                  /* extern */
s32 GetSheep__4BarnUi(s32, s32);                    /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
s32 func_080868E4(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = 0xBB8;
    if (arg2 == 0) {
        GetCow__4BarnUi(arg0->unk8 + 0x5F0, arg1);
        switch (GetProductRank__C9Livestock()) {
        case 3:
            var_r4 = 0x1770;
            break;
        case 4:
            var_r4 = 0x1B58;
            break;
        default:
            break;
        }
    } else if (arg2 == 1) {
        GetSheep__4BarnUi(arg0->unk8 + 0x5F0, arg1);
        switch (GetProductRank__C9Livestock()) {
        case 0:
            var_r4 = 0x7D0;
            break;
        case 1:
            var_r4 = 0x9C4;
            break;
        case 2:
        default:
            break;
        case 3:
            var_r4 = 0xFA0;
            break;
        case 4:
            var_r4 = 0x1388;
            break;
        }
    }
    return var_r4;
}

/* ATTEMPT-NOTE pi: byte +0x2: 0x8 vs ref 0x9 (push {r4,lr} vs {r4-r7?,lr}?); switch/if-else GetCow/GetSheep+GetProductRank; coba susun if tanpa switch / default eksplisit agar jump-table hilang. */
