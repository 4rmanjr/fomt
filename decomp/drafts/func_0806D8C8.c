s32 __builtin_new(s32);                             /* extern */
void *func_08069F14(void *, void **, void *, void *); /* extern */

extern u32 vtable_unk_080E7AB4[];

typedef struct Vt {
    void *f0;       /* 0x0 */
    void *f4;       /* 0x4 */
    void (*f8)(void *, s32); /* 0x8 */
} Vt;

typedef struct GenObj {
    Vt *vt;         /* 0x0 */
    void *unk4;     /* 0x4 */
} GenObj;

void *func_0806D8C8(GenObj *arg0, void **arg1, void *arg2, void *arg3) {
    s32 slot;
    void *old;

    arg0->vt = (Vt *) vtable_unk_080E7AB4;
    old = *arg1;
    *arg1 = 0;
    slot = (s32) old;
    arg0->unk4 = func_08069F14((void *) __builtin_new(0x4178), (void **) &slot, arg2, arg3);
    if (*arg1 != 0) {
        ((GenObj *) *arg1)->vt->f8(*arg1, 3);
    }
    return arg0;
}
