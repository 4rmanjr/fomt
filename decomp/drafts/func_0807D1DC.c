s32 GetDesc__C4Tool(s32 *);                           /* extern */
s32 __4ToolUi(s32 *, s32);                              /* extern */
s32 func_080CABEC(s32, s32);                          /* extern */
extern s32 gUnk_080FDDD8;

void func_0807D1DC(s32 arg0, s32 arg1) {
s32 sp0;

    __4ToolUi(&sp0, *((((arg1 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FDDD8));
    func_080CABEC(arg0, GetDesc__C4Tool(&sp0));
}
