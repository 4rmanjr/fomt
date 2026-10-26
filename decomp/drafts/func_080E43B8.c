s32 free();                                           /* extern */
s32 func_080A4B6C(s32, s32);                          /* extern */
s32 func_080DC57C(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
} GenObj;
void func_080E43B8(s32 arg0, s32 arg1) {
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r4;

    temp_r4 = arg0 + 0xA4;
    if (temp_r4->unk8 != 0) {
        func_080DC57C(temp_r4, temp_r4->unk4->unk4);
        temp_r0 = temp_r4->unk4;
        temp_r0->unk8 = temp_r0;
        temp_r4->unk4->unk4 = 0;
        temp_r0_2 = temp_r4->unk4;
        temp_r0_2->unkC = temp_r0_2;
        temp_r4->unk8 = 0;
    }
    if (temp_r4->unk4 != 0) {
        free();
    }
    func_080A4B6C(arg0, arg1);
}
