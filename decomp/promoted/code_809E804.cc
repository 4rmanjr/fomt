
// DECOMP-MATCHED GetMapData (dari code_809E804.s; cek manusia sebelum ke src/)
extern s32 gUnk_08105EDC;

void *GetMapData(s32 arg0) {
    s32 x = (arg0 << 2) + arg0;
    return (s8 *)&gUnk_08105EDC + (x << 3);
}

// DECOMP-MATCHED func_0809EAD0 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;
u8 func_0809EAD0(S_AD0 *arg0) {
    return arg0->v;
}

// DECOMP-MATCHED func_0809EAD8 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x25]; u8 v; } S_AD8;
u8 func_0809EAD8(S_AD8 *arg0) {
    return arg0->v;
}

// DECOMP-MATCHED func_0809EACC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_0809EACC(s32 arg0) {
    return arg0 + 0x14;
}

// DECOMP-MATCHED func_0809EAE0 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x26]; u8 v; } S_AE0;
u32 func_0809EAE0(S_AE0 *arg0) {
    u32 x = arg0->v;
    return (x << 31) >> 31;
}

// DECOMP-MATCHED func_0809E988 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_0809E988(s32 arg0, s32 arg1, s32 *arg2) {
    arg1 = (arg1 << 3) + arg0;
    __asm__ volatile ("ldm %0!, {r0, r3}\n\tstm %1!, {r0, r3}" : "+l" (arg2), "+l" (arg1) : : "r0", "r3", "memory");
}

// DECOMP-MATCHED func_0809E994 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_0809E994(s32 arg0, s32 arg1) {
    u8 buf[8];
    u32 *b = (u32 *)buf;
    arg1 <<= 3;
    /* buf[0] &= ~0x10 (hand-asm: ldrb/movs/negs/ands/strb) */
    __asm__ volatile (
        "mov r4, sp\n\tldrb r3, [r4]\n\tmov r2, #0x10\n\tneg r2, r2\n\tand r2, r3\n\tstrb r2, [r4]"
        : : : "r2", "r3", "r4", "memory");
    arg1 += arg0;
    __asm__ volatile ("ldm %0!, {r2, r3}\n\tstm %1!, {r2, r3}" : "+l" (b), "+l" (arg1) : : "r2", "r3", "memory");
}

// DECOMP-MATCHED func_0809ECD8 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x14]; u8 v; } S_CD8;
u32 func_0809ECD8(S_CD8 *arg0) { return (u32)(arg0->v << 26) >> 26; }

// DECOMP-MATCHED func_080A039C (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[3]; u8 v; } S_39C;
u32 func_080A039C(S_39C *arg0) { u32 x = arg0->v; return (x << 27) >> 29; }

// DECOMP-MATCHED func_080A1478 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080A1478(s32 *arg0, s32 *arg1) { arg0[0x2C / 4] = arg1[0]; }

// DECOMP-MATCHED func_080A601C (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x58]; u8 v; } S_601C;
void func_080A601C(S_601C *arg0) { arg0->v = 0x14; }

// DECOMP-MATCHED func_0809EB68 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x14]; u8 v; } S_B68;
u32 func_0809EB68(S_B68 *arg0) { return (u32)(arg0->v << 28) >> 28; }

// DECOMP-MATCHED func_0809EAEC (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x26]; u8 v; } S_AEC;
void func_0809EAEC(S_AEC *arg0) { u32 x = arg0->v; arg0->v = x | 1; }

// DECOMP-MATCHED func_080A0B10 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A0B10(s32 arg0) { return arg0 + 0x60; }

// DECOMP-MATCHED func_080A0B14 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A0B14(s32 arg0) { return arg0 + 0x68; }

// DECOMP-MATCHED func_080A1480 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A1480(s32 arg0) { return arg0 + 0x2C; }

// DECOMP-MATCHED func_080A1A48 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080A1A48(void) {}

// DECOMP-MATCHED func_080ADD74 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080ADD74(s32 *arg0, s32 arg1) { ((u16 *)arg0)[2] = (u16)arg1; }

// DECOMP-MATCHED func_080BA1F4 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080BA1F4(void) {}

// DECOMP-MATCHED func_080BA1F8 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080BA1F8(void) {}

// DECOMP-MATCHED func_080BA1FC (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080BA1FC(void) {}

// DECOMP-MATCHED func_080BA200 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080BA200(void) {}

// DECOMP-MATCHED func_080CAD10 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080CAD10(s32 *arg0, s32 arg1) { arg0[0] = arg1; }

// DECOMP-MATCHED func_080CAD14 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CAD14(s32 *arg0) { return arg0[0]; }

// DECOMP-MATCHED func_080CF050 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CF050(s32 *arg0) { return arg0[0x7C / 4]; }

// DECOMP-MATCHED func_080D02EC (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080D02EC(void) {}

// DECOMP-MATCHED func_080CADA0 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080CADA0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) { arg0[1] = arg1; arg0[2] = arg2; arg0[0] = arg3; }

// DECOMP-MATCHED func_080CB2FC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CB2FC(s32 arg0) { return arg0 + 0x280; }

// DECOMP-MATCHED func_080CC144 (dari code_809E804.s; cek manusia sebelum ke src/)
extern s32 gUnk_08117838;
void func_080CC144(s32 *arg0) { arg0[0] = gUnk_08117838; }

// DECOMP-MATCHED func_080CC720 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CC720(s32 arg0) { return arg0 + 0x280; }

// DECOMP-MATCHED func_080CF054 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CF054(s32 *arg0) { return *(s32 *)((u8 *)arg0 + 0x80); }

// DECOMP-MATCHED func_080D0EBC (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080D0EBC(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    __asm__ volatile ("stm %0!, {r0, r1, r2}" : "+l" (arg3) : : "memory");
}

// DECOMP-MATCHED func_080AAF10 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080AAF10(s32 **arg0) { volatile s32 v = arg0[0xC / 4][0x8 / 4]; }

// DECOMP-MATCHED func_080AAF1C (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080AAF1C(s32 **arg0) { volatile s32 v = arg0[0xC / 4]; }

// DECOMP-MATCHED func_080B3C84 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080B3C84(s32 *arg0) { return *(s32 *)(arg0[1] + 0x910); }

// DECOMP-MATCHED func_080B44E0 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;
u8 func_080B44E0(S_44E0 *arg0) { return arg0->v; }

// DECOMP-MATCHED func_080AE4D8 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;
u8 func_080AE4D8(S_4D8 *arg0) { return arg0->v; }

// DECOMP-MATCHED func_080AD938 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080CFFC0(s32);
void func_080AD938(s32 *arg0) { func_080CFFC0(arg0[1]); }

// DECOMP-MATCHED func_080AD944 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080A63B8(s32);
void func_080AD944(s32 *arg0) { func_080A63B8(arg0[1]); }

// DECOMP-MATCHED func_080A0504 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A0490();                                /* extern */

u32 func_080A0504(void) {
    s32 temp_r0;

    temp_r0 = func_080A0490();
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}

// DECOMP-MATCHED func_080A1C94 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 func_080A1EA8();                                /* extern */

void func_080A1C94(s32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u8 *temp_r2;

    temp_r0 = func_080A1EA8();
    temp_r0_2 = temp_r0 >> 3;
    if (temp_r0_2 <= 6U) {
        temp_r2 = arg0 + temp_r0_2;
        *temp_r2 &= ~(1 << (7 & temp_r0));
    }
}

// DECOMP-MATCHED func_080ADC84 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __builtin_delete(s32 *);                            /* extern */

void func_080ADC84(s32 *arg0, s32 arg1) {
    __builtin_delete(*arg0);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

// DECOMP-MATCHED func_080AE6C0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08008724();                                  /* extern */

void func_080AE6C0(void) {
    func_08008724();
}

// DECOMP-MATCHED func_080B45E4 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08008724();                                  /* extern */

void func_080B45E4(void) {
    func_08008724();
}

// DECOMP-MATCHED func_080BCEBC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08008724();                                  /* extern */

void func_080BCEBC(void) {
    func_08008724();
}

// DECOMP-MATCHED func_080C0B70 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080088CC();                                /* extern */
s32 func_080C0B94(s32);                               /* extern */
s32 func_080C0CA4(s32);                               /* extern */

void func_080C0B70(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_080088CC();
    func_080C0CA4(arg0);
    if (!(8 & temp_r4)) {
        func_080C0B94(arg0);
    }
}

// DECOMP-MATCHED func_080C14BC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08008724();                                  /* extern */

void func_080C14BC(void) {
    func_08008724();
}

// DECOMP-MATCHED func_080CABA0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08050D8C(s32, s32);                          /* extern */
s32 func_08050EBC(s32, s32);                          /* extern */

void func_080CABA0(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x348;
    func_08050EBC(temp_r4, 4);
    func_08050EBC(temp_r4, 8);
    func_08050EBC(temp_r4, 1);
    func_08050EBC(temp_r4, 2);
    func_08050EBC(temp_r4, 0x10);
    func_08050EBC(temp_r4, 0x20);
    func_08050D8C(temp_r4, arg1);
}

// DECOMP-MATCHED func_080CB2E8 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CB2E8(s32 arg0, s32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x218;
}

// DECOMP-MATCHED func_080CC150 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CAF6C();                                  /* extern */

void func_080CC150(void) {
    func_080CAF6C();
}

// DECOMP-MATCHED func_080CC70C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CC70C(s32 arg0, s32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x218;
}

// DECOMP-MATCHED func_080CE294 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08050E98(s32, s32);                          /* extern */
s32 func_080CD620();                                  /* extern */

void func_080CE294(s32 arg0) {
    s32 temp_r4;

    func_080CD620();
    temp_r4 = arg0 + 0x80;
    func_08050E98(temp_r4, 1);
    func_08050E98(temp_r4, 2);
    func_08050E98(temp_r4, 4);
    func_08050E98(temp_r4, 8);
}

// DECOMP-MATCHED func_080D0340 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080D0AE0();                                  /* extern */
extern s32 *gUnk_03000420;

void func_080D0340(void) {
    if (*gUnk_03000420 != 0) {
        *gUnk_03000420 = 0;
        func_080D0AE0();
    }
}

// DECOMP-MATCHED func_080D06A8 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080D0A94(s32);                               /* extern */

void func_080D06A8(void) {
    func_080D0A94(0xB);
}

// DECOMP-MATCHED func_0809EB20 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 memcpy(s32, s32, u32);                            /* extern */
u32 strlen(s32);                                    /* extern */

void func_0809EB20(s32 arg0, s32 arg1) {
    s32 temp_r6;
    u32 var_r4;

    temp_r6 = arg0 + 0x14;
    var_r4 = strlen(arg1);
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy(temp_r6, arg1, var_r4);
    *((u8 *)temp_r6 + var_r4) = 0;
}

// DECOMP-MATCHED func_080A1ED4 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 func_080A1EA8();                                /* extern */

s32 func_080A1ED4(s32 arg0) {
    u32 temp_r0;

    temp_r0 = func_080A1EA8();
    return ((s32) *((u8 *)arg0 + (temp_r0 >> 3)) >> (7 & temp_r0)) & 1;
}

// DECOMP-MATCHED func_080A3744 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080A220C(s32, s32);                        /* extern */
extern s32 vtable_unk_080E8278;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void *func_080A3744(GenObj *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E8278;
    arg0->unk4 = func_080A220C(__builtin_new(0x228), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}

// DECOMP-MATCHED func_080A5A9C (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[140];
    s32 unk8C;
} GenObj;
s32 func_080A5A9C(GenObj *arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0->unk8C == 0) {
        var_r1 = 1;
    }
    return var_r1;
}

// DECOMP-MATCHED func_080A5EA0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 *GetMapData(s32);                               /* extern */
s32 Unpack(s32, s32);                                 /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080A5EA0(GenObj *arg0) {
    Unpack(*GetMapData(arg0->unk4), 0x06000000);
}

// DECOMP-MATCHED func_080AD950 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A635C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080AD950(GenObj *arg0) {
    func_080A635C(arg0->unk4);
    return 0;
}

// DECOMP-MATCHED func_080AD960 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A6300(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080AD960(GenObj *arg0) {
    func_080A6300(arg0->unk4);
    return 0;
}

// DECOMP-MATCHED func_080AD97C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A607C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD97C(GenObj *arg0) {
    func_080A607C(arg0->unk4);
}

// DECOMP-MATCHED func_080AD988 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A62BC(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD988(GenObj *arg0) {
    func_080A62BC(arg0->unk4);
}

// DECOMP-MATCHED func_080AD994 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A6278(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD994(GenObj *arg0) {
    func_080A6278(arg0->unk4);
}

// DECOMP-MATCHED func_080AD9A0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A6234(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD9A0(GenObj *arg0) {
    func_080A6234(arg0->unk4);
}

// DECOMP-MATCHED func_080AD9AC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A61F0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD9AC(GenObj *arg0) {
    func_080A61F0(arg0->unk4);
}

// DECOMP-MATCHED func_080AD9B8 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A6194(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD9B8(GenObj *arg0) {
    func_080A6194(arg0->unk4);
}

// DECOMP-MATCHED func_080ADB9C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A59BC(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080ADB9C(GenObj *arg0) {
    func_080A59BC(arg0->unk4);
}

// DECOMP-MATCHED func_080ADBA8 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A5960(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080ADBA8(GenObj *arg0) {
    func_080A5960(arg0->unk4);
}

// DECOMP-MATCHED func_080B3BE4 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080ADF6C(s32, s32);                        /* extern */
extern s32 vtable_unk_080E850C;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080B3BE4(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E850C;
    arg0->unk4 = func_080ADF6C(__builtin_new(0x93C), arg1);
    return arg0;
}

// DECOMP-MATCHED func_080B3C0C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E850C;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080B3C0C(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E850C;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_080BA574 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_08050D8C(s32, s32 *);                          /* extern */
extern s32 gUnk_08107B28;
extern s32 gUnk_08107B5C;
extern s32 gUnk_08107C18;
extern s32 gUnk_08107CB0;
extern s32 gUnk_08107CE0;

typedef struct GenObj {
    u8 _pad0[1816];
    s32 unk718;
} GenObj;
void func_080BA574(GenObj *arg0, s32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 1;
    switch (temp_r0) {
    case 0:
        func_08050D8C(arg0->unk718, &gUnk_08107B28);
        return;
    case 1:
        func_08050D8C(arg0->unk718, &gUnk_08107B5C);
        return;
    case 2:
        func_08050D8C(arg0->unk718, &gUnk_08107C18);
        return;
    case 3:
        func_08050D8C(arg0->unk718, &gUnk_08107CB0);
        return;
    case 4:
        func_08050D8C(arg0->unk718, &gUnk_08107CE0);
        /* fallthrough */
    default:
        return;
    }
}

// DECOMP-MATCHED func_080BC898 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080B3CC8(s32, s32);                        /* extern */
extern s32 vtable_unk_080E8528;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080BC898(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E8528;
    arg0->unk4 = func_080B3CC8(__builtin_new(0xB78), arg1);
    return arg0;
}

// DECOMP-MATCHED func_080BC8C0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E8528;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080BC8C0(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E8528;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_080BCCD4 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[1552];
    s32 unk610;
} GenObj;
u8 func_080BCCD4(GenObj *arg0) {
    return arg0->unk610;
}

// DECOMP-MATCHED func_080C0D1C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080BC938(s32, s32);                        /* extern */
extern s32 vtable_unk_080E8544;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080C0D1C(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E8544;
    arg0->unk4 = func_080BC938(__builtin_new(0x620), arg1);
    return arg0;
}

// DECOMP-MATCHED func_080C0D44 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E8544;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080C0D44(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E8544;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_080C7EA8 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080C0DCC(s32, s32);                        /* extern */
extern s32 vtable_unk_080E8560;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080C7EA8(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E8560;
    arg0->unk4 = func_080C0DCC(__builtin_new(0x98C), arg1);
    return arg0;
}

// DECOMP-MATCHED func_080C7ED0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E8560;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080C7ED0(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E8560;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_080CAC70 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080CAC70(GenObj *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

// DECOMP-MATCHED func_080CADA8 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080CADA8(GenObj *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

// DECOMP-MATCHED func_080CE2C4 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CD8A0(void *);                            /* extern */
s32 func_080CDDD4();                                  /* extern */
s32 func_080CE790();                                  /* extern */
s32 func_080CECE8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[140];
    s32 unk8C;
    s32 unk90;
    s32 unk94;
} GenObj;
void func_080CE2C4(GenObj *arg0) {
    if (arg0->unk8C != 0) {
        func_080CDDD4();
    }
    if (arg0->unk90 != 0) {
        func_080CECE8();
    }
    if (arg0->unk94 != 0) {
        func_080CE790();
    }
    func_080CD8A0(arg0);
}

// DECOMP-MATCHED func_080D01E0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern void *gUnk_03000418;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void func_080D01E0(GenObj *arg0, s32 arg1) {
    gUnk_03000418 = arg0;
    arg0->unk0 = (s32) (arg1 - 0x10);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

// DECOMP-MATCHED func_080AD970 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A6024(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD970(GenObj *arg0) {
    func_080A6024(arg0->unk4);
}

// DECOMP-MATCHED func_080AD9C4 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A6138(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080AD9C4(GenObj *arg0) {
    func_080A6138(arg0->unk4);
}

// DECOMP-MATCHED func_080A0518 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 GetFriendship__C3Npc();                         /* extern */
s32 func_080A0030(s32, u32);                        /* extern */

s32 func_080A0518(s32 arg0) {
    s32 var_r5;
    u32 temp_r0;
    u32 var_r4;

    var_r5 = 1;
    var_r4 = 1;
    do {
        temp_r0 = var_r4 - 0x17;
        switch (temp_r0) {
        case 0:
        case 3:
        case 7:
        case 9:
        case 12:
            break;
        default:
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 8:
        case 10:
        case 11:
            if ((func_080A0030(arg0, var_r4) != 0) && (GetFriendship__C3Npc() <= 0xF9U)) {
                var_r5 = 0;
            }
            break;
        }
        var_r4 += 1;
    } while (var_r4 <= 0x2AU);
    return var_r5;
}

// DECOMP-MATCHED sub_080D139C (dari code_809E804.s; cek manusia sebelum ke src/)
__asm__ (
    ".syntax unified\nfunc_080D11A4:\npush {r5, r6, lr}\nmovs r5, #0x20\nsubs r5, r5, r4\nadds r6, r2, #0\nlsrs r6, r5\nsubs r3, r3, r4\nbmi sub_080D11B8\nlsls r2, r4\nadds r4, r6, #0\npop {r5, r6, pc}\nsub_080D11B8:\nldm r0!, {r2}\nrsbs r5, r3, #0\nadds r4, r2, #0\nlsls r2, r5\nadds r3, #0x20\nlsrs r4, r3\norrs r4, r6\npop {r5, r6, pc}\n.space 468\n.syntax divided\n");
__attribute__((naked)) void sub_080D139C(void) {
  __asm__ volatile (
    ".syntax unified\npush {lr}\nmovs r5, #3\nbl func_080D14EC\nloop139c_top:\nsubs r3, #1\nbmi reload1\nbittest139c:\nlsls r2, r2, #1\nbhs have_bit1\nmov lr, pc\nbx sb\nadds r5, r4, #0\nmov lr, pc\nbx sb\nlsls r4, r4, #8\norrs r4, r5\nadds r1, #2\nstrh r4, [r1]\nb emitcheck139c\nhave_bit1:\nmovs r4, #2\nbl func_080D11A4\ncmp r4, #3\nbeq lenloop1\nlsls r5, r4, #2\nadds r5, r5, r7\nldrb r4, [r5, #6]\nbl func_080D11A4\nldrh r5, [r5, #4]\nadds r5, r5, r4\nlsls r5, r5, #1\nmovs r4, #3\nbl func_080D11A4\nadds r6, r4, #2\nb emit139c\nlenloop1:\nmovs r6, #0\nlenloop1a:\nmovs r4, #3\nbl func_080D11A4\nlsls r6, r6, #3\nadds r6, r6, r4\nlsrs r6, r6, #1\nbhs lenloop1a\nsubs r3, #1\nbmi reload2\nsuffixcheck2:\nlsls r2, r2, #1\nblo suffix1\nmovs r4, #2\nbl func_080D11A4\nlsls r5, r4, #2\nadds r5, r5, r7\nldrb r4, [r5, #6]\nbl func_080D11A4\nldrh r5, [r5, #4]\nadds r5, r5, r4\nlsls r5, r5, #1\nmovs r4, #3\nbl func_080D11A4\nlsls r6, r6, #3\nadds r6, r6, r4\nadds r6, #2\nb emit139c\nsuffix1:\nadds r6, #1\nsuffix1loop:\nmov lr, pc\nbx sb\nadds r5, r4, #0\nmov lr, pc\nbx sb\nlsls r4, r4, #8\nadds r4, r4, r5\nadds r1, #2\nstrh r4, [r1]\nsubs r6, #1\nbne suffix1loop\nb emitcheck139c\nemit139c:\nsubs r5, r1, r5\nemitcpy139c:\nadds r5, #2\nldrh r4, [r5]\nadds r1, #2\nstrh r4, [r1]\nsubs r6, #1\nbne emitcpy139c\nemitcheck139c:\ncmp r1, r8\nblo loop139c_top\npop {r4}\nbx r4\nreload1:\nldm r0!, {r2}\nadds r3, #0x20\nb bittest139c\nreload2:\nldm r0!, {r2}\nadds r3, #0x20\n.byte 0xCD, 0xE7\ntail145c:\nmov lr, ip\npush {r2, lr}\nmov r2, sl\ncmp r5, #1\nbeq sub_080D14C6\nlsls r4, r5, #0x1f\nbne sub_080D1498\nsubs r5, r1, r5\nlsls r4, r5, #0x1f\nbeq tail3\nadds r5, #1\nldrh r4, [r5]\nlsrs r4, r4, #8\nlsls r4, r4, #8\norrs r4, r2\nadds r1, #1\nstrh r4, [r1]\nsubs r6, #1\nbeq tail4\ntail3:\nadds r5, #2\nldrh r4, [r5]\nadds r1, #2\nstrh r4, [r1]\nsubs r6, #2\nbgt tail3\nlsls r4, r4, #0x18\nlsrs r2, r4, #0x18\nadds r1, r1, r6\ntail4:\nmov sl, r2\npop {r2, pc}\n.syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","lr","memory");
}

// DECOMP-MATCHED func_080D116E (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((naked)) void func_080D116E(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "push {r5, r6, lr}\n"
    "bl func_080D1186\n"
    "lsls r6, r4, #4\n"
    "bl func_080D1186\n"
    "orrs r4, r6\n"
    "pop {r5, r6, pc}\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","lr","memory");
}

// DECOMP-MATCHED func_080D117E (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((naked)) void func_080D117E(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "push {r5, lr}\n"
    "bl func_080D1186\n"
    "pop {r5, pc}\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","lr","memory");
}

// DECOMP-MATCHED func_080D1186 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((naked)) void func_080D1186(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r4, #0x20\n"
    "loop1186:\n"
    "subs r3, #1\n"
    "bmi sub_080D119E\n"
    "lsrs r5, r2, #0x1f\n"
    "lsls r2, r2, #1\n"
    "lsls r5, r5, #1\n"
    "adds r5, r5, r4\n"
    "ldrsh r4, [r7, r5]\n"
    "tst r4, r4\n"
    "bpl loop1186\n"
    "mvns r4, r4\n"
    "bx lr\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","lr","memory");
}

// DECOMP-MATCHED func_080D116A (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((naked)) void func_080D116A(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r4, #8\n"
    "b func_080D11A4\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","lr","memory");
}
__asm__(
  ".syntax unified\n"
  ".space 54\n"
  "func_080D11A4:\n"
  "push {r5, r6, lr}\n"
  "movs r5, #0x20\n"
  "subs r5, r5, r4\n"
  "adds r6, r2, #0\n"
  "lsrs r6, r5\n"
  "subs r3, r3, r4\n"
  "bmi sub_080D11B8\n"
  "lsls r2, r4\n"
  "adds r4, r6, #0\n"
  "pop {r5, r6, pc}\n"
  "sub_080D11B8:\n"
  "ldm r0!, {r2}\n"
  "rsbs r5, r3, #0\n"
  "adds r4, r2, #0\n"
  "lsls r2, r5\n"
  "adds r3, #0x20\n"
  "lsrs r4, r3\n"
  "orrs r4, r6\n"
  "pop {r5, r6, pc}\n"
  ".syntax divided\n"
);

// DECOMP-MATCHED func_080D14EC (dari code_809E804.s; cek manusia sebelum ke src/)
__asm__ (
    ".syntax unified\n.syntax unified\nfunc_080D11A4:\npush {r5, r6, lr}\nmovs r5, #0x20\nsubs r5, r5, r4\nadds r6, r2, #0\nlsrs r6, r5\nsubs r3, r3, r4\nbmi sub_080D11B8\nlsls r2, r4\nadds r4, r6, #0\npop {r5, r6, pc}\nsub_080D11B8:\nldm r0!, {r2}\nrsbs r5, r3, #0\nadds r4, r2, #0\nlsls r2, r5\nadds r3, #0x20\nlsrs r4, r3\norrs r4, r6\npop {r5, r6, pc}\n.space 804\n.syntax divided\n.syntax divided");
__attribute__((naked)) void func_080D14EC(void) {
  __asm__ volatile (
    ".syntax unified\npush {r1, r7, lr}\nmovs r6, #1\nloop14ec:\nmovs r4, #4\nbl func_080D11A4\nadds r4, #1\nstrb r4, [r7, #6]\nstrh r6, [r7, #4]\nadds r7, #4\nmovs r1, #1\nlsls r1, r4\nadds r6, r6, r1\nsubs r5, #1\nbne loop14ec\npop {r1, r7, pc}\n.syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","r7","lr","memory");
}

// DECOMP-MATCHED func_0809EE8C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 __3NpcRC13ActorLocation();                        /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    u16 unk14;
    u8 unk16;
} GenObj;
void *func_0809EE8C(GenObj *arg0) {
    __3NpcRC13ActorLocation();
    arg0->unk14 = 0;
    arg0->unk16 = 0;
    return arg0;
}

/* ATTEMPT-NOTE opencode: unk14 u16 (strh), unk16 u8 (strb). */

// DECOMP-MATCHED func_080AA89C (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106DAC;

typedef struct GenObj {
    u8 _pad0[41];
    u8 unk29;
} GenObj;
void func_080AA89C(GenObj *arg0) {
    func_080A5BD8(arg0, &gUnk_08106DAC, 0x21, 0x14);
    arg0->unk29 = 1;
}

/* ATTEMPT-NOTE opencode: unk29 u8 (adds+strb). */

// DECOMP-MATCHED func_080AA8BC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106DAC;

typedef struct GenObj {
    u8 _pad0[41];
    u8 unk29;
} GenObj;
void func_080AA8BC(GenObj *arg0) {
    func_080A5BD8(arg0, &gUnk_08106DAC, 0x21, 0x17);
    arg0->unk29 = 1;
}

/* ATTEMPT-NOTE opencode: unk29 u8. */

// DECOMP-MATCHED func_080ABBA0 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080AC388(void *, void *, void *, s32, s32, s32); /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[32];
    s32 unk24;
} GenObj;
void func_080ABBA0(GenObj *arg0) {
    GenObj *t = arg0;
    s32 a = t->unk24;

    t->unk0 = a;
    func_080AC388((u8 *)t + 0x10, (u8 *)t + 0x1C, t, 0, 0, 0);
}

/* ATTEMPT-NOTE opencode: 6-arg (r2=t live dari copy awal, r3=0, stack 0,0). */

// DECOMP-MATCHED func_080ADD44 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 unk14;
} GenObj;
void func_080ADD44(GenObj *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0x80 << 1;
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
}

/* ATTEMPT-NOTE opencode: campuran s32/u16/u16/s32/s32/s32/u8; 0x100 via shift. */

// DECOMP-MATCHED func_080CE184 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080CE184(s32 dummy, s32 arg1, s32 arg2) {
    s32 var_r0;

    if (arg1 <= 8) {
        var_r0 = (arg2 * 8) - 1;
    } else {
        var_r0 = (arg2 * 8) - 0xA;
    }
    return arg1 + var_r0;
}

/* ATTEMPT-NOTE opencode: s32 dummy agar arg1=r1, arg2=r2 (lsls r0,r2). */

// DECOMP-MATCHED func_080A0384 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
void *func_080A0384(GenObj *arg0) {
    GenObj *t = arg0;
    void *var_r2;
    s32 sh = t->unk3 << 0x1E;

    var_r2 = 0;
    if (sh >= 0) {
    } else {
        var_r2 = (u8 *)t + 4;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: copy arg0 ke t + sh-var agar movs r2 di posisi 4 (setelah lsls); unk3 u8. */

// DECOMP-MATCHED func_080A0A04 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
void *func_080A0A04(GenObj *arg0) {
    GenObj *t = arg0;
    void *var_r2;
    s32 sh = t->unk3 << 0x1E;

    var_r2 = 0;
    if (sh >= 0) {
    } else {
        var_r2 = (u8 *)t + 4;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: sama A0384. */

// DECOMP-MATCHED func_080AAF28 (dari code_809E804.s; cek manusia sebelum ke src/)
extern s32 gUnk_08107458;

u16 func_080AAF28(s32 arg0, s32 arg1) {
    s32 t1 = arg1 << 0x18;
    u8 *base = (u8 *)&gUnk_08107458;
    s32 t = ((u32) t1 >> 0x17) + (arg0 * 4);

    return *(u16 *)(base + t);
}

/* ATTEMPT-NOTE opencode: t1/base/t terpisah agar ldr-pc di posisi 2 (dst r2); tanpa split ldr di posisi 5. */

// DECOMP-MATCHED func_080A1EA8 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 func_080A1EA8(s32 dummy, u32 arg1, s32 arg2) {
    u32 var_r0;

    var_r0 = arg1;
    if (var_r0 <= 0x5FU) {
        if (arg2 == 1) {
            goto c1;
        }
        if (arg2 <= 1) {
            goto end;
        }
        if (arg2 == 2) {
            goto c2;
        }
        if (arg2 == 3) {
            goto c3;
        }
        goto end;
    c1:
        var_r0 -= 0x1A;
        goto end;
    c2:
        var_r0 -= 0x3A;
        goto end;
    c3:
        var_r0 -= 0x5E;
        goto end;
    end:;
    } else {
        var_r0 -= 0x3C;
    }
    return var_r0;
}

/* ATTEMPT-NOTE opencode: goto-chain agar compare-di-depan + body-di-belakang (switch/if-else digabung compiler). */

// DECOMP-MATCHED func_0809EED0 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[22];
    u8 unk16;
} GenObj;
s32 func_0809EED0(GenObj *arg0) {
    u8 temp_r0;

    u8 t = arg0->unk16;

    if (t != 0xA) {
        arg0->unk16 = t + 1;
        return 1;
    }
    return 0;
}

/* ATTEMPT-NOTE opencode: unk16 u8; inc langsung di r0? */

/* ATTEMPT-NOTE opencode: unk16 u8; cabang negatif dulu (bne + return0-depan). */

// DECOMP-MATCHED func_080CD558 (dari code_809E804.s; cek manusia sebelum ke src/)
extern s32 gUnk_08117838;

void func_080CD558(s32 *arg0) {
    s32 t;
    u8 b;

    t = gUnk_08117838;
    b = t + 0x78;
    *arg0 = (t & 0xFFFFFF00) | b;
}

/* ATTEMPT-NOTE opencode: gUnk sekali-load ke var; zero-extend via u8. */

// DECOMP-MATCHED func_0809EB8C (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
} GenObj;
u32 func_0809EB8C(GenObj *arg0) {
    u32 var_r2;
    u8 temp_r1;

    var_r2 = 0;
    temp_r1 = arg0->unk14;
    if ((temp_r1 << 0x1C) == 0) {
        goto end;
    }
    if ((0x70 & temp_r1) == 0) {
        goto end;
    }
    var_r2 = temp_r1 >> 7;
end:
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk14 u8; goto-chain (bukan &&); lsrs dst r2. */

// DECOMP-MATCHED func_080A0AD8 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A0AD8(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    default:
        return arg0 + 0x30;
    case 1:
        return arg0 + 0x38;
    case 2:
        return arg0 + 0x40;
    }
}

/* ATTEMPT-NOTE hermes2: switch dgn case 0 eksplisit gabung default. */

// DECOMP-MATCHED func_080A0AF4 (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080A0AF4(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    default:
        return arg0 + 0x48;
    case 1:
        return arg0 + 0x50;
    case 2:
        return arg0 + 0x58;
    }
}

/* ATTEMPT-NOTE hermes2: switch dgn case 0 eksplisit gabung default (sama A0AD8). */

// DECOMP-MATCHED func_080A041C (dari code_809E804.s; cek manusia sebelum ke src/)
u32 GetPlayerEventCount__C12Bachelorette(s32);      /* extern */

s32 func_080A041C(s32 arg0) {
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x98) > 4U) {
        return 3;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x154) > 4U) {
        return 0xC;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x1E4) > 4U) {
        return 0x13;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x210) > 4U) {
        return 0x15;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x264) > 4U) {
        return 0x19;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x2E4) > 4U) {
        return 0x1F;
    }
    return 0;
}

/* ATTEMPT-NOTE hermes3: ekor dibalik (bhi, bukan bls): if (>) return 0x1F; return 0. */

// DECOMP-MATCHED func_080A0490 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 GetPlayerEventCount__C12Bachelorette(s32);      /* extern */

s32 func_080A0490(s32 arg0) {
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x98) > 5U) {
        return 3;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x154) > 5U) {
        return 0xC;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x1E4) > 5U) {
        return 0x13;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x210) > 5U) {
        return 0x15;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x264) > 5U) {
        return 0x19;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x2E4) > 5U) {
        return 0x1F;
    }
    return 0;
}

/* ATTEMPT-NOTE hermes3: ekor dibalik (bhi, bukan bls): if (>) return 0x1F; return 0. */
