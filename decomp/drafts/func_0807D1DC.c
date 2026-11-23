s32 __4ToolUi(s32 *, s32);                             /* extern */
s32 *GetDesc__C4Tool(s32 *);                           /* extern */
s32 func_080CABEC(s32, s32);                         /* extern */
extern s32 gUnk_080FDDD8;

void func_0807D1DC(void *arg0, s32 arg1) {
    s32 sp0;
    s32 idx;
    s32 *e;
    u8 *base;

    base = (u8 *) &gUnk_080FDDD8;
    idx = *(s32 *) (u8 *) ((arg1 << 2) + (s32) arg0 + 0x2A8);
    e = (s32 *) (base + (idx << 3));
    __4ToolUi(&sp0, *e);
    func_080CABEC((s32) arg0, (s32) GetDesc__C4Tool(&sp0));
}
