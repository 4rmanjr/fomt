s32 GetDesc__C4Tool(s32 *);                           /* extern */
s32 __4ToolUi(s32 *, s32);                              /* extern */
s32 func_080CABEC(s32, s32);                          /* extern */
extern s32 gUnk_080FED8C;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} GenObj;
void func_08082C14(s32 arg0, s32 arg1) {
s32 sp0;
s32 sp14;
    void *temp_r2;

    temp_r2 = (arg1 * 0x14) + &gUnk_080FED8C;
    sp0 = (s32) temp_r2->unk0;
    sp0.unk4 = (s32) temp_r2->unk4;
    sp0.unk8 = (s32) temp_r2->unk8;
    sp0.unkC = (s32) temp_r2->unkC;
    (&sp0 + 0xC)->unk4 = (s32) (temp_r2 + 0xC)->unk4;
    switch (spC) {                                  /* irregular */
    case 1:
        __4ToolUi(&sp14, temp_r2->unk0);
        func_080CABEC(arg0, GetDesc__C4Tool(&sp14));
        return;
    default:
    case 0:
        func_080CABEC(arg0, sp10);
        return;
    }
}
