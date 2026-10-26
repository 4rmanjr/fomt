s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106A94;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    s32 unk29;
} GenObj;
void func_080A6194(GenObj *arg0) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        var_r2 = 0x19;
block_8:
        func_080A5BD8(arg0, &gUnk_08106A94, var_r2, 0xF);
        break;
    case 42:
        var_r2 = 0x28;
        goto block_8;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106A94, 0x36, 0xF);
        break;
    }
    arg0->unk29 = 1;
}
