s32 func_08069F14(void *, s32 *, s32, s32);           /* extern */
void *__builtin_new(s32);                             /* extern */
extern s32 vtable_unk_080E7AB4;

typedef struct Vt_6D8C8 {
    u8 _pad0[8];
    void (*unk8)();
} Vt_6D8C8;

typedef struct Obj_6D8C8 {
    Vt_6D8C8 *unk0;
} Obj_6D8C8;

typedef struct GenObj_6D8C8 {
    void *unk0;
    s32 unk4;
} GenObj_6D8C8;

void *func_0806D8C8(GenObj_6D8C8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 *hp;
    s32 old;
    Obj_6D8C8 *o;

    hp = arg1;
    arg0->unk0 = &vtable_unk_080E7AB4;
    *hp = (old = *hp, 0);
    arg0->unk4 = func_08069F14(__builtin_new(0x4178), &old, arg2, arg3);
    o = (Obj_6D8C8 *) *hp;
    if (o != 0) {
        o->unk0->unk8(o, 3);
    }
    return arg0;
}
