#include "prelude.h"

// DECOMP-MATCHED ArcTan2 (dari code_lib_syscall.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_lib_syscall.080D3748")))
i32 ArcTan2(i32 x, i32 y) {
    __asm__ volatile ("svc #0xa");
}
}
// DECOMP-MATCHED CpuFastSet (dari code_lib_syscall.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_lib_syscall.080D374C")))
i32 CpuFastSet(i32 src, i32 dst) {
    asm("svc #0xc");
}
}


// DECOMP-MATCHED CpuSet (dari code_lib_syscall.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_lib_syscall.080D3750")))
i32 CpuSet(i32 src, i32 dst) {
    asm("svc #0xb");
}
}

// DECOMP-MATCHED Sqrt (dari code_lib_syscall.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_lib_syscall.080D3774")))
i32 Sqrt(i32 x) {
    asm("svc #8");
}
}

// DECOMP-MATCHED IntrWait (dari code_lib_syscall.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_lib_syscall.080D3754")))
i32 IntrWait(i32 waitFlags, i32 waitMask) {
    asm("movs r2, #0");
    asm("svc #4");
}
}

