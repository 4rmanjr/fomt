
// DECOMP-MATCHED func_080202C4 (dari code_entities.s; cek manusia sebelum ke src/)
void func_080202C4(void) {

}

// DECOMP-MATCHED func_0802161C (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_0802161C(void) {
    return 0;
}

// DECOMP-MATCHED func_08022320 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08022320(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 1;
    case 1:
        return 2;
    }
}

// DECOMP-MATCHED func_08022B58 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08022B58(void) {
    return 0;
}

// DECOMP-MATCHED func_080244C4 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_080244C4(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 1;
    case 1:
        return 2;
    }
}

// DECOMP-MATCHED func_08024BE8 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_0802A588(s32);                               /* extern */
s32 vfunc_10__7AEntity();                             /* extern */

void func_08024BE8(s32 arg0) {
    vfunc_10__7AEntity();
    func_0802A588(arg0);
}

// DECOMP-MATCHED func_080245E0 (dari code_entities.s; cek manusia sebelum ke src/)
s32 rand();                                         /* extern */

s32 func_080245E0(s32 arg0) {
    u32 temp_r0;

    temp_r0 = arg0 - 0x32;
    switch (temp_r0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 7;
    case 8:
        return 8;
    case 9:
        return 9;
    case 10:
        return 0xA;
    case 11:
        return 0xB;
    case 12:
        return 0xC;
    case 13:
        return 0xD;
    case 14:
        return 0xE;
    case 15:
        return 0x14;
    case 16:
        return 0xF;
    case 17:
        return 0x10;
    case 18:
        if ((u32) (u8) ((s32) (rand() % 1000) / 10) <= 4U) {
            return 0x12;
        }
        return 0x11;
    case 19:
        return 0x13;
    default:
        return 0x15;
    }
}

// DECOMP-MATCHED func_0802C2DC (dari code_entities.s; cek manusia sebelum ke src/)
void func_0802C2DC(void) {

}

// DECOMP-MATCHED func_0802907C (dari code_entities.s; cek manusia sebelum ke src/)
s32 GetId__C7Article(s8 *);                         /* extern */
s32 func_0800ED2C(s32);                               /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0802A7D8(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_0802907C(GenObj *arg0) {
    s8 sp0;
    s32 temp_r4;

    temp_r4 = arg0->unk34 + 0x1C2C;
    if ((func_0800F190(temp_r4) << 0x18) == 0) {
        if (func_0800F204(temp_r4) == 1) {
            sp0 = func_0800F258(temp_r4);
            if (GetId__C7Article(&sp0) == 0x35) {
                func_0800ED2C(arg0->unk38);
            }
        }
        func_0800F390(arg0->unk38 + 0x54);
        func_0802A7D8(arg0);
    }
}
