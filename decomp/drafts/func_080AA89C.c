s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106DAC;

typedef struct GenObj {
    u8 _pad0[41];
    u8 unk29;
} GenObj;
void func_080AA89C(GenObj *arg0) {
    func_080A5BD8(arg0, &gUnk_08106DAC, 0x21, 0x14);
    arg0->unk29 = 1;
}

/* ATTEMPT-NOTE opencode: unk29 u8 (adds+strb). */
