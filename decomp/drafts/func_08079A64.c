s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 GetRecordPlayer__9FarmHouse(s32);               /* extern */
s32 GetShelf__9FarmHouse(s32);                      /* extern */
s32 HasBathroom__C9FarmHouse(s32);                  /* extern */
s32 HasKitchen__C9FarmHouse(s32);                   /* extern */
s32 HasVase__C9FarmHouse(s32);                      /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008E64(s16 **, s32, s32);                  /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0800BD40(s32, s16);                        /* extern */
s32 func_0804E5AC(s32, s16 **, s32, s32);             /* extern */
s32 func_0804E7A0(s32, s16 **, s32);                  /* extern */
s32 func_0804E958(s32, s16 **, s32);                  /* extern */
s32 func_0807A708(void *, s32, s16 *);                /* extern */
extern s32 gUnk_080FD920;
extern ? gUnk_080FD940;
extern ? gUnk_0810828C;

void func_08079A64(void *arg0) {
    s16 *sp0;
    s32 sp4;
    s32 sp8;
    s16 spC;
    s16 *sp30;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s16 **sp80;
    s16 **sp84;
    s16 **var_sl;
    s16 *temp_r0_5;
    s16 var_r6;
    s32 *temp_r0_2;
    s32 *var_r1;
    s32 *var_r6_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r0;
    s32 var_r4;
    s32 var_r6_3;
    u32 var_r3;
    u8 temp_r4;
    void *temp_r0_3;
    void *temp_r0_4;

    arg0->unk850 = 0;
    if (arg0->unkA57 != 0) {
        var_r6 = 0x4D;
        sp84 = &sp0 + 0x70;
        var_sl = arg0 + 0x14;
        do {
            if ((func_0800BD40(arg0->unk8 + 0x400, var_r6) << 0x18) != 0) {
                *(arg0 + 0x858 + (arg0->unk850 * 2)) = var_r6;
                arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
            }
            var_r6 += 1;
        } while ((s32) var_r6 <= 0x88);
    } else {
        var_r3 = 0;
        sp84 = &sp0 + 0x70;
        var_sl = arg0 + 0x14;
        var_r6_2 = &gUnk_080FD920;
        do {
            temp_r1 = *var_r6_2;
            var_r6_2 += 4;
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = (s16) temp_r1;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
            var_r3 += 1;
        } while (var_r3 <= 7U);
        if ((HasVase__C9FarmHouse(arg0->unk8 + 0x1F4) << 0x18) != 0) {
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = 0x4A;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
        }
        if (GetFridge__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = 0x4B;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
        }
        if (GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = 0x4C;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
        }
        if ((HasKitchen__C9FarmHouse(arg0->unk8 + 0x1F4) << 0x18) != 0) {
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = 0xC;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
        }
        if ((HasBathroom__C9FarmHouse(arg0->unk8 + 0x1F4) << 0x18) != 0) {
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = 0x49;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
        }
        if (GetRecordPlayer__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
            *(arg0 + 0x858 + (arg0->unk850 * 2)) = 0x48;
            arg0->unk850 = (s16) ((u16) arg0->unk850 + 1);
        }
    }
    temp_r0 = arg0->unk850 + 2;
    if (temp_r0 > 0xA) {
        var_r1 = arg0 + 0x848;
        var_r0 = (temp_r0 - 0xA) << 0x14;
    } else {
        var_r1 = arg0 + 0x848;
        var_r0 = 0;
    }
    *var_r1 = var_r0;
    var_r4 = 0;
    do {
        sp70 = 0x1C;
        sp84->unk2 = 2;
        func_0804E7A0(sp70, var_sl, 0);
        temp_r1_2 = arg0->unk84E + var_r4;
        if ((temp_r1_2 > 1) && (temp_r1_2 < (s32) (arg0->unk850 + 2))) {
            temp_r0_2 = *((*(arg0 + 0x858 + ((temp_r1_2 - 2) * 2)) * 4) + &gUnk_0810828C);
            arg0->unkA5C = temp_r0_2;
            temp_r1_3 = *temp_r0_2;
            if (temp_r1_3 != 0) {
                func_0807A708(arg0, temp_r1_3, &spC);
                sp74.unk0 = 0x1C;
                sp74.unk2 = 2;
                sp0 = &spC;
                sp4 = 0;
                sp8 = 1;
                func_0804E958(sp74, var_sl, 0);
            }
        }
        func_08008E64(var_sl, (((((u16) arg0->unk840 >> 4) + var_r4) & 0xF) * 0x700) + 0x06000C00, 0x700);
        var_r4 += 1;
    } while (var_r4 <= 0xA);
    temp_r0_3 = arg0 + 0x820;
    func_08008EB8(0, (func_08007D4C(temp_r0_3, temp_r0_3->unk4) << 5) + 0x06010000, 0x700);
    var_r6_3 = 0;
    sp80 = &sp0 + 0x30;
loop_30:
    temp_r4 = *(var_r6_3 + ((1 & arg0->unkA57) * 0xC) + &gUnk_080FD940);
    if (temp_r4 != 0) {
        sp78.unk0 = 1;
        sp78.unk2 = 2;
        func_0804E7A0(sp78, &sp30, 0);
        sp7C.unk0 = 1;
        sp7C.unk2 = 2;
        sp0 = (s16 *) temp_r4;
        sp4 = 0;
        sp8 = 1;
        func_0804E5AC(sp7C, &sp30, 0, 0);
        temp_r0_4 = arg0 + 0x820;
        func_08008E64(sp80, ((func_08007D4C(temp_r0_4, temp_r0_4->unk4) + (var_r6_3 * 2)) << 5) + 0x06010000, 0x40);
        var_r6_3 += 1;
        if (var_r6_3 <= 0xB) {
            goto loop_30;
        }
    }
    temp_r0_5 = func_08008918(arg0);
    spC = 0x1E40;
    *temp_r0_5 = 0x1E40;
}
