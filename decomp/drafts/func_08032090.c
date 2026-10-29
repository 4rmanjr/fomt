typedef struct { u16 unk0; u16 unk2; } EItem;
typedef struct { EItem *ptr; u16 count; } EPair;
typedef struct { u8 _00[12]; void (*unkC)(EPair *, void **, s32); } ETab;
s32 func_08032090(void **arg0, s32 arg1) {
    EPair tmp;
    EPair tmp2;
    register EPair *pp __asm__("r2");
    register EPair *pt0 __asm__("r0");
    register u32 sum __asm__("r4");
    register u32 i __asm__("r3");
    register u32 count __asm__("r1");
    register u32 lim __asm__("r2");
    EItem *p;
    EItem *q;
    register ETab *t __asm__("r1");
    register void **a4 __asm__("r4") = arg0;
    register s32 a2 __asm__("r2") = arg1;
    t = (ETab *)*a4;
    pt0 = &tmp;
    t->unkC(pt0, a4, a2);
    tmp2 = tmp;
    pp = &tmp2;
    sum = 0;
    i = 0;
    p = tmp2.ptr;
    count = 0;
    if (p != 0)
        count = pp->count;
    lim = count;
    if (sum < lim) {
        q = p;
        do {
            sum += q->unk2;
            q++;
            i++;
        } while (i < lim);
    }
    return sum;
}
