void sub_080D8178(void *, s32);

typedef struct GenObj { u8 _pad0[4]; s32 unk4; } GenObj;

void **func_08012028(void **arg0, GenObj *arg1)
{
    void *volatile sp[3];
    void *tmp;
    void *p;
    void (*fn)(void *, s32);

    sub_080D8178((void *) sp, arg1->unk4);
    tmp = (void *) sp[0];
    sp[1] = (void *) sp;
    sp[2] = tmp;
    *(void **)((u8 *) sp + 0) = 0;
    *arg0 = tmp;
    p = (void *) sp[0];
    if (p != 0) {
        fn = (void (*)(void *, s32))((void **)*(u32 **)p)[2];
        fn(p, 3);
    }
    return arg0;
}
