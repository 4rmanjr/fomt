s32 SetLocation__7AEntityUiii(void *, s32, s32, s32); /* extern */
s32 func_08034180(void *, s32, s32, s32);             /* extern */
s32 func_0809E994(s32, s32);                           /* extern */
s32 method_0809E7FC__13HarvestSprite(s32, s32 *);       /* extern */
s32 smethod_08009ADC__4Farm(s32 *);                     /* extern */
s32 smethod_08009AE8__4Farm(s32 *);                     /* extern */

typedef struct Ret08034940 {
    u8 _pad0[10];
    u16 unkA;
} Ret08034940;

typedef struct Vtbl08034940 {
    u8 _pad0[0x144];
    Ret08034940 *(*unk144)(void *arg0);
} Vtbl08034940;

typedef struct Obj08034940 {
    Vtbl08034940 *unk0;
} Obj08034940;

typedef struct XY08034940 {
    s16 x;
    s16 y;
} XY08034940;

typedef struct GenObj {
    Obj08034940 *unk0;   /* +0x00 */
    u16 unk4;            /* +0x04 */
    u8 _pad6[4];         /* +0x06 */
    s16 unkA;            /* +0x0A */
    u8 _padC[0x24];      /* +0x0C */
    u8 unk30;            /* +0x30 */
    u8 _pad31[3];        /* +0x31 */
    s32 unk34;           /* +0x34 */
    s32 unk38;           /* +0x38 */
} GenObj;

s32 func_08034940(GenObj *arg0) {
    XY08034940 a;
    XY08034940 b;
    s32 tmp;
    s32 y;
    Ret08034940 *r;
    u16 t;
    u32 lo;
    s32 v;

    r = arg0->unk0->unk0->unk144(arg0->unk0);
    t = r->unkA;
    lo = ((u32)t << 27) >> 27;
    if ((lo <= 5U) || (u32)(((lo - 6) * 0x3C) + (((u32)t << 21) >> 26)) >= (u32)(arg0->unk30 + 0x385)) {
        s32 x = arg0->unk4;
        if (x == 17) {
            goto L17;
        }
        if (x <= 17) {
            goto Lend;
        }
        if (x != 37) {
            goto Lend;
        }
        smethod_08009ADC__4Farm((s32 *)&a);
        SetLocation__7AEntityUiii(arg0, 2, a.x, a.y);
        goto Lend;
L17:
        smethod_08009AE8__4Farm((s32 *)&b);
        SetLocation__7AEntityUiii(arg0, 2, b.x, b.y);
Lend:
        func_0809E994(arg0->unk38, arg0->unk30);
        method_0809E7FC__13HarvestSprite(arg0->unk34, &tmp);
        y = arg0->unkA;
        if (y == 0x168) {
            v = 1;
        } else if (y <= 0x167) {
            v = 3;
        } else {
            v = 2;
        }
        func_08034180(arg0, 1, v, 0x8000);
        return 1;
    }
    return 0;
}

