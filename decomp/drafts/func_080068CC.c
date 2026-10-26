typedef struct GenObj {
    u8 _pad0[17924];
    s32 unk4604;
    s32 unk4605;
    s32 unk4608;
    s32 unk4609;
    s32 unk460A;
    s32 unk460B;
    u8 _pad460F[1];
    s32 unk4610;
    s32 unk4614;
    s32 unk4616;
} GenObj;
void func_080068CC(GenObj *arg0) {
    s32 var_r0;
    s32 var_r1;
    s8 *var_r2;
    u8 var_r1_2;
    u8 var_r2_2;

    arg0->unk4616 = (u16) ((0xFFFFFE00 & arg0->unk4616) | (((arg0->unk4610 * 8) + 0x90) & 0x1FF));
    arg0->unk4614 = 8;
    if ((s32) arg0->unk4605 <= 5) {
        arg0->unk460A = (u16) ((0xFFFFFE00 & arg0->unk460A) | ((arg0->unk4604 * 0x10) & 0x1FF));
        arg0->unk4608 = (s8) ((arg0->unk4605 * 0x10) + 0x20);
        arg0->unk460B = (u8) (0x3F & arg0->unk460B);
        var_r2 = arg0 + 0x4609;
        var_r1 = 0x3F & arg0->unk4609;
        var_r0 = 0x80;
    } else {
        var_r2_2 = 0;
        var_r1_2 = (u8) arg0->unk4604;
        if ((u32) var_r1_2 > 4U) {
            do {
                var_r1_2 -= 5;
                var_r2_2 += 1;
            } while ((u32) var_r1_2 > 4U);
        }
        arg0->unk460A = (u16) ((0xFFFFFE00 & arg0->unk460A) | (((var_r2_2 * 0x50) + 0x18) & 0x1FF));
        arg0->unk4608 = 0x88;
        arg0->unk460B = (u8) ((0x3F & arg0->unk460B) | 0x80);
        var_r2 = arg0 + 0x4609;
        var_r1 = 0x3F & arg0->unk4609;
        var_r0 = 0x40;
    }
    *var_r2 = var_r1 | var_r0;
}
