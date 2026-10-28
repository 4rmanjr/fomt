s32 GetAmount__C9ToolStack(s32 *);                    /* extern */
u16 GetIconId__C4Tool();                            /* extern */
s32 GetToolAt__8RucksackUi(s32, u32);               /* extern */
s8 GetTool__C9ToolStack(s32 *);                       /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                      /* extern */
s32 func_080CB304(s32, u32, s32 *, u16);                /* extern */
s32 func_080CBAF0(s32, s32 *, u16, s32);                /* extern */
s32 memcpy(s32 *, s32, s32);                            /* extern */
extern s32 gUnk_086678A0;

typedef struct GenObj {
    u8 _pad0[9];
    s32 unk9;
    u8 _padD[107];
    s32 unk78;
    u8 _pad7C[128];
    s32 unkFC;
    u8 _pad100[4];
    s32 unk104;
} GenObj;
typedef struct {
    s32 unk0;
    u8 tool[2];
    u8 _pad6[2];
    s8 unk8;
    u8 unk9;
    u8 _padA[2];
} Sp;
void func_080926A4(GenObj *arg0, u32 arg1) {
    Sp sp;
    s32 temp_r5;
    u16 temp_r4;
    u16 temp_r4_2;
    u32 var_r5;

    var_r5 = 0;
    if (arg1 > 0U) {
        do {
            memcpy((s32 *)sp.tool, GetToolAt__8RucksackUi(arg0->unk104, var_r5), 2);
            if ((IsEmpty__C9ToolStack((s32 *)sp.tool) << 0x18) == 0) {
                sp.unk8 = GetTool__C9ToolStack((s32 *)sp.tool);
                temp_r4 = GetIconId__C4Tool();
                sp.unk0 = GetAmount__C9ToolStack((s32 *)sp.tool);
                func_080CB304(arg0->unk78, var_r5, &gUnk_086678A0, temp_r4);
            }
            var_r5 += 1;
        } while (var_r5 < arg1);
    }
    if ((IsEmpty__C9ToolStack((s32 *)arg0->unkFC) << 0x18) == 0) {
        sp.unk9 = GetTool__C9ToolStack((s32 *)arg0->unkFC);
        temp_r4_2 = GetIconId__C4Tool();
        temp_r5 = arg0->unk78;
        func_080CBAF0(temp_r5, &gUnk_086678A0, temp_r4_2, GetAmount__C9ToolStack((s32 *)arg0->unkFC));
    }
}
