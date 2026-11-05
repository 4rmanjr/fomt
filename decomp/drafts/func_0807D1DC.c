s32 GetDesc__C4Tool(s32 *);
s32 __4ToolUi(s32 *, s32);
s32 func_080CABEC(s32, s32);
extern s32 gUnk_080FDDD8;

typedef struct T0807D1DC {
    u8 _pad0[0x2A8];
    s32 unk2A8;
} T0807D1DC;

void func_0807D1DC(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 *entry;
    s32 idx;
    T0807D1DC *t;
    register s32 *gp __asm__("r2");
    register s32 base __asm__("r4");
    base = arg0;
    gp = &gUnk_080FDDD8;
    t = (T0807D1DC *)((u8 *)base + (arg1 << 2) + 0x2A8);
    idx = t->unk2A8;
    entry = (s32 *)((u8 *)gp + (idx << 3));
    __4ToolUi(&sp0, *entry);
    func_080CABEC(base, GetDesc__C4Tool(&sp0));
}
