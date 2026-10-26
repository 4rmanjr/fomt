
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
