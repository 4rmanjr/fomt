u32 GetAmountShipped__C11ShippingBini(s32, s32);    /* extern */
s32 GetId__C7Product(s32);                          /* extern */
s32 HasShippedOneOfEachProduct__C11ShippingBin(s32); /* extern */
s32 IsDisplayEnabled__C11ShippingBini(s32, s32);    /* extern */
s32 Ship__11ShippingBinRC7Product(s32, s32);          /* extern */

void func_0801F924(void *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 sp18;
    s32 sp20;
    s32 sp28;
    s32 sp30;
    ? (**var_r2)(void *, s32 *, s32);
    ? (*var_r3)(void *, s32 *, s32);
    s32 *var_r1;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r8;
    u32 temp_r0_2;
    u32 var_r6;

    temp_r8 = arg0->unk1038 + 0x54;
    temp_r0 = GetId__C7Product(arg1);
    if ((IsDisplayEnabled__C11ShippingBini(temp_r8, temp_r0) << 0x18) != 0) {
        var_r6 = GetAmountShipped__C11ShippingBini(temp_r8, temp_r0);
    } else {
        var_r6 = 0;
    }
    Ship__11ShippingBinRC7Product(temp_r8, arg1);
    temp_r0_2 = GetAmountShipped__C11ShippingBini(temp_r8, temp_r0);
    if (var_r6 < temp_r0_2) {
        switch (temp_r0_2) {                        /* irregular */
        case 0x2710:
            sp0 = 0x33C;
            sp4 = temp_r0;
            var_r3 = arg0->unk0->unk140;
            var_r1 = &sp0;
block_21:
            var_r3(arg0, var_r1, 1);
            break;
        case 0x186A0:
            var_r2 = arg0->unk0 + 0x140;
            var_r1 = &sp8;
            sp8 = 0x33D;
block_20:
            var_r1->unk4 = temp_r0;
            var_r3 = *var_r2;
            goto block_21;
        case 0xF4240:
            var_r2 = arg0->unk0 + 0x140;
            var_r1 = &sp10;
            sp10 = 0x33E;
            goto block_20;
        case 0x989680:
            var_r2 = arg0->unk0 + 0x140;
            var_r1 = &sp18;
            sp18 = 0x33F;
            goto block_20;
        case 0x5F5E100:
            var_r2 = arg0->unk0 + 0x140;
            var_r1 = &sp20;
            sp20 = 0x340;
            goto block_20;
        case 0x3B9ACA00:
            sp28 = 0x341;
            sp28.unk4 = temp_r0;
            arg0->unk0->unk140(arg0, &sp28, 1);
            break;
        }
    }
    temp_r5 = 3 & arg0->unk1038->unk2192;
    if ((temp_r5 == 0) && ((HasShippedOneOfEachProduct__C11ShippingBin(temp_r8) << 0x18) != 0)) {
        sp30 = 0x342;
        sp30.unk4 = temp_r5;
        arg0->unk0->unk140(arg0, &sp30, 1);
    }
}
