typedef struct Res_08033800 {
    u8 _pad0[0xA];
    s16 unkA;
    u8 _padC[2];
    s16 unkE;
} Res_08033800;

typedef struct Vtbl_08033800 {
    u8 _pad0[0x44];
    Res_08033800 *(*unk44)(void *, s32);
} Vtbl_08033800;

typedef struct Obj_08033800 {
    u16 unk0;
    u16 unk2;
} Obj_08033800;

Obj_08033800 *func_08033800(Obj_08033800 *arg0, Vtbl_08033800 **arg1, s32 arg2) {
    Res_08033800 *p;
    s32 v;
    s32 a;

    v = (s32) (*arg1)->unk44((void *) arg1, arg2);
    if (v != 0) {
        p = (Res_08033800 *) v;
        a = p->unkA;
        v = p->unkE;
        arg0->unk0 = (u16) a;
    } else {
        arg0->unk0 = (u16) v;
    }
    arg0->unk2 = (u16) v;
    return arg0;
}
