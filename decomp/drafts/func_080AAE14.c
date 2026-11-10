s32 func_080DC57C(void *, s32);

typedef struct GenObj {
    void *unk0;
    void *unk4;
} GenObj;
void func_080AAE14(GenObj *arg0, s32 arg1, s32 arg2) {
    register s32 *a8 __asm__("r4");

    arg0->unk0 = (void *)arg1;
    arg0->unk4 = (void *)arg2;
    a8 = (s32 *)((u8 *)arg0 + 8);
    if (a8[2] != 0) {
        func_080DC57C(a8, *(s32 *)((u8 *)(s32 *)(a8[1]) + 4));
        *(void **)((u8 *)(s32 *)(a8[1]) + 8) = *(void **)(a8 + 1);
        *(s32 *)((u8 *)(s32 *)(a8[1]) + 4) = 0;
        *(void **)((u8 *)(s32 *)(a8[1]) + 0xC) = *(void **)(a8 + 1);
        a8[2] = 0;
    }
}
