#include "common.h"
s8 GetAffection__C6Animal(void **);                 /* extern */
void **GetChicken__4CoopUi(s32);                    /* extern */
s32 GetName__C6Animal(void **);                     /* extern */
s32 GetUnkEnt__C4Coop(s32);                         /* extern */
s32 SetFestivalWinner__6Animal(void **);              /* extern */
s32 func_080B3C90(s32 *);                               /* extern */
s32 func_080BC898(s32 *, ? *);                          /* extern */
s32 func_080BC8C0(s32 *, s32);                          /* extern */
s8 func_080BC8F0(s32 *);                              /* extern */
s32 func_080BC8FC(void ***, ? *);                     /* extern */
s32 memcpy(s32 *, s32, u32);                            /* extern */
u32 strlen();                                       /* extern */

void ***func_080A37A8(void ***arg0, void *arg1) {
    void **sp0;
s32 sp4;
s32 sp18;
    void ***sp20;
    void **sp24;
    void ***sp28;
    void **sp2C;
    u32 sp30;
    u32 sp34;
    void ***sp38;
    void **sp3C;
    s32 temp_r6;
    u32 *var_r0;
    u32 temp_r1_2;
    u32 var_r4;
    u8 temp_r0_3;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r1;
    void **temp_r1_3;
    void **temp_r4;

    if (GetUnkEnt__C4Coop(arg1->unk8 + 0x410) == -1) {
        temp_r0 = arg1->unk4;
        arg1->unk4 = 0;
        sp0 = temp_r0;
        sp20 = &sp0;
        sp24 = temp_r0;
        sp0 = 0;
        *arg0 = temp_r0;
        goto block_4;
    }
    temp_r0_2 = GetChicken__4CoopUi(arg1->unk8 + 0x410);
    if (temp_r0_2 == 0) {
        temp_r1 = arg1->unk4;
        arg1->unk4 = temp_r0_2;
        sp0 = temp_r1;
        sp28 = &sp0;
        sp2C = temp_r1;
        sp0 = temp_r0_2;
        *arg0 = temp_r1;
block_4:
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    } else {
        func_080B3C90(&sp4);
        sp30 = 0xC8;
        temp_r0_3 = arg1->unk8->unk10;
        temp_r1_2 = ((temp_r0_3 >> 3) * 7) + ((u32) (temp_r0_3 << 0x1D) >> 0x1D);
        sp34 = temp_r1_2;
        var_r0 = &sp30;
        if (temp_r1_2 < 0xC8U) {
            var_r0 = &sp34;
        }
        sp4.unk10 = (s8) *var_r0;
        temp_r6 = GetName__C6Animal(temp_r0_2);
        var_r4 = strlen();
        if (var_r4 > 0xCU) {
            var_r4 = 0xC;
        }
        memcpy(&sp4, temp_r6, var_r4);
        *(&sp4 + var_r4) = 0;
        sp4.unk11 = GetAffection__C6Animal(temp_r0_2);
        func_080BC898(&sp18, &sp4);
        func_080BC8FC(&sp0, &sp18);
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
        if ((func_080BC8F0(&sp18) << 0x18) != 0) {
            SetFestivalWinner__6Animal(temp_r0_2);
        }
        temp_r4 = arg1->unk4;
        temp_r4->unkC = func_080BC8F0(&sp18);
        temp_r1_3 = arg1->unk4;
        arg1->unk4 = 0;
        sp0 = temp_r1_3;
        sp38 = &sp0;
        sp3C = temp_r1_3;
        sp0 = 0;
        *arg0 = temp_r1_3;
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0->unk8(temp_r1_3, 3);
        }
        func_080BC8C0(&sp18, 2);
    }
    return arg0;
}

