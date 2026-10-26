s32 GetAmount__C9ToolStack(s32 *);                    /* extern */
u16 GetIconId__C4Tool();                            /* extern */
s32 GetToolAt__8RucksackUi(s32, u32);               /* extern */
s32 GetTool__C9ToolStack(s32 *);                      /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_080CB304(s32, u32, s32 *, u16);                /* extern */
s32 func_080CBAF0(s32, s32 *, u16, s32);                /* extern */
s32 memcpy(s32 *, s32, s32);                            /* extern */
extern s32 gUnk_086678A0;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unk9;
    u8 _padD[107];
    s32 unk78;
    u8 _pad7C[128];
    s32 unkFC;
    u8 _pad100[4];
    s32 unk104;
} GenObj;
void func_0808BCD0(GenObj *arg0, u32 arg1) {
    GenObj *sp0;
s32 sp4;
    s8 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    u16 temp_r6;
    u16 temp_r6_2;
    u32 var_r7;

    var_r7 = 0;
    if (arg1 != 0) {
        do {
            memcpy(&sp4, GetToolAt__8RucksackUi(arg0->unk104, var_r7), 2);
            if ((IsEmpty__C9ToolStack(&sp4) << 0x18) == 0) {
                sp8 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
                temp_r6 = GetIconId__C4Tool();
                temp_r4 = arg0->unk78;
                sp0 = GetAmount__C9ToolStack(&sp4);
                func_080CB304(temp_r4, var_r7, &gUnk_086678A0, temp_r6);
            }
            var_r7 += 1;
        } while (var_r7 < arg1);
    }
    if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) == 0) {
        sp0.unk9 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(arg0->unkFC));
        temp_r6_2 = GetIconId__C4Tool();
        temp_r4_2 = arg0->unk78;
        func_080CBAF0(temp_r4_2, &gUnk_086678A0, temp_r6_2, GetAmount__C9ToolStack(arg0->unkFC));
    }
}
