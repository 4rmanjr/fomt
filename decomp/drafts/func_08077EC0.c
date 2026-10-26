s32 Unpack(s32 *, s32);                                 /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_08010E48(s32);                             /* extern */
s32 func_08010E50(s32);                             /* extern */
s32 func_08010E58(s32);                             /* extern */
s32 func_08077E34(void *, s32, s32 *);                  /* extern */
s32 func_08077E64(void *, s32, s32, s32, s32 *, s32, s32 *); /* extern */
extern s32 gUnk_08755230;
extern s32 gUnk_0875553C;
extern s32 gUnk_08755848;
extern s32 gUnk_08757AE0;
extern s32 gUnk_08757BA0;
extern s32 gUnk_08757BAC;
extern s32 gUnk_08757BCC;
extern s32 gUnk_08757BD8;
extern s32 gUnk_08757BF8;
extern s32 gUnk_08757C0C;
extern s32 gUnk_08757C14;
extern s32 gUnk_08757F20;
extern s32 gUnk_0875822C;
extern s32 gUnk_0875A358;
extern s32 gUnk_0875A418;
extern s32 gUnk_0875A424;
extern s32 gUnk_0875A438;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void func_08077EC0(GenObj *arg0) {
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r0_4;
    s32 *var_r0_5;
    s32 *var_r0_6;
    s32 *var_r2;
    s32 *var_r2_2;
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0800E324(arg0->unk8 + 0x10);
    var_r0 = 0;
    if (temp_r0 == 3) {
        var_r0 = 1;
    }
    var_r0_2 = &gUnk_08755848;
    if (var_r0 != 0) {
        var_r0_2 = &gUnk_0875822C;
    }
    Unpack(var_r0_2, 0x06000000);
    var_r0_3 = &gUnk_08757AE0;
    if (var_r0 != 0) {
        var_r0_3 = &gUnk_0875A358;
    }
    func_08008E64(var_r0_3, 0x05000020, 0xC0);
    var_r2 = &gUnk_08755230;
    if (var_r0 != 0) {
        var_r2 = &gUnk_08757C14;
    }
    func_08077E34(arg0, 0x1E, var_r2);
    var_r2_2 = &gUnk_0875553C;
    if (var_r0 != 0) {
        var_r2_2 = &gUnk_08757F20;
    }
    func_08077E34(arg0, 0x1D, var_r2_2);
    if (temp_r0 == 0) {
        func_08077E64(arg0, 0x1E, 0xA, 0xA, (s32 *)5, 3, &gUnk_08757BD8);
    } else if (temp_r0 == 2) {
        func_08077E64(arg0, 0x1E, 0xA, 0xA, (s32 *)5, 3, &gUnk_08757BAC);
    }
    if (temp_r0 == 1) {
        func_08077E64(arg0, 0x1D, 0x18, 7, (s32 *)3, 2, &gUnk_08757BCC);
    }
    if ((func_08010E48(arg0->unk8) << 0x18) != 0) {
        if (var_r0 != 0) {
            var_r0_4 = &gUnk_0875A418;
        } else {
            var_r0_4 = &gUnk_08757BA0;
        }
        func_08077E64(arg0, 0x1D, 0, 5, var_r0_4);
    }
    if ((func_08010E50(arg0->unk8) << 0x18) != 0) {
        if (var_r0 != 0) {
            var_r0_5 = &gUnk_0875A438;
        } else {
            var_r0_5 = &gUnk_08757C0C;
        }
        func_08077E64(arg0, 0x1D, 0xE, 5, var_r0_5);
    }
    if ((func_08010E58(arg0->unk8) << 0x18) != 0) {
        if (var_r0 != 0) {
            var_r0_6 = &gUnk_0875A424;
        } else {
            var_r0_6 = &gUnk_08757BF8;
        }
        func_08077E64(arg0, 0x1D, 0x1B, 6, var_r0_6);
    }
}
