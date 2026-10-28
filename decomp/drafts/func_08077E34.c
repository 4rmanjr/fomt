void func_08077E34(s32 arg0, s32 arg1, u16 *arg2) {
    u16 *src;
    u16 *dst;
    u32 base;
    u32 ofs;
    u32 x;
    u32 y;
    u32 y_next;

    y = 0;
    src = arg2;
    base = arg1 << 11;
    do {
        x = 0;
        ofs = y << 6;
        y_next = y + 1;
        ofs += 0x06000000;
        dst = (u16 *)(base + ofs);
loop:
        *dst = *src;
        src += 1;
        dst += 1;
        x += 1;
        if (x <= 0x1DU) {
            goto loop;
        }
        y = y_next;
    } while (y <= 0xCU);
}
