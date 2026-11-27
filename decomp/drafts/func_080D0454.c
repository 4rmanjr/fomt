void func_080D0BA8(void *);                        /* extern */

extern void *gUnk_03000420;

typedef struct Cmd20 {
    s32 kind;       /* 0x0 */
    s32 unk4;       /* 0x4 */
    s32 unk8;       /* 0x8 */
    s32 unkC;       /* 0xC */
    void *p;        /* 0x10 */
    s32 unk14;      /* 0x14 */
    s32 n;          /* 0x18 */
    u16 h;          /* 0x1C */
} Cmd20;

void func_080D0454(void) {
    Cmd20 st;

    *(s32 *) ((u8 *) gUnk_03000420 + 0x14) = 1;
    st.kind = 1;
    func_080D0BA8((void *) &st);
    st.kind = 3;
    st.p = (u8 *) gUnk_03000420 + 0x24;
    st.n = 2;
    st.h = 0;
    func_080D0BA8((void *) &st);
}
