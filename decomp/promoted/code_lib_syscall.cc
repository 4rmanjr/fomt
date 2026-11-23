
// DECOMP-MATCHED ArcTan2 (dari code_lib_syscall.s; cek manusia sebelum ke src/)
s32 ArcTan2(s32 x, s32 y) {
    asm("svc #0xa");
}

// DECOMP-MATCHED CpuFastSet (dari code_lib_syscall.s; cek manusia sebelum ke src/)
s32 CpuFastSet(s32 src, s32 dst) {
    asm("svc #0xc");
}

// DECOMP-MATCHED CpuSet (dari code_lib_syscall.s; cek manusia sebelum ke src/)
s32 CpuSet(s32 src, s32 dst) {
    asm("svc #0xb");
}

// DECOMP-MATCHED Sqrt (dari code_lib_syscall.s; cek manusia sebelum ke src/)
s32 Sqrt(s32 x) {
    asm("svc #8");
}

// DECOMP-MATCHED IntrWait (dari code_lib_syscall.s; cek manusia sebelum ke src/)
s32 IntrWait(s32 waitFlags, s32 waitMask) {
    asm("movs r2, #0");
    asm("svc #4");
}
