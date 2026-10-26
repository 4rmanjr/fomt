s32 func_08032384(s32, s32, u32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
void func_08012274(GenObj *arg0, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        func_08032384(temp_r0, arg2, (u32) ((0 - arg3) | arg3) >> 0x1F);
    }
}
