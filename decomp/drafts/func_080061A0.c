s32 func_08008EB8(s32, s32, s32);                     /* extern */

void func_080061A0(void *arg0, s32 arg1) {
    s32 temp_r2;
    u8 var_r3;
    void *temp_r1;

    func_08008EB8(0, arg0 + 0x4608, 8);
    func_08008EB8(0, arg0 + 0x4614, 8);
    arg0->unk460B = (u8) (0x3F & arg0->unk460B);
    arg0->unk4617 = (u8) (0x3F & arg0->unk4617);
    arg0->unk4615 = (u8) ((0x3F & arg0->unk4615) | 0x80);
    arg0->unk4609 = (u8) ((-0xD & arg0->unk4609) | 4);
    arg0->unk4615 = (u8) ((-0xD & arg0->unk4615) | 4);
    temp_r2 = arg1 & 0x3FF;
    arg0->unk460C = (u16) ((0xFFFFFC00 & arg0->unk460C) | temp_r2);
    arg0->unk4618 = (u16) ((0xFFFFFC00 & arg0->unk4618) | (temp_r2 & 0x3FF));
    arg0->unk460D = (u8) ((0xF & arg0->unk460D) | 0x40);
    arg0->unk4619 = (u8) ((0xF & arg0->unk4619) | 0x40);
    var_r3 = 0;
    do {
        temp_r1 = (arg1 << 5) + (var_r3 * 4);
        *(0x06010000 + (s32) temp_r1) = 0x88888888;
        *(0x06010020 + (s32) temp_r1) = 0x88888888;
        *(0x06010040 + (s32) temp_r1) = 0x88888888;
        *(0x06010060 + (s32) temp_r1) = 0x88888888;
        *(0x06010080 + (s32) temp_r1) = 0x88888888;
        *(0x060100A0 + (s32) temp_r1) = 0x88888888;
        *(0x060100C0 + (s32) temp_r1) = 0x88888888;
        *(0x060100E0 + (s32) temp_r1) = 0x88888888;
        var_r3 += 1;
    } while ((u32) var_r3 <= 7U);
    *(s16 *)0x05000290 = 0x27F;
    arg0->unk4616 = (u16) ((0xFFFFFE00 & arg0->unk4616) | 0x90);
    arg0->unk4614 = 8;
    arg0->unk460A = (u16) (0xFFFFFE00 & arg0->unk460A);
    arg0->unk4608 = 0x20;
    arg0->unk4619 = (u8) ((-0xD & arg0->unk4619) | 8);
    arg0->unk460D = (u8) ((-0xD & arg0->unk460D) | 8);
}
