s32 func_08008920(s32);                             /* extern */

typedef struct Obj3E88 {
    u8 _pad0[0x34];
    u32 unk34;
    u16 unk38;
} Obj3E88;

void func_08003E88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    register s32 var_r4 __asm__("r4");
    register s32 t1 __asm__("r1");
    register s32 t2 __asm__("r0");
    register u32 masked __asm__("r2");
    register u32 maskA __asm__("r0");
    u32 st[2];
    u16 *p1;
    Obj3E88 *temp_r0;

    var_r4 = arg1;
    if (var_r4 == 1) {
        var_r4 = 0;
    }
    st[0] = arg2;
    st[1] = arg3;
    t1 = *(u8 *) st;
    t1 += 8;
    t2 = ((var_r4 * 2) + 1) * 8;
    t1 += t2;
    t1 = (u8) t1;
    maskA = 0xFFFFFF00;
    __asm__ volatile("" : "+m" (st[0]));
    masked = st[0];
    masked &= maskA;
    masked |= t1;
    t1 = (masked << 7) >> 0x17;
    t1 += 0x10;
    t1 &= 0x1FF;
    t1 <<= 0x10;
    st[0] = (masked & 0xFE00FFFF) | t1;
    temp_r0 = (Obj3E88 *) func_08008920(arg0);
    p1 = (u16 *) st;
    __asm__ volatile("" : "+r" (p1));
    temp_r0->unk34 = st[0];
    temp_r0->unk38 = p1[2];
}
