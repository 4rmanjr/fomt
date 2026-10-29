s32 func_080324BC(void *, void *, s32, s32); /* extern */
s32 func_080A4A00(void *, s32, u16, void *); /* extern */
extern s32 gUnk_080F14B8[];
extern u16 gUnk_080F14F0[];
extern s32 vtable_unk_080E6904;

typedef struct Vtbl {
    u8 _pad0[0x68];
    s32 (*unk68)(void *arg0);
} Vtbl;

typedef struct Obj {
    Vtbl *unk0;
} Obj;

typedef struct Arg1 {
    Obj *unk0;
    u8 _pad4[0x2C];
    u8 unk30;
} Arg1;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[0xC8];
    u16 unkD0;
} GenObj;

struct Stk {
    s32 a, b, c;
};

/* ATTEMPT-NOTE worker-34a1:fp ke registri eksplisit (r4=x, r5=p) agar alokasi
   cocok; volatile u8 + struct Stk membentuk store stack persis pola ref
   (str,str,str,add+strb); prototype 4-arg meniru idiom func_08035B38. */
void *func_08034A14(GenObj *arg0, Arg1 *arg1) {
    register Arg1 *x asm("r4") = arg1;
    s32 *b = gUnk_080F14B8;
    register u8 *p asm("r5") = &x->unk30;
    s32 v1 = b[*p];
    s32 zero;
    Obj *o;
    s32 temp;
    u16 *hbase;
    u8 idx2;
    u16 h;
    Obj *o2;
    s32 *v2p;
    void *dst;
    volatile u8 *bptr;
    struct Stk w;
    volatile u8 flag;
    zero = 0;
    w.a = zero; w.b = 4; w.c = zero; flag = zero;
    func_080324BC(arg0, arg1, 3, v1);
    arg0->unk4 = &vtable_unk_080E6904;
    o = x->unk0;
    temp = o->unk0->unk68(o);
    hbase = gUnk_080F14F0;
    idx2 = *p;
    h = hbase[idx2];
    o2 = x->unk0;
    v2p = &b[idx2];
    dst = (u8 *)arg0 + 0x8C;
    w.a = 2; w.b = *v2p;
    bptr = (volatile u8 *)&w.c;
    *bptr = zero;
    func_080A4A00(dst, temp, h, o2);
    arg0->unkD0 = 0;
    return arg0;
}
