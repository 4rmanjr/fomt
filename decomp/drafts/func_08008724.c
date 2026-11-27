void *func_08008AE0(void *);                        /* extern */
s32 func_08008AF0(void *);                            /* extern */
s32 func_080098AC(s32 *, s32);                        /* extern */
extern s32 vtable_unk_080E5AF0;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[32];
    u16 unk34;
} GenObj;

typedef struct S_08008724Arg {
    s32 unk0;   /* 0x0 */
    s32 unk4;   /* 0x4 */
    u8 *unk8;   /* 0x8 */
    u8 *unkC;   /* 0xC */
} S_08008724Arg;

void func_08008724(void **arg0) {
    S_08008724Arg buf;
    GenObj *temp_r4;
    void *base;
    u8 *p34;
    s32 zero;
    GenObj *temp_r0;

    temp_r4 = *arg0;
    p34 = (u8 *) temp_r4;
    p34 += 0x34;
    zero = 0;
    *(u16 *) p34 |= 0x80;
    buf.unk0 = zero;
    buf.unk4 = zero;
    buf.unk8 = (u8 *) &vtable_unk_080E5AF0;
    buf.unkC = p34;
    base = (u8 *) temp_r4 + 0x490;
    temp_r0 = func_08008AE0(base);
    ((void (*)(void *, S_08008724Arg *)) temp_r0->unk8->unk10)(temp_r0, &buf);
    func_08008AF0(base);
    func_080098AC((s32 *) &buf, 2);
}
