s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106ADC;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    s32 unk29;
} GenObj;
void func_080A6278(GenObj *arg0) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106ADC, 0xF, 2);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106ADC, 0x17, 2);
        break;
    }
    arg0->unk29 = 1;
}
