s32 func_08032384(void *, s32, s32);
s32 func_08035978(void *);

typedef struct ObjV {
    u8 _pad[0x28];
    void *f28;
    u8 _pad28[0x10];
    void *f3C;
} ObjV;
typedef struct GenObj {
    u8 _b0[0xa];
    s16 unkA;
    s16 _c;
    s16 unkE;
    u8 _d[4];
    ObjV *unk14;
    u8 _e[0x27];
    u8 unk3F;
} GenObj;
void func_08035A48(GenObj *arg0, GenObj *arg1) {
    register GenObj *a4 __asm__("r4");
    register GenObj *a3 __asm__("r3");
    s32 sA;
    s32 sE;
    s32 var_r0;
    s32 var_r0_2;
    u16 w4;
    u16 w0;
    register s32 b __asm__("r1");
    register s32 u __asm__("r0");

    a4 = arg0;
    a3 = arg1;
    w4 = *(u16 *)((u8 *)a4 + 4);
    w0 = *(u16 *)a3;
    if (w4 == ((u32)(w0 << 0x16) >> 0x16)) {
        sA = a4->unkA;
        b = *(u8 *)((u8 *)a3 + 1) >> 2;
        u = *(u16 *)((u8 *)a3 + 2);
        u &= 0x3FF;
        u <<= 6;
        var_r0 = (s16)(u | b) - sA;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0x97) {
            sE = a4->unkE;
            b = *(u8 *)((u8 *)a3 + 3) >> 2;
            u = *(u16 *)((u8 *)a3 + 4);
            u &= 0x3FF;
            u <<= 6;
            var_r0_2 = (s16)(u | b) - sE;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
            if (var_r0_2 <= 0x6F) {
                if ((func_08035978(a4) << 0x18) == 0) {
                    if ((((s32 (*)(void *))(a4->unk14->f28))(a4) << 0x18) == 0) {
                        func_08032384(a4, 2, 0);
                        a4->unk3F = 0x78;
                        ((void (*)(void *, s32))(a4->unk14->f3C))(a4, 1);
                    }
                }
            }
        }
    }
}
