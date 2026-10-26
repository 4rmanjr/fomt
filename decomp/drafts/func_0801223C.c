s32 func_08033B84(void *, u8, s32, s32);              /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[2];
    s32 unkA;
    s32 unkE;
    u8 _pad12[30];
    s32 unk30;
    u8 _pad34[116];
    s32 unkA8;
} GenObj;
void func_0801223C(GenObj *arg0, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        func_08033B84(temp_r0, temp_r0->unk30, temp_r0->unkA + arg2, temp_r0->unkE + arg3);
    }
}
