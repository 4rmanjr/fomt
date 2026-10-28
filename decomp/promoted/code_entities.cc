
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

// DECOMP-MATCHED func_080202C8 (dari code_entities.s; cek manusia sebelum ke src/)
void func_080202C8(void) {

}

// DECOMP-MATCHED func_08022B5C (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08022B5C(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 6;
    case 1:
        return 7;
    }
}

// DECOMP-MATCHED func_080244D8 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_080244D8(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 0xA;
    case 1:
        return 0xD;
    }
}

// DECOMP-MATCHED func_08024C98 (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[60];
    u8 unk3C;
} GenObj;
void func_08024C98(GenObj *arg0) {
    arg0->unk3C = 0;
}

/* ATTEMPT-NOTE opencode: member u8 (strb) bukan s32; offset 0x3C muat adds+strb. */

// DECOMP-MATCHED func_08020080 (dari code_entities.s; cek manusia sebelum ke src/)
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

// DECOMP-MATCHED func_080246BC (dari code_entities.s; cek manusia sebelum ke src/)
s32 GetId__C4Tool(s32);                             /* extern */

u32 func_080246BC(u32 arg0, s32 arg1) {
    u32 var_r4;
    u32 var_r0;

    var_r4 = arg0;
    switch (GetId__C4Tool(arg1) - 0x20) {
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    case 3:
        var_r0 = 3;
        break;
    case 4:
        var_r0 = 4;
        break;
    case 5:
    case 6:
        var_r0 = 5;
        break;
    case 7:
        var_r0 = 6;
        break;
    default:
        return var_r4;
    }
    if (var_r0 > var_r4) {
        var_r4 = var_r0;
    }
    return var_r4;
}

/* ATTEMPT-NOTE opencode: switch polos (jump-table) bukan compare-chain; default return. */

// DECOMP-MATCHED func_080237F0 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_080237F0(u32 arg0) {
    if (arg0 <= 1U) {
        goto ret1;
    }
    if (arg0 != 2) {
        goto ret1;
    }
    goto ret2;
ret1:
    return 1;
ret2:
    return 2;
}

/* ATTEMPT-NOTE opencode: goto-chain agar bls/beq + urutan movs. */

// DECOMP-MATCHED func_08024C54 (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct GenObj6 {
    u8 _pad0[6];
    u8 unk6;
} GenObj6;
s32 func_080323C8(GenObj6 *);                            /* extern */

void func_08024C54(GenObj6 *arg0) {
    arg0->unk6 = 1;
    func_080323C8(arg0);
}

// DECOMP-MATCHED func_08024C64 (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct GenObj6 {
    u8 _pad0[6];
    u8 unk6;
} GenObj6;
s32 func_080323C8(GenObj6 *);                            /* extern */

void func_08024C64(GenObj6 *arg0) {
    arg0->unk6 = 0;
    func_080323C8(arg0);
}

// DECOMP-MATCHED func_08021F88 (dari code_entities.s; cek manusia sebelum ke src/)
s32 GetGrowthStage__C5Horse(s32);                   /* extern */
extern u8 gUnk_080F09AC;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_08021F88(GenObj *arg0, s32 arg1) {
    u8 *base = &gUnk_080F09AC;
    s32 v = GetGrowthStage__C5Horse(arg0->unk34);
    return *(u16 *)(base + (v * 7 + arg1) * 2);
}

// DECOMP-MATCHED func_08022980 (dari code_entities.s; cek manusia sebelum ke src/)
s32 GetGrowthStage__C7Chicken(s32);                 /* extern */
extern u8 gUnk_080F0A68;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_08022980(GenObj *arg0, s32 arg1) {
    u8 *base = &gUnk_080F0A68;
    s32 v = GetGrowthStage__C7Chicken(arg0->unk34);
    return *(u16 *)(base + (v * 5 + arg1) * 2);
}
