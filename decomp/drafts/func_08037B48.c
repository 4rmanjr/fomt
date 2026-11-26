void *__builtin_new(s32);                           /* extern */
s32 func_08037008(void *, s32, s32, s32, s32);        /* extern */
extern s32 vtable_unk_080E725C;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;

void *func_08037B48(s32 arg0, s32 arg1) {
    GenObj *o;
    s32 five;

    o = __builtin_new(0x44);
    func_08037008(o, arg0, arg1, 0x379, five = 0xC);
    o->unk14 = &vtable_unk_080E725C;
    return o;
}
