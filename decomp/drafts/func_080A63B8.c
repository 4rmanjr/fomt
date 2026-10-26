s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_081070C4;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    s32 unk29;
} GenObj;
void func_080A63B8(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r3;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 0x40:
        func_080A5BD8(arg0, &gUnk_081070C4, 1, 0xD);
block_10:
        arg0->unk29 = 1;
        return;
    case 0x24:
        func_080A5BD8(arg0, &gUnk_081070C4, 1, 0x11);
        goto block_10;
    case 0x25:
        var_r3 = 0xD;
        if (arg1 == 0) {
            var_r3 = 0x11;
        }
        func_080A5BD8(arg0, &gUnk_081070C4, 1, var_r3);
        goto block_10;
    }
}
