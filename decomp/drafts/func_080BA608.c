s32 func_080088CC();                                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[1936];
    void *unk7A4;
    void *unk7A8;
    u8 _pad7AC[208];
    void *unk87C;
    void *unk880;
    u8 _pad884[152];
    void *unk91C;
    void *unk920;
    u8 _pad924[525];
    s32 unkB31;
} GenObj;
void func_080BA608(GenObj *arg0) {
    u8 temp_r1;

    if (8 & func_080088CC()) {
        func_08008B6C(arg0 + 0x714, 0xB8);
        temp_r1 = arg0->unkB31;
        if (temp_r1 != 0) {
            arg0->unkB31 = 0U;
            arg0->unk7A4->unk10 = 0x100;
            arg0->unk7A8->unk10 = 0x100;
            arg0->unk87C->unk10 = 0x100;
            arg0->unk880->unk10 = 0x100;
            arg0->unk91C->unk10 = 0x100;
            arg0->unk920->unk10 = 0x100;
            return;
        }
        arg0->unk7A4->unk10 = (s16) temp_r1;
        arg0->unk7A8->unk10 = (s16) temp_r1;
        arg0->unk87C->unk10 = (s16) temp_r1;
        arg0->unk880->unk10 = (s16) temp_r1;
        arg0->unk91C->unk10 = (s16) temp_r1;
        arg0->unk920->unk10 = (s16) temp_r1;
        arg0->unkB31 = 1U;
    }
}
