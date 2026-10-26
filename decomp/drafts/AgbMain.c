s32 __builtin_new(s32);
s32 func_080002E0(s32);
s32 func_08000358(s32);
s32 func_080004C4(void);
s32 func_0800050C(s32);
s32 func_08000640(s32);
s32 func_0800082C(s32);
s32 func_080036F8(void);
s32 func_08008980(s32);
s32 func_08008A68(s32, s32);
s32 func_08008AFC(void);
s32 func_080D100C(s32, s32);
extern s32 func_03000490;
extern s32 func_08000240;

void AgbMain(void) {
s32 sp0;
    s32 sp4;
    s32 *sp8;
s32 spC;
    s32 *sp14;
    s32 sp18;
    s32 temp_r0;

    *(s16 *)0x04000204 = 0x4014;
    func_080004C4();
    func_080D100C(0xD, (s32)&func_03000490);
    func_0800050C(0x2000);
    func_08000640((s32)&spC);
    if ((func_080002E0((s32)&spC) << 0x18) == 0) {
        func_08000358((s32)&spC);
    }
    func_080D100C(0xC, (s32)&func_08000240);
    *(s16 *)0x04000132 = 0xC00F;
    func_0800050C(0x1000);
    func_08008AFC();
    func_08008980((s32)&sp0);
    __builtin_new(8);
    temp_r0 = func_080036F8();
    sp14 = &sp8;
    sp18 = temp_r0;
    sp8 = 0;
    sp4 = temp_r0;
    func_0800082C((s32)&sp4);
    if (sp8 != 0) {
        ((s32 (**)(s32, s32))(*sp8 + 8))(sp8, 3);
    }
    func_08008A68((s32)&sp0, 2);
}
