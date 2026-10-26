s32 func_080088CC();                                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */

void func_080C7D78(void *arg0) {
    s32 temp_r2;

    if (8 & func_080088CC()) {
        func_08008B6C(arg0 + 0x81C, 0xB8);
        temp_r2 = arg0->unk8A4;
        switch (temp_r2) {                          /* irregular */
        case 0:
            arg0->unk8A4 = 1;
            arg0->unk5F0->unk10 = (s16) temp_r2;
            arg0->unk5A0->unk10 = (s16) temp_r2;
            arg0->unk728->unk10 = (s16) temp_r2;
            return;
        case 1:
            arg0->unk8A4 = 0;
            arg0->unk5F0->unk10 = 0x100;
            arg0->unk5A0->unk10 = 0x100;
            arg0->unk728->unk10 = 0x100;
            break;
        }
    }
}
