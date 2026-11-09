
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

// DECOMP-MATCHED func_08022334 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08022334(s32 arg0) {
    if (arg0 == 0) {
        return 0xE;
    }
    if (arg0 == 1) {
        return 0xF;
    }
    return 0xE;
}

// DECOMP-MATCHED func_08023400 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08023400(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}

// DECOMP-MATCHED func_080240BC (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_080240BC(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}

// DECOMP-MATCHED func_080229A4 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_080229A4(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}

// DECOMP-MATCHED func_080299D0 (dari code_entities.s; cek manusia sebelum ke src/)
s32 SetAnim__12AActorEntityUi(void *, u16);

void func_080299D0(u8 *arg0) {
    u8 *p = arg0 + 0xa4;
    *p = 0;
    *(p - 0x1c) = 0;
    SetAnim__12AActorEntityUi(arg0, 402);
}

// DECOMP-MATCHED func_08020130 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_0805E894(void *);                          /* extern */

typedef struct Sub20130 { u8 _pad0[0xE]; u16 unkE; s16 unk10; } Sub20130;
typedef struct GenObj { u8 _pad0[0x10]; s32 unk10; } GenObj;

s32 func_08020130(GenObj *arg0) {
    s32 var_r4;
    u32 var_r1;
    Sub20130 *temp_r2;
    s32 temp_r1_2;

    if (arg0->unk10 != 0) {
        var_r4 = 0;
        temp_r2 = (Sub20130 *)(arg0->unk10 + 0x30);
        var_r1 = 0;
        if (temp_r2->unkE != 0) {
            temp_r1_2 = temp_r2->unk10;
            var_r1 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        }
        if ((var_r1 == 0) || ((func_0805E894(temp_r2) << 0x18) != 0)) {
            var_r4 = 1;
        }
        return var_r4;
    }
    return 1;
}

// DECOMP-MATCHED func_0802C210 (dari code_entities.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_0802B9C0(s32, s32);                          /* extern */

s32 func_0802C210(s32 arg0) {
    return func_0802B9C0(__builtin_new(0x5C), arg0);
}

// DECOMP-MATCHED func_08020460 (dari code_entities.s; cek manusia sebelum ke src/)
typedef struct Sub_08020460 { u8 _pad20[0x20]; s32 unk20; } Sub_08020460;

typedef struct GenObj {
    u8 _pad0[0x34];
    Sub_08020460 *unk34;
} GenObj;
s32 func_08020460(GenObj *arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0->unk34->unk20 == 5) {
        var_r1 = 1;
    }
    return var_r1;
}

// DECOMP-MATCHED func_0802A4C0 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_0805E850(void *, s32, s32);                  /* extern */

typedef struct VtA4 { u8 _pad[0x64]; void *unk64; } VtA4;
typedef struct HA4 { VtA4 *vt; } HA4;
typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[12];
    s32 unk10;
    u8 _pad14[116];
    u8 unk88;
    u8 _pad89[0x3F];
    u8 unkC8;
} GenObj;
void func_0802A4C0(GenObj *arg0, s32 arg1, s32 arg2) {
    register GenObj *a0 __asm__("r3") = arg0;
    register s32 a1 __asm__("r5") = arg1;
    register u8 *t0 __asm__("r0");
    GenObj *temp_r4;
    u8 *b;
    void *obj;
    s32 rv;

    b = (u8 *)a0 + 0x88;
    *b = 1;
    if (arg2 != 1) {
        if (arg2 != 0)
            goto skip;
    }
    b[1] = arg2;
skip:
    temp_r4 = a0->unk10;
    if (temp_r4 != 0) {
        s32 v1;
        s32 v0;
        obj = *(void **)temp_r4->unk0;
        rv = ((s32 (*)(void *))(((HA4 *)obj)->vt->unk64))(obj);
        func_0805E850((void *)((u8 *)temp_r4 + 0xB4), rv, a1);
        t0 = (u8 *)temp_r4 + 0xC8;
        v0 = 0;
        v1 = 1;
        *t0 = v1;
        t0 += 2;
        *t0 = v0;
        t0 += 1;
        *t0 = v1;
        __asm__ volatile("" : "+r"(t0));
    }
}

// DECOMP-MATCHED func_0802A510 (dari code_entities.s; cek manusia sebelum ke src/)
u16 GetIconId__C4Tool(s8 *);
s32 GetTool__C9ToolStack(s32);
s8 func_0800E550(s32, s32);
s32 func_0805E850(void *, s32, s32);

typedef struct Vt10 { u8 _pad[0x64]; void *unk64; } Vt10;
typedef struct H10 { Vt10 *vt; } H10;
typedef struct S88 {
    u8 b0;
    u8 b1;
    u8 _pad2[2];
    s32 w4;
    s32 w8;
    u8 _padC[8];
    s32 w14;
} S88;
typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[12];
    s32 unk10;
    u8 _pad14[36];
    s32 unk38;
    u8 _pad3C[76];
} GenObj;
void func_0802A510(GenObj *arg0) {
    register GenObj *a0 __asm__("r3") = arg0;
    register u8 *b __asm__("r0");
    s8 sp0;
    s32 temp38;
    u16 icon;
    GenObj *temp_r5;
    u8 *t0;
    void *obj;
    s32 rv;
    s32 v0;
    s32 v1;
    s32 c1;
    s32 c2;
    S88 *bs;

    b = (u8 *)arg0 + 0x88;
    __asm__ volatile("" : "+r"(b));
    v0 = 0;
    v1 = 1;
    bs = (S88 *)b;
    bs->b0 = v1;
    bs->b1 = v0;
    c1 = 0xFFF80000;
    c2 = 0x110000;
    bs->w4 = c1;
    bs->w8 = v0;
    bs->w14 = c2;
    temp_r5 = a0->unk10;
    if (temp_r5 != 0) {
        temp38 = a0->unk38;
        sp0 = func_0800E550(temp38, GetTool__C9ToolStack(temp38 + 0x5C));
        icon = GetIconId__C4Tool(&sp0);
        obj = *(void **)temp_r5->unk0;
        rv = ((s32 (*)(void *))(((H10 *)obj)->vt->unk64))(obj);
        func_0805E850((void *)((u8 *)temp_r5 + 0xB4), rv, icon);
        t0 = (u8 *)temp_r5 + 0xC8;
        *t0 = v1;
        t0 += 2;
        *t0 = v0;
        t0 += 1;
        *t0 = v1;
        __asm__ volatile("" : "+r"(t0));
    }
}

// DECOMP-MATCHED func_0802B9C0 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_0802B944();
s32 vfunc_10__7AEntity();
extern s32 vtable_unk_080E65F4;

typedef struct GenObj {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[28];
    u8 unk34;
} GenObj;
void *func_0802B9C0(GenObj *arg0, s32 arg1) {
    register GenObj *a0 __asm__("r4") = arg0;
    u8 *p;
    s32 v0;

    func_0802B944(a0, arg1);
    a0->unk14 = &vtable_unk_080E65F4;
    p = (u8 *)a0 + 0x34;
    __asm__ volatile("" : "+r"(p));
    v0 = 0;
    *p = v0;
    p += 1;
    *p = v0;
    p += 3;
    *p = v0;
    p[1] = v0;
    *(s32 *)(p + 4) = v0;
    *(s32 *)(p + 8) = v0;
    *(s32 *)(p + 12) = v0;
    *(s32 *)(p + 16) = v0;
    *(s32 *)(p + 20) = v0;
    *(s32 *)(p + 24) = v0;
    p += 0x1C;
    *p = v0;
    p += 2;
    *(u16 *)p = v0;
    p += 2;
    *p = v0;
    p += 1;
    *p = v0;
    vfunc_10__7AEntity(a0);
    return a0;
}

// DECOMP-MATCHED func_0802B944 (dari code_entities.s; cek manusia sebelum ke src/)
s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32 *, s32, s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 vtable_unk_080E671C;

typedef struct GenObj {
    u8 _pad0[0x14];
    void *unk14;
} GenObj;

void *func_0802B944(void *arg0, s32 arg1) {
    register GenObj *a0 __asm__("r5");
    register s32 a1 __asm__("r9");
    register s32 z8 __asm__("r8");
    register s32 MASK __asm__("r3");
    register s32 v __asm__("r2");
    u8 sp4[8];
    u8 spC[8];
    u8 *b;
    u8 *p4;
    s32 z6;
    s32 K;

    a0 = (GenObj *)arg0;
    a1 = arg1;
    b = spC;
    K = 0x234;
    z8 = 0;
    v = *(u16 *)b;
    MASK = 0xFFFFFC00;
    *(u16 *)b = (u16)((v & MASK) | K);
    z6 = 0;
    *(b + 1) &= 3;
    *(u16 *)(b + 2) &= MASK;
    *(b + 3) &= 3;
    *(u16 *)(b + 4) &= MASK;
    p4 = sp4;
    memcpy(p4, spC, 6);
    p4[6] = z6;
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(a0, a1, (s32 *)sp4, 2, z8);
    a0->unk14 = &vtable_unk_080E671C;
    return a0;
}

// DECOMP-MATCHED func_0802BE68 (dari code_entities.s; cek manusia sebelum ke src/)
s32 SetAnim__12AActorEntityUi(void *, u16);
u16 func_0802BC48(void *);

typedef struct S38 {
    u8 _pad0[0xC];
    s32 unkC;
    s32 unk10;
    u8 _pad14[4];
    s32 unk18;
} S38;
typedef struct GenObj {
    u8 _pad0[0x20];
    u8 unk20;
} GenObj;
void func_0802BE68(GenObj *arg0) {
    register GenObj *a0 __asm__("r5");
    register s32 var_r2 __asm__("r2");
    u8 *w;
    s32 var_r1;
    S38 *var_r0;

    a0 = arg0;
    var_r2 = arg0->unk20;
    switch (var_r2) {
    case 2:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0xFFFE5556;
        var_r2 = 0;
        var_r0->unkC = var_r1;
        var_r0->unk10 = var_r2;
        var_r0->unk18 = var_r2;
        break;
    case 3:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0x1AAAA;
        var_r2 = 0;
        var_r0->unkC = var_r1;
        var_r0->unk10 = var_r2;
        var_r0->unk18 = var_r2;
        break;
    case 1:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r2 = 0;
        var_r1 = 0xFFFE5556;
        var_r0->unkC = var_r2;
        var_r0->unk10 = var_r1;
        var_r0->unk18 = var_r2;
        break;
    case 0:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0x1AAAA;
        var_r0->unkC = var_r2;
        var_r0->unk10 = var_r1;
        var_r0->unk18 = var_r2;
        break;
    }
    w = (u8 *)a0;
    w += 0x34;
    *w = 1;
    w += 0x24;
    *w = 1;
    {
        u16 icon = func_0802BC48(a0);
        SetAnim__12AActorEntityUi(a0, icon);
    }
    w = (u8 *)a0;
    w += 0x54;
    *w = 1;
}

// DECOMP-MATCHED func_0802BFA0 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_0803260C();
s32 func_0805E8F0(void *);

typedef struct S38 {
    u8 _pad0[0x38];
    u8 unk38;
} S38;
typedef struct GenObj {
    S38 *unk0;
    u8 _pad4[0xC7];
    u8 unkCB;
} GenObj;

/* NOTE crouton-alpha-3: deref chain S38 + byte pointer (u8) agar lebar
   ldrb/strb pas; pointer artimetic via cast (u8*) bukan GenObj* agar
   tak diskala sizeof. */
void func_0802BFA0(GenObj *arg0) {
    s32 var_r1;
    s8 *var_r1_2;
    s8 var_r0;
    S38 *p;
    u8 *b;

    func_0803260C();
    p = arg0->unk0;
    b = (u8 *)p + 0x38;
    var_r1 = 0;
    if (*b == 1) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        var_r1_2 = (s8 *)((u8 *)arg0 + 0xCB);
        if (arg0->unkCB == 0) {
            if ((s32) (func_0805E8F0((u8 *)arg0 + 0xB4) << 0x1E) < 0) {
                var_r1_2 = (s8 *)((u8 *)arg0 + 0xC8);
                var_r0 = 1;
                goto block_7;
            }
        } else {
            var_r0 = 0;
block_7:
            *var_r1_2 = var_r0;
        }
    }
}

// DECOMP-MATCHED func_0802C908 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);

typedef struct VtC908 { u8 _pad[0x14C]; void *unk14C; } VtC908;
typedef struct HC908 { VtC908 *vt; } HC908;
typedef struct PairObj { s32 *beg; s32 *end; } PairObj;
typedef struct GenObj {
    HC908 *unk0;
    u8 _pad4[0x3C];
    u8 unk40;
    u8 unk41;
    u8 unk42;
} GenObj;
void func_0802C908(GenObj *arg0) {
    register GenObj *a0 __asm__("r4");
    register u8 *pa __asm__("r3");
    register u8 *pb __asm__("r2");
    register s32 t41 __asm__("r0");
    s32 *p;
    s32 *end;
    s32 var_r0;
    PairObj *obj;
    HC908 *o;

    a0 = arg0;
    pa = (u8 *)a0 + 0x41;
    t41 = *pa;
    if (t41 != 0) {
        pb = (u8 *)a0 + 0x40;
        if ((s32) *pb < (s32) (t41 - 1)) {
            register u8 *pc __asm__("r1");
            s32 t42;
            s32 t40;
            pc = (u8 *)a0 + 0x42;
            t42 = *pc + 1;
            *pc = t42;
            if ((u8)t42 != 0x14) {
                goto rest;
            }
            *pc = 0;
            t40 = *pb + 1;
            *pb = t40;
            if ((u8)t40 != 5) {
                goto rest;
            }
            o = a0->unk0;
            obj = ((PairObj *(*)(HC908 *))(o->vt->unk14C))(o);
            p = obj->beg;
            end = obj->end;
            if (p == end) {
                goto block_8;
            }
loop_5:
            if ((func_08008CD0(*p) << 0x18) != 0) {
                p += 1;
                if (p != end) {
                    goto loop_5;
                }
                goto block_8;
            }
            var_r0 = *p;
            goto after;
block_8:
            var_r0 = *(end - 1);
after:
            func_08008B6C(var_r0, 0xB8);
        }
    }
rest:;
}

// DECOMP-MATCHED func_0802C860 (dari code_entities.s; cek manusia sebelum ke src/)
s32 GetId__C4Tool(s32);
s32 GetTool__C9ToolStack(s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s8 func_0800E550(s32, s32);
s32 func_08025B10(void *);

typedef struct VtC860 { u8 _pad[0x14C]; void *unk14C; } VtC860;
typedef struct HC860 { VtC860 *vt; } HC860;
struct GenObj__func_0802A510;
void func_0802A510(struct GenObj__func_0802A510 *);
typedef struct PairObj { s32 *beg; s32 *end; } PairObj;
typedef struct GenObj {
    HC860 *unk0;
    u8 _pad4[0x10];
    void *unk14;
    u8 _pad18[0x24];
    s32 unk38;
} GenObj;
void func_0802C860(GenObj *arg0) {
    register GenObj *a0 __asm__("r6");
    s8 sp0;
    s32 *p;
    s32 *end;
    s32 var_r0;
    s32 temp_r4;
    PairObj *obj;
    HC860 *o;
    register void *idx __asm__("r4");
    register s32 neg2 __asm__("r5");
    s32 res;

    a0 = arg0;
    {
        register u8 *b __asm__("r1");
        b = (u8 *)a0;
        b += 0x3C;
        *b = 0xA;
        b += 1;
        __asm__ volatile("" : "+r"(b));
        *b = 0x14;
    }
    func_0802A510((struct GenObj__func_0802A510 *)a0);
    o = a0->unk0;
    obj = ((PairObj *(*)(HC860 *))(o->vt->unk14C))(o);
    p = obj->beg;
    end = obj->end;
    if (p == end) goto block_8;
loop_1:
    if ((func_08008CD0(*p) << 0x18) == 0) goto found;
    p += 1;
    if (p != end) goto loop_1;
    goto block_8;
block_8:
    var_r0 = *(end - 1);
    goto after;
after:
    ;
    func_08008B6C(var_r0, 0xBC);
    temp_r4 = *(s32 *)((u8 *)a0 + 0x38);
    sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    if (GetId__C4Tool((s32)&sp0) != 0x4D) goto path_else;
    idx = a0->unk14;
    neg2 = -2;
    res = func_08025B10(a0);
    ((void (*)(void *, s32, s32))(*(void **)((u8 *)idx + 0x64)))(a0, neg2, res);
    return;
found:
    var_r0 = *p;
    goto after;
path_else:
    idx = a0->unk14;
    res = func_08025B10(a0);
    ((void (*)(void *, s32, s32))(*(void **)((u8 *)idx + 0x64)))(a0, 0, res);
}

// DECOMP-MATCHED func_0802D844 (dari code_entities.s; cek manusia sebelum ke src/)
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
typedef struct GenObj6 GenObj6;
s32 func_080323C8(GenObj6 *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad8[26];
    u8 unk20;
    u8 _pad18[27];
    u8 unk3C;
    u8 _pad40[134];
    u8 unkC3;
} GenObj;
void func_0802D844(GenObj *arg0, GenObj *arg1) {
    u16 var_r5;

    var_r5 = 0;
    if (arg1 != 0) {
        var_r5 = arg1->unk4;
    }
    if ((arg0->unkC3 != 0) || (0x3F3 & var_r5)) {
        func_080323C8((GenObj6 *)arg0);
        arg0->unk3C = 0x18;
        if (0x20 & var_r5) {
            if (arg0->unk20 != 2) {
                SetAnimFacing__12AActorEntityUi(arg0, 2);
            }
        } else if (0x10 & var_r5) {
            if (arg0->unk20 != 3) {
                SetAnimFacing__12AActorEntityUi(arg0, 3);
            }
        } else if (0x40 & var_r5) {
            if (arg0->unk20 != 1) {
                SetAnimFacing__12AActorEntityUi(arg0, 1);
            }
        } else if ((var_r5 & 0x80) && (arg0->unk20 != 0)) {
            SetAnimFacing__12AActorEntityUi(arg0, 0);
        }
    }
}

// DECOMP-MATCHED func_0802D8E8 (dari code_entities.s; cek manusia sebelum ke src/)
s32 func_08025A40(void *, s32);

typedef struct V8E8 { u8 _pad[0x140]; void *f140; } V8E8;
typedef struct H8E8 { V8E8 *vt; } H8E8;
typedef struct PS8 { s32 sp0; s32 sp4; } PS8;
typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
} GenObj;
void func_0802D8E8(GenObj *arg0, GenObj *arg1) {
    PS8 sp;
    s32 sp8v;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    register GenObj *a5 __asm__("r5");
    void *temp_r0;

    a5 = arg0;
    var_r3 = 0;
    sp8v = var_r3;
    var_r4 = 0;
    if (arg1 != 0) {
        var_r3 = *(u16 *)arg1;
        sp8v = *(u16 *)((u8 *)arg1 + 4);
        var_r4 = *(u16 *)((u8 *)arg1 + 8);
    }
    if (*(u8 *)((u8 *)a5 + 0xC3) != 0) {
        {
            register u8 *q __asm__("r1");
            q = (u8 *)a5 + 0x3C;
            *q = 0;
        }
        return;
    }
    var_r2 = ((u32)(var_r3 << 0x1E) >> 0x1F);
    var_r2 = var_r2 | ((u32)(var_r3 << 0x16) >> 0x1F);
    if (var_r2 != 0) {
        if ((((u32)(var_r4 << 0x19) >> 0x1F) | ((u32)(var_r4 << 0x1A) >> 0x1F)) != 0) {
            func_08025A40(a5, 1);
            return;
        }
        var_r2 = ((u32)(var_r4 << 0x18) >> 0x1F) | ((u32)(var_r4 << 0x1B) >> 0x1F);
        {
            register s32 tmp0 __asm__("r0");
            tmp0 = ((u32)(sp8v << 0x1E) >> 0x1F) | var_r2;
            var_r4 = ((u32)(sp8v << 0x16) >> 0x1F) | tmp0;
        }
        if (var_r4 != 0) {
            func_08025A40(a5, 0);
            return;
        }
        var_r2 = 1 & *(u8 *)&sp8v;
        if (var_r2 != 0) {
            temp_r0 = *(void **)a5;
            {
                void **vtp;
                void *fn;
                vtp = (void **)((u8 *)(((H8E8 *)temp_r0)->vt) + 0x140);
                sp.sp0 = 0x3CE;
                sp.sp4 = var_r4;
                fn = *vtp;
                ((void (*)(void *, void *, s32))(fn))(temp_r0, &sp, 0);
            }
            {
                register u8 *qq __asm__("r0");
                qq = (u8 *)a5;
                qq += 0x3C;
                *qq = (u8)var_r4;
            }
            return;
        }
        if (1 & *((u8 *)&sp8v + 1)) {
            goto block_12;
        }
    } else {
block_12:
        {
            register u8 *qq __asm__("r0");
            qq = (u8 *)a5;
            qq += 0x3C;
            *qq = (u8)var_r2;
        }
    }
}
