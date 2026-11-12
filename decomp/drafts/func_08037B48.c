void *__builtin_new(s32);                           /* extern */
s32 func_08037008(void *, s32, s32, s32, s32);        /* extern */
extern s32 vtable_unk_080E725C;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;

void *func_08037B48(s32 arg0, s32 arg1) {
    GenObj *o;
    s32 tag;
    s32 n;

    o = __builtin_new(0x44);
    tag = 0x379;
    n = 0xC;
    func_08037008(o, arg0, arg1, tag, n);
    o->unk14 = &vtable_unk_080E725C;
    return o;
}
