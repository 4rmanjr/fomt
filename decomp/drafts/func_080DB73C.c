s32 __builtin_new(s32);                             /* extern */
void *func_0808AB38(s32, s32 *, s32);                        /* extern */

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} UnkStruct;

typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;

typedef struct {
    Vtbl *vtbl;
} Obj;

typedef struct {
    Obj * volatile sp0;
    s32 sp4;
    Obj **sp8;
    Obj * volatile spC;
} Frame;

Obj **func_080DB73C(Obj **arg0, UnkStruct *arg1) {
    Frame f;
    Obj *p;
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    f.sp4 = temp_r0;
    temp_r0_2 = func_0808AB38(__builtin_new(0xC), &f.sp4, arg1->unk8);
    f.sp0 = temp_r0_2;
    f.sp8 = (Obj **) &f.sp0;
    f.spC = temp_r0_2;
    *f.sp8 = 0;
    *arg0 = temp_r0_2;
    p = f.sp0;
    if (p != 0) {
        p->vtbl->unk8(p, 3);
    }
    return arg0;
}
