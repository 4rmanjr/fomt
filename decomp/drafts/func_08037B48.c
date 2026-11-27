s32 __builtin_new(s32);                             /* extern */
s32 func_08037008();                                /* extern */

extern u32 vtable_unk_080E725C[];

typedef struct Obj44 {
    u8 _pad0[0x14];
    void *vt;       /* 0x14 */
} Obj44;

void *func_08037B48(void *arg0, void *arg1) {
    Obj44 *o;

    o = (Obj44 *) __builtin_new(0x44);
    func_08037008(o, arg0, arg1, 0x379, 0xc);
    o->vt = (void *) vtable_unk_080E725C;
    return o;
}
