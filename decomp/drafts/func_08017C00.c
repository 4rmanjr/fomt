void *GetMapData(s32);
s32 func_08017C00(void *arg0) {
    register void *sv __asm__("r1");
    register u32 off __asm__("r2");
    sv = arg0;
    off = 0x103C;
    __asm__ volatile("" : "+r"(sv), "+r"(off));
    if (*(u8 *)((u8 *)sv + off) != 0) {
        return 1;
    }
    if (*(u8 *)((u8 *)GetMapData(*(s32 *)((u8 *)sv + 4)) + 0x24) != 0) {
        return 1;
    }
    return 0;
}
