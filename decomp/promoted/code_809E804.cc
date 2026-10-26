
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
