/* MATCHED worker-07ee: prolog=str r2 dulu (volatile store) + mov r0 via
   empty-asm matching-constraint "0" (tahan PRE-hoist). Blok1: temp pin r0,
   pb=&sp4 (hoist add r3), hoist v (ldr r2 dulu). L36: s0 pin r0, c3 pin r3,
   lim2 (urutan ldr/mov), -= bertahap (subs,subs dulu). */
s32 func_08007EA8(void *);                            /* extern */
s32 func_080D7118(void *, u32, u32);                  /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[123];
    u8 unk80;
} GenObj;
void func_08007EE8(GenObj *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 *pb;
    u32 v;
    register u32 temp_r0 asm("r0");
    register u32 temp_r2 asm("r2");
    register u32 var_r1 asm("r1");
    register u32 s0 asm("r0");
    register u32 c3 asm("r3");
    u32 lim2;
    u32 s;
    u32 var_r1_2;
    register u32 t asm("r0");

    *(volatile u32 *)&sp0 = arg2;
    if (arg1 > 0x3FFU) {
        return;
    }
    __asm__ ("" : "=r" (t) : "0" (arg2));
    if (t == 0) {
        return;
    }
    if ((arg1 == 0) && (t > 0x3FFU)) {
        func_08007EA8(arg0);
        return;
    }
    if (arg1 <= 0x1FFU) {
        temp_r0 = (0x1FF + 1) - arg1;
        sp4 = temp_r0;
        pb = &sp4;
        s = sp0;
        var_r2 = &sp0;
        if (s > temp_r0) {
            var_r2 = pb;
        }
        v = *var_r2;
        func_080D7118((void *)((u8 *)arg0 + 4), arg1, v);
    }
    s0 = sp0;
    temp_r2 = arg1 + s0;
    c3 = 0x200U;
    if (temp_r2 > c3) {
        lim2 = 0x1FFU;
        var_r1 = 0;
        if (arg1 > lim2) {
            var_r1 = arg1 + 0xFFFFFE00;
        }
        temp_r2 -= c3;
        temp_r2 -= var_r1;
        func_080D7118((void *)((u8 *)arg0 + 0x80), var_r1, temp_r2);
    }
    var_r1_2 = 0;
    if (arg0->unk4 != 0) {
        var_r1_2 = (u32) (0 - arg0->unk80) >> 0x1F;
    }
    arg0->unk0 = var_r1_2;
    arg0->unk1 = 0;
}
