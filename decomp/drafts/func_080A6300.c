s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106B3C;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    s32 unk29;
} GenObj;
void func_080A6300(GenObj *arg0) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        var_r2 = 1;
block_8:
        func_080A5BD8(arg0, &gUnk_08106B3C, var_r2, 0x11);
block_10:
        arg0->unk29 = 1;
        return;
    case 42:
        var_r2 = 0x10;
        goto block_8;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106B3C, 0x18, 0x11);
        goto block_10;
    }
}
