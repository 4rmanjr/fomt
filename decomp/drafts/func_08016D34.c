typedef struct Vt_08016D34 {
    u8 _pad0[0x3C];
    void (*fn)(void *, s32);
} Vt_08016D34;

typedef struct Obj_08016D34 {
    Vt_08016D34 *vt;
} Obj_08016D34;

void func_08016D34(u8 *arg0, s32 arg1) {
    Obj_08016D34 *o;

    o = *(Obj_08016D34 **)((u8 *)(*(void **)(arg0 + 4)) + 0xA8);
    o->vt->fn(o, arg1);
}
