void func_08008FE4(u8 *, u8 *);                        /* extern */

typedef struct Range {
    u8 *unk0;
    u8 *unk4;
} Range;
typedef struct GenObj {
    u8 _pad0[12];
    Range *unkC;
} GenObj;
s32 func_080D782C(GenObj *arg0) {
    Range *t;
    u8 *start;
    u8 *end;
    s32 flag;
    /* pin r0: samakan alokasi register agbcc aslinya (ldr r0 + mov r2,r0) */
    register u8 *cur asm ("r0");
    u8 *saved;
    u8 *lim;

    t = arg0->unkC;
    flag = 0;
    start = t->unk0;
    end = t->unk4;
    if (start == end) {
        flag = 1;
    }
    if (flag == 0) {
        func_08008FE4(start, start + (((end - start) >> 4) << 4));
        cur = t->unk0;
        saved = cur;
        lim = t->unk4;
        if (saved != lim) {
            do {
                cur += 0x10;
            } while (cur != lim);
        }
        t->unk4 = saved;
    }
    return 0;
}
