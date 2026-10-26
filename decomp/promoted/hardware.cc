
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
