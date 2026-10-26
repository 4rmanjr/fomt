s32 func_0803233C(s32, s32, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
void func_0801219C(GenObj *arg0, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        func_0803233C(temp_r0, arg2, arg3);
    }
}
