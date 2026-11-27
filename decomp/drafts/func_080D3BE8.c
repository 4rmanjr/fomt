void *__builtin_new(u32);
void *func_08004C48(void *);

typedef struct Obj {
    void (**vt)(void *, int);
} Obj;

void **func_080D3BE8(void **arg0)
{
    void *volatile sp[3];
    void *p;
    void *q;
    Obj *o;

    sp[0] = func_08004C48(__builtin_new(4));
    p = sp[0];
    sp[1] = (void *) sp;
    sp[2] = p;
    sp[0] = 0;
    *arg0 = p;
    q = (void *) sp[0];
    if (q != 0) {
        o = (Obj *) q;
        o->vt[2](o, 3);
    }
    return arg0;
}
