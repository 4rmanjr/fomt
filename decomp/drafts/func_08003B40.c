void *func_08008918();                               /* extern */
s32 func_08008940(s32);                              /* extern */
s32 func_08009300(s32 *, void *);                    /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);             /* extern */
s32 func_080094B8(void *, s32);                      /* extern */
s32 func_080087C8(s32);                              /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct Inner {
    u8 _pad0[0x10];
    void (*unk10)(void *, void *);
} Inner;

typedef struct Obj {
    u8 _pad0[8];
    Inner *unk8;
} Obj;

typedef struct Sp4 {
    u16 f0;
    u8 _pad2[2];
    s32 unk0;
    s32 unk4;
    s32 *unk8;
    s32 tail;
} Sp4;

void func_08003B40(s32 arg0) {
    register s32 a __asm__("r5");
    Sp4 sp4;
    s32 *p4;
    void *t1;
    void *t2;
    s32 zero;

    a = arg0;
    t1 = func_08008918();
    sp4.f0 = 0x3F;
    *(u16 *) ((u8 *) t1 + 0x50) = 0x3F;
    t2 = func_08008918(a);
    p4 = &sp4.unk0;
    zero = 0;
    p4[0] = zero;
    p4[1] = zero;
    sp4.unk8 = &vtable_unk_080E5B80;
    func_08009300(&sp4.tail, t2);
    func_0800934C(&sp4.tail, 0x889, 1, 1);
    ((Obj *) func_08008940(a))->unk8->unk10((void *) 0, p4);
    goto check;
loop:
    func_080087C8(a);
check:
    if (sp4.unk0 != 0) {
        goto loop;
    }
    func_080094B8(p4, 2);
}
