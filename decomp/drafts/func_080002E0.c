s32 func_080006E4(s32, u32 *, s32, s32);              /* extern */
s32 memcmp(u32 *, s32 *, s32);                        /* extern */
extern u16 gUnk_03000400;
extern s32 gUnk_080E862C;

s32 func_080002E0(s32 arg0) {
    u8 sp0[0x20];
    u32 sp20;
    u32 sp24;
    s32 var_r4;

    func_080006E4(arg0, &sp0, 0, 0x20);
    if ((gUnk_03000400 != 0) || (sp20 = (u32) gUnk_03000400, func_080006E4(arg0, &sp20, 0x20, 4), (gUnk_03000400 != 0)) || (sp24 = (u32) gUnk_03000400, func_080006E4(arg0, &sp24, 0x24, 4), (gUnk_03000400 != 0))) {
        return 0;
    }
    var_r4 = 0;
    if ((memcmp(&sp0, &gUnk_080E862C, 0x20) == 0) && ((3 & sp20) == sp20) && (sp24 <= 1U)) {
        var_r4 = 1;
    }
    return var_r4;
}
