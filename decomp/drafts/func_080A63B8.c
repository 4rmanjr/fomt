s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_081070C4;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj;
void func_080A63B8(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 *temp_r2;
    s32 var_r3;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 0x40:
        func_080A5BD8(arg0, &gUnk_081070C4, 1, 0xD);
        break;
    case 0x24:
        func_080A5BD8(arg0, &gUnk_081070C4, 1, 0x11);
        break;
    case 0x25:
        temp_r2 = &gUnk_081070C4;
        var_r3 = 0xD;
        if (arg1 == 0) {
            var_r3 = 0x11;
        }
        func_080A5BD8(arg0, temp_r2, 1, var_r3);
        break;
    default:
        return;
    }
    arg0->unk29 = 1;
}
