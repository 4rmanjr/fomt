s32 func_08012B24(s32);

typedef struct GenObj {
    u8 _pad0[0x1054];
    s32 unk1054;
} GenObj;
void func_0801D9A8(GenObj *arg0) {
    register u32 off __asm__("r3");
    off = 0x1054;
    __asm__ volatile("" : "+r"(off));
    func_08012B24(*(s32 *)((u8 *)arg0 + off));
}
