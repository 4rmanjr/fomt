
// DECOMP-MATCHED func_0800770C (dari hardware.s; cek manusia sebelum ke src/)
void func_0800770C(s32 *arg0) {
    *arg0 = 0;
}

// DECOMP-MATCHED func_0800835C (dari hardware.s; cek manusia sebelum ke src/)
void func_0800835C(s32 *arg0) {
    *arg0 = 0;
}

// DECOMP-MATCHED func_080088B8 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08009268(s32);                               /* extern */

void func_080088B8(s32 *arg0) {
    func_08009268(*arg0);
}

// DECOMP-MATCHED func_080088C4 (dari hardware.s; cek manusia sebelum ke src/)
u16 func_080088C4(u16 **arg0) {
    return **arg0;
}

// DECOMP-MATCHED func_08008910 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008910(s32 *arg0) {
    return *arg0 + 0x24;
}

// DECOMP-MATCHED func_08008918 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008918(s32 *arg0) {
    return *arg0 + 0x34;
}

// DECOMP-MATCHED func_08008940 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008940(s32 *arg0) {
    return *arg0 + 0x494;
}

// DECOMP-MATCHED func_08008AF0 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08000568(s32);                               /* extern */

void func_08008AF0(void) {
    func_08000568(1);
}

// DECOMP-MATCHED func_08008AFC (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSoundInit();                                   /* extern */
s32 m4aSoundVSyncOff();                               /* extern */

void func_08008AFC(void) {
    m4aSoundInit();
    m4aSoundVSyncOff();
}

// DECOMP-MATCHED func_08008B0C (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSoundVSync();                                  /* extern */

s32 func_08008B0C(void) {
    m4aSoundVSync();
    return 1;
}

// DECOMP-MATCHED func_08008B18 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSoundMain();                                   /* extern */

s32 func_08008B18(void) {
    m4aSoundMain();
    return 1;
}

// DECOMP-MATCHED func_08008B54 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008B24(u8);                              /* extern */

s32 *func_08008B54(s32 *arg0, u8 arg1) {
    *arg0 = func_08008B24(arg1);
    return arg0;
}

// DECOMP-MATCHED func_08008C28 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayTempoControl(s32, u16);                   /* extern */

void func_08008C28(s32 *arg0, u16 arg1) {
    m4aMPlayTempoControl(*arg0, arg1);
}

// DECOMP-MATCHED func_08008C38 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayVolumeControl(s32, u16, u16);             /* extern */

void func_08008C38(s32 *arg0, u16 arg1, u16 arg2) {
    m4aMPlayVolumeControl(*arg0, arg2, arg1);
}

// DECOMP-MATCHED func_08008C54 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayPitchControl(s32, u16, s16);              /* extern */

void func_08008C54(s32 *arg0, s16 arg1, u16 arg2) {
    m4aMPlayPitchControl(*arg0, arg2, arg1);
}

// DECOMP-MATCHED func_08008C70 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayPanpotControl(s32, u16, s8);              /* extern */

void func_08008C70(s32 *arg0, s8 arg1, u16 arg2) {
    m4aMPlayPanpotControl(*arg0, arg2, arg1);
}

// DECOMP-MATCHED func_08008C8C (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayModDepthSet(s32, u16, u8);                /* extern */

void func_08008C8C(s32 *arg0, u8 arg1, u16 arg2) {
    m4aMPlayModDepthSet(*arg0, arg2, arg1);
}

// DECOMP-MATCHED func_08008CA8 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayLFOSpeedSet(s32, u16, u8);                /* extern */

void func_08008CA8(s32 *arg0, u8 arg1, u16 arg2) {
    m4aMPlayLFOSpeedSet(*arg0, arg2, arg1);
}

// DECOMP-MATCHED func_08008CC4 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayImmInit(s32);                             /* extern */

void func_08008CC4(s32 *arg0) {
    m4aMPlayImmInit(*arg0);
}

// DECOMP-MATCHED func_08008D84 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSoundVSyncOn();                                /* extern */

void func_08008D84(void) {
    m4aSoundVSyncOn();
}

// DECOMP-MATCHED func_08008D90 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSoundVSyncOff();                               /* extern */

void func_08008D90(void) {
    m4aSoundVSyncOff();
}

// DECOMP-MATCHED func_08008D9C (dari hardware.s; cek manusia sebelum ke src/)
u32 func_08008D9C(void) {
    return (u32) *(u32 *)0x040000C4 >> 0x1F;
}

// DECOMP-MATCHED func_08008DA8 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSongNumStart(u16);                             /* extern */

void func_08008DA8(u16 arg0) {
    m4aSongNumStart(arg0);
}

// DECOMP-MATCHED func_08008EB8 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_080D0EBC(s32 *, s32, s32, s32);              /* extern */

void func_08008EB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 temp_r3;
    s32 var_r2;

    sp0 = arg0;
    if (arg1 != 0) {
        if ((arg2 != 0) && (temp_r3 = arg1 | arg2, ((1 & temp_r3) == 0))) {
            if (!(temp_r3 & 3)) {
                var_r2 = ((u32) (arg2 << 0xE) >> 0x10) | 0x84000000;
            } else {
                var_r2 = ((u32) (arg2 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            var_r2 = 0;
        }
        func_080D0EBC(&sp0, arg1, var_r2 | 0x01000000, 0x040000D4);
    }
}

// DECOMP-MATCHED func_0800912C (dari hardware.s; cek manusia sebelum ke src/)
s32 func_0800912C(void) {
    return 0x3FF & ~*(u16 *)0x04000130;
}

// DECOMP-MATCHED func_08009140 (dari hardware.s; cek manusia sebelum ke src/)
s16 func_0800912C();                                /* extern */

s16 *func_08009140(s16 *arg0) {
    *arg0 = func_0800912C();
    return arg0;
}

// DECOMP-MATCHED func_08009154 (dari hardware.s; cek manusia sebelum ke src/)
void func_08009154(s16 *arg0, s16 arg1) {
    *arg0 = arg1;
}

// DECOMP-MATCHED func_08009324 (dari hardware.s; cek manusia sebelum ke src/)
s32 __builtin_delete(s32 *);                            /* extern */

void func_08009324(s32 *arg0, s32 arg1) {
    __builtin_delete(*arg0);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

// DECOMP-MATCHED func_08009344 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08009344(s32 **arg0, s32 arg1) {
    s32 *temp_r2;
    s32 temp_r0;

    temp_r2 = *arg0;
    temp_r0 = *temp_r2;
    *temp_r2 = arg1;
    return temp_r0;
}

// DECOMP-MATCHED func_08008F0C (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void *func_08008F0C(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 var_r3;

    if ((arg1 != 0) && (arg2 != 0) && (arg3 != 0) && (temp_r1 = arg1 | arg2 | arg3, ((1 & temp_r1) == 0))) {
        if (!(temp_r1 & 3)) {
            var_r3 = ((u32) (arg3 << 0xE) >> 0x10) | 0x84000000;
        } else {
            var_r3 = ((u32) (arg3 << 0xF) >> 0x10) | 0x80000000;
        }
    } else {
        var_r3 = 0;
    }
    arg0->unk0 = 0;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = var_r3;
    return arg0;
}

// DECOMP-MATCHED func_0800959C (dari hardware.s; cek manusia sebelum ke src/)
s32 func_0800956C(void *);                            /* extern */
s32 func_080098DC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5B90;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
} GenObj;
void func_0800959C(GenObj *arg0, s32 arg1) {
    arg0->unk8 = &vtable_unk_080E5B90;
    func_0800956C(arg0);
    func_080098DC(arg0, arg1);
}

// DECOMP-MATCHED func_08008920 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008920(s32 *arg0) {
    return *arg0 + 0x8C;
}

// DECOMP-MATCHED func_08008AE0 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008AE0(s32 *arg0) {
    return *arg0 + 0xC;
}

// DECOMP-MATCHED func_08008BE0 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayStop(s32);                                /* extern */

void func_08008BE0(s32 *arg0) {
    m4aMPlayStop(*arg0);
}

// DECOMP-MATCHED func_08008BF8 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayFadeOut(s32, u16);                        /* extern */

void func_08008BF8(s32 *arg0, u16 arg1) {
    m4aMPlayFadeOut(*arg0, arg1);
}

// DECOMP-MATCHED func_08008DB8 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aSongNumStartOrChange(u16);                     /* extern */

void func_08008DB8(u16 arg0) {
    m4aSongNumStartOrChange(arg0);
}

// DECOMP-MATCHED func_08008DE8 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayAllStop();                                /* extern */

void func_08008DE8(void) {
    m4aMPlayAllStop();
}

// DECOMP-MATCHED func_08008F60 (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void *func_08008F60(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 var_r1;
    s32 var_r3;

    if (arg2 != 0) {
        if ((arg3 != 0) && (temp_r1 = arg2 | arg3, ((1 & temp_r1) == 0))) {
            if (!(temp_r1 & 3)) {
                var_r3 = ((u32) (arg3 << 0xE) >> 0x10) | 0x84000000;
            } else {
                var_r3 = ((u32) (arg3 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            var_r3 = 0;
        }
        var_r1 = 0x01000000 | var_r3;
    } else {
        var_r1 = 0;
    }
    arg0->unk0 = 1;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = var_r1;
    return arg0;
}

// DECOMP-MATCHED func_0800977C (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08008E64(s32, s32, s32);                     /* extern */

void func_0800977C(s32 arg0) {
    func_08008E64(arg0 + 4, 0x07000000, 0x400);
}

// DECOMP-MATCHED func_08009864 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_0800977C();                                  /* extern */
s32 func_08009834(s32);                               /* extern */

void func_08009864(s32 arg0) {
    func_0800977C();
    func_08009834(arg0);
}

// DECOMP-MATCHED func_08007EA8 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_080D6EEC(s32);                               /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
} GenObj;
void func_08007EA8(GenObj *arg0) {
    func_080D6EEC((u8 *)arg0 + 4);
    func_080D6EEC((u8 *)arg0 + 0x80);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

/* ATTEMPT-NOTE opencode: unk0/unk1 u8 (strb); byte-arith (u8*)+N. */

// DECOMP-MATCHED func_08009300 (dari hardware.s; cek manusia sebelum ke src/)
void *__builtin_new(s32);                           /* extern */

typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    s32 unk8;
    u8 unkC;
    u16 unkE;
} GenObj;
void **func_08009300(void **arg0, s32 arg1) {
    GenObj *temp_r0;

    temp_r0 = __builtin_new(0x10);
    temp_r0->unk0 = arg1;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unkE = 0;
    *arg0 = temp_r0;
    return arg0;
}

/* ATTEMPT-NOTE opencode: member campuran s32/u16/s32/u8/u16 sesuai str/strh/strb. */

// DECOMP-MATCHED func_080092C8 (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u16 unk0;
    u8 _pad2[8];
    u16 unkA;
} GenObj;
void func_080092C8(GenObj *arg0, u16 arg1) {
    u16 *var_r2;
    u16 temp_r6;
    u32 var_r3;
    u16 t5;
    s32 delta;

    temp_r6 = arg1;
    t5 = arg0->unk0;
    var_r3 = 0x80 << 2;
    var_r2 = (u16 *)((u8 *)arg0 + 0x20);
    delta = temp_r6 - arg0->unkA;
    do {
        if (t5 & var_r3) {
            *var_r2 += delta;
        }
        var_r2 = (u16 *)((u8 *)var_r2 - 2);
        var_r3 = var_r3 >> 1;
    } while (var_r3 != 0);
    arg0->unkA = temp_r6;
}

/* ATTEMPT-NOTE opencode: hoist load ke atas loop (r5/r6/r3/r2/r1); member u16; 0x200 via shift. */

/* ATTEMPT-NOTE opencode: decrement via (u8*)-2 agar subs #2 (u16* -=2 memberi #4). */

// DECOMP-MATCHED func_080092FC (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[12];
    u16 unkC;
} GenObj;
void func_080092FC(GenObj *arg0, s16 arg1) {
    arg0->unkC = arg1;
}

/* ATTEMPT-NOTE opencode: unkC u16 (strh). */

// DECOMP-MATCHED func_080093A0 (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
} GenObj;
s16 func_080093A0(void **arg0, u16 arg1) {
    u16 temp_r0;
    GenObj *temp_r2;

    temp_r2 = *arg0;
    temp_r0 = temp_r2->unk4;
    temp_r2->unk4 = arg1;
    return (s16) temp_r0;
}

/* ATTEMPT-NOTE opencode: unk4 u16 + s16 return (ldrh + lsls/asrs). */

// DECOMP-MATCHED func_08009190 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08009158();                                /* extern */

typedef struct GenObj {
    u16 unk0;
    u16 _pad2;
    u16 unk4;
} GenObj;
s32 func_08009190(GenObj *arg0) {
    register s32 temp_r5 asm("r5");
    s32 res;

    temp_r5 = arg0->unk0;
    res = func_08009158() & ~temp_r5;
    arg0->unk4 = res;
    return res;
}

/* ATTEMPT-NOTE opencode: unk u16; bic via & ~. */

/* ATTEMPT-NOTE opencode: unk u16; sisa alokasi arg-copy (r4 vs r5). */

// DECOMP-MATCHED func_08007714 (dari hardware.s; cek manusia sebelum ke src/)
s32 __builtin_delete(s32 *);                            /* extern */
s32 free();                                           /* extern */
s32 func_08007184(s32 *, s32);                          /* extern */
s32 func_080073E0(s32 *, s32);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
} GenObj;
void func_08007714(s32 *arg0, s32 arg1) {
    GenObj *temp_r0;
    GenObj *var_r4;
    s32 temp_r5;

    if (*(GenObj **)arg0 == 0) {
        goto tail;
    }
    temp_r0 = *(GenObj **)arg0;
    temp_r5 = temp_r0->unk4;
    var_r4 = temp_r0->unk0;
    if (var_r4 != temp_r5) {
        do {
            func_080073E0(var_r4, var_r4->unk4);
            func_08007184(var_r4, 2);
            var_r4 += 1;
        } while (var_r4 != temp_r5);
    }
    if (temp_r0->unk0 != 0) {
        free();
    }
    __builtin_delete(temp_r0);
tail:
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

// DECOMP-MATCHED func_080077DC (dari hardware.s; cek manusia sebelum ke src/)
s32 func_080077DC(s32 *arg0, u32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r1;
    s32 temp_r2;
    s32 var_r1_2;
    s32 var_r4;

    var_r1 = 0;
    temp_r3 = *arg0;
    if ((temp_r3 + 1) == 0) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        goto block_ret20;
    }
    var_r0 = 0;
    if (temp_r3 == 0) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        goto block_loop_setup;
    }
    *arg0 = temp_r3 | ((1 << (1 << arg1)) - 1);
    return 0;
block_store:
    *arg0 |= var_r1_2;
    return var_r4;
block_loop_setup:
    if (arg1 > 4U) {
        goto block_ret20;
    }
    temp_r2 = 1 << arg1;
    var_r4 = 0;
    var_r1_2 = (1 << temp_r2) - 1;
block_loop:
    if ((temp_r3 & var_r1_2) == 0) {
        goto block_store;
    }
    var_r4 += temp_r2;
    var_r1_2 <<= temp_r2;
    if (var_r1_2 != 0) {
        goto block_loop;
    }
block_ret20:
    return 0x20;
}

// DECOMP-MATCHED func_08007770 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_0800745C(void *, s32);                     /* extern */
s32 func_08007510(void *, s32);                     /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[8];
    s32 unk10;
} GenObj;
void *func_08007770(GenObj *arg0, void **arg1) {
    s32 temp_r0;
    s32 var_r0;
    GenObj *temp_r1;
    GenObj *var_r6;
    GenObj *temp_r5;
    void *temp_sb;
    GenObj *var_r4;

    temp_r1 = *arg1;
    if (temp_r1 == 0) {
        goto block_BE;
    }
    var_r6 = temp_r1;
    temp_r0 = var_r6->unk4;
    var_r4 = var_r6->unk10;
    if (var_r4 == temp_r0) {
        goto block_A8;
    }
    temp_sb = var_r4;
loop_3:
    temp_r5 = var_r4;
    var_r4 = (GenObj *)((u8 *)var_r4 + 8);
    if (var_r4 == temp_r0) {
        var_r4 = var_r6->unk0;
    }
    if (func_08007510(temp_r5, temp_r5->unk4) == 1) {
        goto block_B8;
    }
    if (var_r4 != temp_sb) {
        goto loop_3;
    }
block_A8:
    func_08007128(arg0);
    var_r0 = func_0800745C(arg0, var_r4->unk4);
    goto block_CA;
block_B8:
    var_r6->unk10 = var_r4;
    var_r4 = temp_r5;
    goto block_A8;
block_BE:
    func_08007128(arg0);
    var_r0 = func_0800736C(arg0);
block_CA:
    arg0->unk4 = var_r0;
    return arg0;
}

// DECOMP-MATCHED func_08009168 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08009140();                                  /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    u16 unk4;
} GenObj;
void *func_08009168(GenObj *arg0) {
    func_08009140();
    arg0->unk4 = arg0->unk0;
    return arg0;
}

// DECOMP-MATCHED func_0800917C (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08009154();                                  /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    u16 unk4;
} GenObj;
void *func_0800917C(GenObj *arg0) {
    func_08009154();
    arg0->unk4 = arg0->unk0;
    return arg0;
}

// DECOMP-MATCHED func_080091A4 (dari hardware.s; cek manusia sebelum ke src/)
s32 func_08009168();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[2];
    u16 unk8;
    u16 unkA;
    u16 unkC;
} GenObj;
void *func_080091A4(GenObj *arg0, u16 arg1, u16 arg2) {
    s16 *var_r0;
    s16 *temp_r1;
    volatile s32 pad;

    func_08009168();
    arg0->unk8 = arg0->unk4;
    arg0->unkA = arg1;
    arg0->unkC = arg2;
    pad = 0;
    var_r0 = (s16 *)((u8 *)arg0 + 0xE);
    temp_r1 = (s16 *)((u8 *)arg0 + 0x22);
    if (var_r0 != temp_r1) {
        do {
            *var_r0 = 0;
            var_r0 += 1;
        } while (var_r0 != temp_r1);
    }
    return arg0;
}

// DECOMP-MATCHED func_08007844 (dari hardware.s; cek manusia sebelum ke src/)
void func_08007844(s32 *arg0, s32 arg1, u32 arg2) {
    if (arg2 <= 4U) {
        *arg0 &= ~(((1 << (1 << arg2)) - 1) << (0x1F & arg1));
    } else if (arg2 == 5) {
        *arg0 = 0;
    }
}

// DECOMP-MATCHED func_08008B6C (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayStart(s32, s32);                          /* extern */
extern s32 gSongTable;

void func_08008B6C(s32 *arg0, s32 arg1) {
    u32 t = (u32)(arg1 << 0x10);
    s32 a0 = *arg0;
    u32 base = (u32)&gSongTable;
    m4aMPlayStart(a0, *(s32 *)(base + (t >> 0xD)));
}

// DECOMP-MATCHED func_08008B88 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayStart(void *);                            /* extern */
extern s32 gSongTable;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_08008B88(void **arg0, s32 arg1) {
    u32 t = (u32)(arg1 << 0x10);
    u32 base = (u32)&gSongTable;
    s32 song = *(s32 *)(base + (t >> 0xD));
    GenObj *temp_r2 = *arg0;

    if ((temp_r2->unk0 != song) || ((s32) temp_r2->unk4 < 0)) {
        m4aMPlayStart(temp_r2);
    }
}

// DECOMP-MATCHED func_08008BB0 (dari hardware.s; cek manusia sebelum ke src/)
s32 m4aMPlayContinue(void *);                         /* extern */
s32 m4aMPlayStart(void *);                            /* extern */
extern s32 gSongTable;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_08008BB0(void **arg0, s32 arg1) {
    u32 t = (u32)(arg1 << 0x10);
    u32 base = (u32)&gSongTable;
    s32 song = *(s32 *)(base + (t >> 0xD));
    GenObj *temp_r2 = *arg0;

    if (temp_r2->unk0 != song) {
        m4aMPlayStart(temp_r2);
        return;
    }
    if ((s32) temp_r2->unk4 < 0) {
        m4aMPlayContinue(temp_r2);
    }
}
