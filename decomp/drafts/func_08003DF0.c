s32 func_08008920(s32);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    u8 _pad8[120];
    s32 unk80;
} GenObj;
void func_08003DF0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp;
    u32 var;
    u8 *t;
    GenObj *p;
    s32 spbuf[2];
    s32 mask;
    u8 ch;
    u32 sh;
    u32 out;
    register u32 sh2 __asm__("r0");
    u8 *sp2;
    s32 rcall;

    spbuf[0] = arg2;
    spbuf[1] = arg3;
    var = *(u8 *)spbuf;
    var += 8;
    var += (((arg1 * 2) + 1) * 8);
    var <<= 0x18;
    var >>= 0x18;
    mask = 0xFFFFFF00;
    temp = mask & *(volatile s32 *)spbuf;
    temp |= var;
    spbuf[0] = temp;
    sh = (u32) (temp << 7) >> 0x17;
    t = (u8 *)arg0 + 0x84;
    ch = *(t + arg1);
    var = sh + 0x80;
    if (ch == 0) {
        goto skip_add;
    }
    var += 0x40;
skip_add:
    var &= 0x1FF;
    sh2 = var << 0x10;
    out = sh2 | (0xFE00FFFF & temp);
    spbuf[0] = out;
    if (arg1 != 1) {
        goto skip_set;
    }
    if (arg0->unk80 == 1) {
        goto skip_set;
    }
    sh2 = 0xFFFFFCFF & out;
    sh2 |= 0x200;
    spbuf[0] = sh2;
skip_set:
    rcall = func_08008920((s32) arg0);
    sp2 = (u8 *) spbuf;
    p = (GenObj *) ((u8 *) rcall + (((0x7F & arg1) * 8) + 4));
    *(s32 *)p = *(s32 *)sp2;
    *(u16 *)((u8 *)p + 4) = *(u16 *)(sp2 + 4);
}
