
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

// DECOMP-MATCHED func_0802A7D8 (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[136];
    u8 unk88;
} GenObj;
void func_0802A7D8(GenObj *arg0) {
    arg0->unk88 = 0;
}

// DECOMP-MATCHED func_0802B908 (dari code_entities.s; cek manusia sebelum ke src/)
s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32 *, s32, s32); /* extern */
s32 func_0800E924(s32 *, s32);                          /* extern */
extern s32 vtable_unk_080E676C;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_0802B908(GenObj *arg0, s32 arg1, s32 arg2) {
struct { s32 sp4; s32 _b; } fr;

    func_0800E924(&fr.sp4, arg2 + 0x1BD8);
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, &fr.sp4, 2, 0x192);
    arg0->unk14 = &vtable_unk_080E676C;
    return arg0;
}

// DECOMP-MATCHED func_08025AFC (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
} GenObj;
s32 func_08025AFC(GenObj *arg0) {
    s32 v = arg0->unk4;
    if (v <= 8) {
        return 1;
    }
    return 0;
}

// DECOMP-MATCHED func_0802B8EC (dari code_entities.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_08024974(s32, s32, s32);                     /* extern */

s32 func_0802B8EC(s32 arg0, s32 arg1) {
    return func_08024974(__builtin_new(0xC8), arg0, arg1);
}

// DECOMP-MATCHED func_08032090 (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct { u16 unk0; u16 unk2; } EItem;
typedef struct { EItem *ptr; u16 count; } EPair;
typedef struct { u8 _00[12]; void (*unkC)(EPair *, void **, s32); } ETab;
s32 func_08032090(void **arg0, s32 arg1) {
    EPair tmp;
    EPair tmp2;
    register EPair *pp __asm__("r2");
    register EPair *pt0 __asm__("r0");
    register u32 sum __asm__("r4");
    register u32 i __asm__("r3");
    register u32 count __asm__("r1");
    register u32 lim __asm__("r2");
    EItem *p;
    EItem *q;
    register ETab *t __asm__("r1");
    register void **a4 __asm__("r4") = arg0;
    register s32 a2 __asm__("r2") = arg1;
    t = (ETab *)*a4;
    pt0 = &tmp;
    t->unkC(pt0, a4, a2);
    tmp2 = tmp;
    pp = &tmp2;
    sum = 0;
    i = 0;
    p = tmp2.ptr;
    count = 0;
    if (p != 0)
        count = pp->count;
    lim = count;
    if (sum < lim) {
        q = p;
        do {
            sum += q->unk2;
            q++;
            i++;
        } while (i < lim);
    }
    return sum;
}

// DECOMP-MATCHED func_0803205C (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[60];
    u8 unk3C;
} GenObj;
s32 func_0803205C(GenObj *arg0) {
    s32 var_r1;
    u8 temp_r0;

    var_r1 = 0;
    temp_r0 = arg0->unk3C;
    if ((temp_r0 == 7) || (temp_r0 == 0x2D)) {
        var_r1 = 1;
    }
    return var_r1;
}

// DECOMP-MATCHED sub_08031E0A (dari code_entities.s; cek manusia sebelum ke src/)
/* Ekor bersama: entri tanpa prolog yang menyimpan satu byte lalu
   gabung ke epilog umum di ujung. Ditulis sebagai asm verbatim
   dalam fungsi naked agar byte persis sama dengan referensi.
   Padding pool ditulis eksplisit (bukan .align): tata letak .align
   mengikuti alamat absolut, dan basis referensi tidak segaris kata. */
__attribute__((naked)) void sub_08031E0A(void) {
    __asm__ volatile(
    ".syntax unified\n"
    "ldr r4, [sp, #0x13c]\n"
    "strb r0, [r4]\n"
    "b .L08031F0E\n"
    ".L08031E10:\n"
    "movs r1, #0\n"
    "mov r5, sl\n"
    "ldrh r0, [r5, #0x24]\n"
    "cmp r0, #0\n"
    "bne .L08031E1C\n"
    "movs r1, #1\n"
    ".L08031E1C:\n"
    "cmp r1, #0\n"
    "beq .L08031F0E\n"
    "movs r0, #0x39\n"
    "ldr r6, [sp, #0x13c]\n"
    "strb r0, [r6]\n"
    ".L08031E26:\n"
    "mov r1, sl\n"
    "adds r1, #0x3d\n"
    "movs r0, #0x1e\n"
    "strb r0, [r1]\n"
    "b .L08031F0E\n"
    ".L08031E30:\n"
    "ldr r0, [r5]\n"
    "b .L08031E78\n"
    ".L08031E34:\n"
    "mov r1, sl\n"
    "adds r1, #0x3d\n"
    "ldrb r0, [r1]\n"
    "subs r0, #1\n"
    "strb r0, [r1]\n"
    "lsls r0, r0, #0x18\n"
    "cmp r0, #0\n"
    "bne .L08031F0E\n"
    "mov r7, sl\n"
    "ldr r0, [r7]\n"
    "ldr r1, [r0]\n"
    "movs r2, #0xa6\n"
    "lsls r2, r2, #1\n"
    "adds r1, r1, r2\n"
    "ldr r1, [r1]\n"
    "bl _call_via_r1\n"
    "ldr r5, [r0]\n"
    "ldr r6, [r0, #4]\n"
    "mov r4, sl\n"
    "adds r4, #0x88\n"
    "cmp r5, r6\n"
    "beq .L08031E74\n"
    ".L08031E62:\n"
    "ldr r0, [r5]\n"
    "bl func_08008CD0\n"
    "lsls r0, r0, #0x18\n"
    "cmp r0, #0\n"
    "beq .L08031E30\n"
    "adds r5, #4\n"
    "cmp r5, r6\n"
    "bne .L08031E62\n"
    ".L08031E74:\n"
    "subs r0, r6, #4\n"
    "ldr r0, [r0]\n"
    ".L08031E78:\n"
    "movs r1, #0x66\n"
    "bl func_08008B6C\n"
    "movs r0, #0\n"
    "strb r0, [r4]\n"
    "movs r0, #0x10\n"
    ".L08031E84:\n"
    "ldr r3, [sp, #0x13c]\n"
    "strb r0, [r3]\n"
    "b .L08031F0E\n"
    ".L08031E8A:\n"
    "mov r1, sl\n"
    "adds r1, #0x3d\n"
    "ldrb r0, [r1]\n"
    "subs r0, #1\n"
    "strb r0, [r1]\n"
    "lsls r0, r0, #0x18\n"
    "cmp r0, #0\n"
    "bne .L08031F0E\n"
    "mov r0, sl\n"
    "bl func_0802B054\n"
    "mov r4, sl\n"
    "ldr r0, [r4, #0x14]\n"
    ".L08031EA4:\n"
    "ldr r1, [r0, #0x70]\n"
    ".L08031EA6:\n"
    "mov r0, sl\n"
    "bl _call_via_r1\n"
    "b .L08031F0E\n"
    ".L08031EAE:\n"
    "mov r0, sl\n"
    "bl func_0802AEA4\n"
    "lsls r0, r0, #0x18\n"
    "lsrs r0, r0, #0x18\n"
    "cmp r0, #0\n"
    "beq .L08031F0A\n"
    "mov r0, sl\n"
    "adds r0, #0x20\n"
    "ldrb r0, [r0]\n"
    "adds r1, r0, #0\n"
    "cmp r0, #1\n"
    "beq .L08031EE8\n"
    "cmp r0, #1\n"
    "bgt .L08031ED2\n"
    "cmp r0, #0\n"
    "beq .L08031EDC\n"
    "b .L08031F0E\n"
    ".L08031ED2:\n"
    "cmp r1, #2\n"
    "beq .L08031F00\n"
    "cmp r1, #3\n"
    "beq .L08031EF2\n"
    "b .L08031F0E\n"
    ".L08031EDC:\n"
    ".short 0x4801 @ ldr r0, .L08031EE4\n"
    "mov r5, sl\n"
    "str r0, [r5, #0x1c]\n"
    "b .L08031F0E\n"
    ".L08031EE4: .4byte 0xFFFF0000\n"
    ".L08031EE8:\n"
    "movs r0, #0x80\n"
    "lsls r0, r0, #9\n"
    "mov r6, sl\n"
    "str r0, [r6, #0x1c]\n"
    "b .L08031F0E\n"
    ".L08031EF2:\n"
    ".short 0x4802 @ ldr r0, .L08031EFC\n"
    "mov r7, sl\n"
    "str r0, [r7, #0x18]\n"
    "b .L08031F0E\n"
    ".short 0x0000\n"
    ".L08031EFC: .4byte 0xFFFF0000\n"
    ".L08031F00:\n"
    "movs r0, #0x80\n"
    "lsls r0, r0, #9\n"
    "mov r1, sl\n"
    "str r0, [r1, #0x18]\n"
    "b .L08031F0E\n"
    ".L08031F0A:\n"
    "ldr r2, [sp, #0x13c]\n"
    ".L08031F0C:\n"
    "strb r0, [r2]\n"
    ".L08031F0E:\n"
    "add sp, #0x18c\n"
    "pop {r3, r4, r5}\n"
    "mov r8, r3\n"
    "mov sb, r4\n"
    "mov sl, r5\n"
    "pop {r4, r5, r6, r7}\n"
    "pop {r0}\n"
    "bx r0\n"
    ".align 2, 0\n"
    ".syntax divided\n"
    );
}
