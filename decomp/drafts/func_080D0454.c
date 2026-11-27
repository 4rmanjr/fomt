s32 func_080D0BA8(s32 *);                          /* extern */

extern s32 *gUnk_03000420;

typedef struct SP_D0454 {
    s32 v;          /* 0x0 */
    u8 _pad4[12];   /* 0x4 */
    void *ptr;      /* 0x10 */
    u8 _pad14[4];   /* 0x14 */
    s32 num;        /* 0x18 */
    u16 tail;       /* 0x1C */
    u8 _pad1E[2];
} SP_D0454;

void func_080D0454(void) {
    SP_D0454 sp0;

    *(s32 *) ((u8 *) gUnk_03000420 + 0x14) = 1;
    sp0.v = 1;
    func_080D0BA8((s32 *) &sp0);
    sp0.v = 3;
    sp0.ptr = (void *) ((u8 *) gUnk_03000420 + 0x24);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((s32 *) &sp0);
}
