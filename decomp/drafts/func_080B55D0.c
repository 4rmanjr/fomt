s32 Unpack(s32 *, ? *);                                 /* extern */
s32 func_08008724();                                  /* extern */
s32 func_080088DC(void *);                          /* extern */
u16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008E64(s16 *, s32, s32);                   /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08050D3C(s32, s32, s32, u16 *);              /* extern */
s32 func_080B5788(void *);                            /* extern */
extern ? gUnk_086FB004;
extern ? gUnk_086FD19C;
extern ? gUnk_086FD240;
extern ? gUnk_0872C5D0;
extern ? gUnk_0872C73C;
extern ? gUnk_0872C84C;
extern s16 gUnk_0872D5AC;

void func_080B55D0(void *arg0, s16 arg222, u16 arg800) {
    s16 *var_r4;
    s32 temp_r0_9;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r5;
    s32 var_r6;
    u16 *temp_r0;
    u16 *temp_r0_2;
    u16 *temp_r0_3;
    u16 *temp_r0_4;
    u16 *temp_r0_5;
    u16 *temp_r0_6;
    u16 *temp_r0_7;
    u16 *temp_r0_8;
    u16 *temp_r5;

    func_08008724();
    Unpack(&gUnk_086FD240, &unkspC);
    var_r6 = 0x0600F000;
    var_r4 = &arg222;
    var_r5 = 0x1F;
    do {
        func_08008E64(var_r4, var_r6, 0x40);
        var_r6 += 0x40;
        var_r4 += 0x78;
        var_r5 -= 1;
    } while (var_r5 >= 0);
    Unpack(&gUnk_086FB004, (s32 *)0x06000000);
    Unpack(&gUnk_086FD19C, (s32 *)0x05000000);
    Unpack(&gUnk_0872C5D0, (s32 *)0x0600E800);
    Unpack(&gUnk_0872C73C, (s32 *)0x0600F800);
    Unpack(&gUnk_0872C84C, (s32 *)0x06004000);
    func_08008E64(&gUnk_0872D5AC, 0x050000E0, 0x200);
    temp_r0 = func_08008918(arg0);
    arg800 = 0x1F40;
    *temp_r0 = arg800;
    temp_r0_2 = func_08008918(arg0);
    arg800 = 0x1F45;
    temp_r0_2->unkA = (u16) arg800;
    temp_r0_3 = func_08008918(arg0);
    arg800 = 0x1E43;
    temp_r0_3->unkC = (u16) arg800;
    temp_r0_4 = func_08008918(arg0);
    arg800 = 0x1D46;
    temp_r0_4->unkE = (u16) arg800;
    func_08008EB8(0, 0x0600BFE0, 0x20);
    temp_r0_5 = func_08008918(arg0);
    arg800 = 0xB8;
    temp_r0_5->unk14 = (u16) arg800;
    temp_r0_6 = func_08008918(arg0);
    arg800 = 0xE0;
    temp_r0_6->unk16 = (u16) arg800;
    temp_r0_7 = func_08008918(arg0);
    arg800 = 0xB8;
    temp_r0_7->unk1C = (u16) arg800;
    temp_r0_8 = func_08008918(arg0);
    arg800 = 0xE0;
    temp_r0_8->unk1E = (u16) arg800;
    func_080B5788(arg0);
    temp_sb = arg0->unk718;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0_9 = func_0800894C(arg0);
    unksp0 = temp_r4;
    unksp4 = temp_r0_9;
    unksp8 = arg0 + 0x708;
    func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5);
}
