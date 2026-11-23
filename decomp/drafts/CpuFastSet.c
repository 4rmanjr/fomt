s32 CpuFastSet(s32 src, s32 dst) {
    asm("svc #0xc");
}
