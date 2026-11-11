s32 func_08007EA8(void *);
u32 func_080D7568(u8 *, u32);

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[0x7B];
    u8 unk80;
} GenObj;

s32 func_08008020(GenObj *arg0, u32 arg1)
{
    register u8 b __asm__("r5");
    s32 i;
    u8 *p;
    u32 r;
    s32 flag;
    u32 v;

    if (arg1 <= 9U) {
        i = 0;
        p = (u8 *) arg0 + 4;
        do {
            b = *p;
            if (b == 0) {
                r = func_080D7568(p, arg1);
                flag = 0;
                if (r <= 0x1FFU) {
                    flag = 1;
                }
                if (flag != 0) {
                    arg0->unk1 = b;
                    v = 0;
                    if (arg0->unk4 != 0) {
                        v = (u32) (0 - arg0->unk80) >> 0x1F;
                    }
                    arg0->unk0 = (u8) v;
                    return (i << 9) | r;
                }
            }
            p += 0x7C;
            i += 1;
        } while (i <= 1);
    } else if (arg1 == 0xA) {
        if (arg0->unk1 != 0) {
            func_08007EA8(arg0);
            return 0;
        }
    }
    return 0x400;
}
