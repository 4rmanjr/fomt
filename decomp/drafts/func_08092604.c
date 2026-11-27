void func_0809152C(void *, s32);

typedef struct GenObj { u8 _pad0[4]; s32 unk4; } GenObj;

void **func_08092604(void **arg0, GenObj *arg1)
{
    void *volatile sp[3];
    void **base;
    void *tmp;
    void *p;
    void (*fn)(void *, s32);

    func_0809152C((void *) sp, arg1->unk4);
    tmp = (void *) sp[0];
    sp[1] = (void *) sp;
    sp[2] = tmp;
    base = (void **) (u32) sp;
    *base = 0;
    *arg0 = tmp;
    p = (void *) sp[0];
    if (p != 0) {
        fn = (void (*)(void *, s32))((void **)*(u32 **)p)[2];
        fn(p, 3);
    }
    return arg0;
}
