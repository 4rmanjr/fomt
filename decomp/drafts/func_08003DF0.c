s32 func_08008920(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[120];
    s32 unk80;
} GenObj;
void func_08003DF0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    GenObj *sp0;
    s32 sp4;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r1;
    GenObj *temp_r0;

    sp0 = arg2;
    sp4 = arg3;
    temp_r2 = (arg2 & 0xFFFFFF00) | (u8) (sp0.unk0 + 8 + (((arg1 * 2) + 1) * 8));
    sp0 = temp_r2;
    var_r1 = ((u32) (temp_r2 << 7) >> 0x17) + 0x80;
    if (*((u8 *)(GenObj *)((u8 *)arg0 + 0x84) + arg1) != 0) {
        var_r1 += 0x40;
    }
    temp_r1 = (0xFE00FFFF & temp_r2) | ((var_r1 & 0x1FF) << 0x10);
    sp0 = temp_r1;
    if ((arg1 == 1) && (arg0->unk80 != 1)) {
        sp0 = (0xFFFFFCFF & temp_r1) | 0x200;
    }
    temp_r0 = func_08008920(arg0) + (((0x7F & arg1) * 8) + 4);
    temp_r0->unk0 = sp0;
    temp_r0->unk4 = (u16) sp0.unk4;
}
