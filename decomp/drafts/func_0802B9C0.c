s32 func_0802B944();
s32 vfunc_10__7AEntity(void *);
extern s32 vtable_unk_080E65F4;

typedef struct GenObj {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[28];
    u8 unk34;
} GenObj;
void *func_0802B9C0(GenObj *arg0, s32 arg1) {
    register GenObj *a0 __asm__("r4") = arg0;
    u8 *p;
    s32 v0;

    func_0802B944(a0, arg1);
    a0->unk14 = &vtable_unk_080E65F4;
    p = (u8 *)a0 + 0x34;
    __asm__ volatile("" : "+r"(p));
    v0 = 0;
    *p = v0;
    p += 1;
    *p = v0;
    p += 3;
    *p = v0;
    p[1] = v0;
    *(s32 *)(p + 4) = v0;
    *(s32 *)(p + 8) = v0;
    *(s32 *)(p + 12) = v0;
    *(s32 *)(p + 16) = v0;
    *(s32 *)(p + 20) = v0;
    *(s32 *)(p + 24) = v0;
    p += 0x1C;
    *p = v0;
    p += 2;
    *(u16 *)p = v0;
    p += 2;
    *p = v0;
    p += 1;
    *p = v0;
    vfunc_10__7AEntity(a0);
    return a0;
}
