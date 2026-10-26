s32 func_08009940(void *, void *);                    /* extern */
s32 func_0804F0E0(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void func_0805039C(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r6;
    void *temp_r5;

    temp_r6 = arg0->unk8;
    if (temp_r6 == 0) {
        func_0804F0E0(arg0 + 0xD0);
        temp_r5 = arg0 + 0x20;
        if (arg0->unk4 != 1) {
            func_08009940(temp_r5, arg0 + 0x130);
        }
        func_08009940(temp_r5, arg0 + 0x148);
        arg0->unkC = (s8) temp_r6;
    }
    temp_r0 = arg0->unk8;
    if ((temp_r0 >= 0) && (temp_r0 <= 2)) {
        arg0->unk8 = 1;
    }
}
