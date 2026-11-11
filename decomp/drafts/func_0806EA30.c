void func_0806DB38(void *a, s32 b);

typedef struct Obj {
    void (**vt)(void *, int);
} Obj;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

void **func_0806EA30(void **arg0, GenObj *arg1)
{
    void *volatile sp[3];
    void *tmp;

    func_0806DB38((void *) sp, arg1->unk4);
    tmp = sp[0];
    sp[1] = (void *) sp;
    sp[2] = tmp;
    sp[0] = 0;
    *arg0 = tmp;
    if (sp[0] != 0) {
        Obj *o = (Obj *) sp[0];
        o->vt[2](o, 3);
    }
    return arg0;
}
