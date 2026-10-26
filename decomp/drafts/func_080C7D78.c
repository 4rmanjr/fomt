s32 func_080088CC();                                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[1420];
    void *unk5A0;
    u8 _pad5A4[76];
    void *unk5F0;
    u8 _pad5F4[308];
    void *unk728;
    u8 _pad72C[376];
    s32 unk8A4;
} GenObj;
void func_080C7D78(GenObj *arg0) {
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
