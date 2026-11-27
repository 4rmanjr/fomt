void func_0806DB38(void *, s32);

typedef struct GenObj { u8 _pad0[4]; s32 unk4; } GenObj;

void **func_0806EA30(void **arg0, GenObj *arg1)
{
    void *volatile sp[3];
    void **base;
    void *tmp;
    void *p;
    void (*fn)(void *, s32);

    func_0806DB38((void *) sp, arg1->unk4);
    base = (void **) sp;
    tmp = (void *) sp[0];
    base[1] = (void *) base;
    base[2] = tmp;
    base[0] = 0;
    *arg0 = tmp;
    p = base[0];
    if (p != 0) {
        fn = (void (*)(void *, s32))((void **)*(u32 **)p)[2];
        fn(p, 3);
    }
    return arg0;
}
