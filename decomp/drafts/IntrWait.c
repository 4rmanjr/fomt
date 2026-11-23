s32 IntrWait(s32 waitFlags, s32 waitMask) {
    asm("movs r2, #0");
    asm("svc #4");
}
