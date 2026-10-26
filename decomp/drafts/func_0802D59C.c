s32 GetLocation__C7AEntity(s32 *, void *);            /* extern */
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */

void func_0802D59C(void *arg0, void *arg1) {
    s32 sp0;
    s32 sp8;
    u32 sp14;
    s32 sp1C;
    s32 temp_r1_2;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r1_2;
    u16 temp_r0_2;
    u16 var_r8;
    u32 var_r1;
    u8 temp_r0;
    u8 temp_r2;
    u8 var_r0;
    u8 var_r3;
    u8 var_r4;
    u8 var_r4_2;
    u8 var_r5;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r1;
    void *temp_r0_5;
    void *var_r2;

    sp1C = 0;
    var_r8 = 0;
    if (arg1 != 0) {
        sp1C = (s32) arg1->unk0;
        var_r8 = arg1->unk4;
    }
    arg0->unk3E = 0;
    if (arg0->unkC3 != 0) {
        goto block_29;
    }
    if (!(1 & var_r8)) {
        goto block_29;
    }
    GetLocation__C7AEntity(&sp0, arg0);
    temp_r0 = arg0->unk20;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_r4 = sp0.unk3;
        var_r1 = ((((sp0.unk4 & 0x3FF) << 6) | (var_r4 >> 2)) << 0x10) + 0xFFF00000;
block_15:
        sp0.unk3 = (s8) ((3 & var_r4) | (((var_r1 >> 0x10) & 0x3F) * 4));
        sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | ((var_r1 >> 0x16) & 0x3FF));
        break;
    case 0:                                         /* switch 1 */
        var_r4 = sp0.unk3;
        var_r1 = ((((sp0.unk4 & 0x3FF) << 6) | (var_r4 >> 2)) << 0x10) + 0x100000;
        goto block_15;
    case 2:                                         /* switch 1 */
        var_r1_2 = ((s32) (sp0 << 6) >> 0x10) - 0x10;
block_18:
        sp0 = (0xFC0003FF & sp0) | ((u32) (var_r1_2 << 0x10) >> 6);
        break;
    case 3:                                         /* switch 1 */
        var_r1_2 = ((s32) (sp0 << 6) >> 0x10) + 0x10;
        goto block_18;
    }
    temp_r1 = arg0->unk0;
    (*temp_r1)->unk34(&sp8, temp_r1, arg0->unk4);
    temp_r5 = (s32) (sp0 << 6) >> 0x13;
    temp_r3 = (s32) ((((sp0.unk4 & 0x3FF) << 6) | ((u8) sp0.unk3 >> 2)) << 0x10) >> 0x13;
    temp_r0_2 = sp8.unk8;
    if ((sp8 != 0) && ((u32) temp_r5 <= (u32) temp_r0_2) && ((u32) temp_r3 <= (u32) sp8.unkA)) {
        temp_r1_2 = sp8.unk4;
        var_r0 = (temp_r3 * temp_r0_2) + temp_r5;
        if (temp_r1_2 != 0) {
            var_r0 = *(temp_r1_2 + var_r0);
        }
        var_r2 = sp8 + (var_r0 * 4);
    } else {
        var_r2 = 0;
    }
    if ((var_r2 != 0) && (0xFFFE & var_r2->unk2)) {
        temp_r0_3 = arg0->unk0;
        sp14 = (u32) var_r2->unk0 >> 0x11;
        sp14.unk4 = 0;
        (*temp_r0_3)->unk140(temp_r0_3, &sp14, 0);
        return;
    }
block_29:
    var_r3 = 0;
    var_r5 = 0;
    var_r4_2 = arg0->unk20;
    if ((arg0->unkC3 != 0) || (var_r8 & 3)) {
        arg0->unk3C = 0x23;
    } else if ((((u32) (sp1C << 0x17) >> 0x1F) | (((u32) (sp1C << 0x1B) >> 0x1F) | (((u32) (sp1C << 0x1A) >> 0x1F) | (((u32) (sp1C << 0x19) >> 0x1F) | ((u32) (sp1C << 0x18) >> 0x1F))))) != 0) {
        temp_r2 = sp1C.unk0;
        if (0x20 & temp_r2) {
            var_r4_2 = 2;
        } else if (0x10 & temp_r2) {
            var_r4_2 = 3;
        } else if (0x40 & temp_r2) {
            var_r4_2 = 1;
        } else if (0x80 & temp_r2) {
            var_r4_2 = 0;
        }
        switch (var_r4_2) {                         /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            var_r3 = 0xFE;
            break;
        case 3:                                     /* switch 2 */
            var_r3 = 2;
            break;
        case 1:                                     /* switch 2 */
            var_r5 = 0xFE;
            break;
        case 0:                                     /* switch 2 */
            var_r5 = 2;
            break;
        }
        if ((arg0->unk34->unk2210 << 0x1F) == 0) {
            if (1 & sp1C.unk1) {
                goto block_56;
            }
            goto block_57;
        }
        if (!(1 & sp1C.unk1)) {
block_56:
            arg0->unk3E = 2;
            var_r3 *= 2;
            var_r5 *= 2;
        } else {
block_57:
            arg0->unk3E = 1;
        }
    }
    arg0->unk18 = (s32) ((s32) (var_r3 << 0x18) >> 8);
    arg0->unk1C = (s32) ((s32) (var_r5 << 0x18) >> 8);
    if (arg0->unk20 != var_r4_2) {
        SetAnimFacing__12AActorEntityUi(arg0, (s32) var_r4_2);
    }
    temp_r0_4 = arg0->unk0;
    temp_r0_5 = (*temp_r0_4)->unk40(temp_r0_4, 0x2C);
    if (temp_r0_5->unk20 != var_r4_2) {
        SetAnimFacing__12AActorEntityUi(temp_r0_5, (s32) var_r4_2);
    }
}
