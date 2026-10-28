s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
u32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, s32 *, s32 *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080E8998;
extern s32 gUnk_080E89A4;
extern s32 gUnk_080E89A8;

typedef struct GenObj {
    u8 _pad0[6700];
    s32 unk1A2C;
    u8 _pad1A30[68];
    u8 unk1A74;
    u8 unk1A75;
    u8 unk1A76;
} GenObj;
void func_08005800(GenObj *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sl;
    s32 temp_sb;
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r6 = func_08050D34(arg0->unk1A2C);
    temp_sb = arg0->unk1A2C;
    temp_r8 = func_080088DC(arg0);
    temp_sl = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_sl, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x1A30);
    switch (temp_r0) {
    case 0:
        if (arg0->unk1A75 != 0) {
            arg0->unk1A74 = 1;
        }
        func_08050D5C(arg0->unk1A2C);
        break;
    case 3:
        if (temp_r6 > 5) {
            if (temp_r6 == 6) {
                temp_r0_2 = func_08050DF0(arg0->unk1A2C);
                switch (temp_r0_2) {
                case 1:
                    arg0->unk1A75 = 1;
                    arg0->unk1A76 = 1;
                    break;
                case 2:
                    arg0->unk1A75 = 1;
                    arg0->unk1A76 = 0;
                    break;
                default:
                    break;
                }
            } else {
                func_08050D74(arg0->unk1A2C);
            }
        } else if (temp_r6 >= 4) {
        } else if (temp_r6 == 1) {
            func_08050E30(arg0->unk1A2C, &gUnk_080E8998, &gUnk_080E89A4, &gUnk_080E89A8, 0, 0, 0);
        } else {
            func_08050D74(arg0->unk1A2C);
        }
        break;
    default:
        break;
    }
}
