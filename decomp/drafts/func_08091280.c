s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 GetToolAt__8RucksackUi(s32, s32);                 /* extern */
s8 GetTool__C9ToolStack(s32);                       /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 *func_080CF05C(void *, void *, s8 *, s32);        /* extern */
s32 *func_080CF67C(void *, void *, s32);              /* extern */
s32 *func_080CFA38(void *, void *);                   /* extern */
extern s32 gUnk_08100168;

typedef struct GenObj {
    u8 _pad0[9];
    s32 unk9;
    u8 _padD[139];
    s32 unk98;
    u8 _pad9C[96];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
} GenObj;
typedef struct {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    s8 unk9;
    u8 _padA[2];
} Sp128;
void func_08091280(GenObj *arg0, s32 arg1) {
    Sp128 sp;
    s32 *var_r0;
    s32 *var_r8;
    s32 temp_r4;
    s32 temp_tool;
    void *temp_r5;

    var_r8 = 0;
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x98);
    arg0->unk98 = 0;
    if (arg1 != 0) {
        if (arg1 != 9) {
            if (arg1 <= 8) {
                temp_r4 = arg0->unk104;
                temp_tool = GetToolAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
                if ((IsEmpty__C9ToolStack(temp_tool) << 0x18) == 0) {
                    sp.unk9 = GetTool__C9ToolStack(temp_tool);
                    var_r0 = func_080CF05C(arg0, (GenObj *)((u8 *)arg0 + 0x98), &sp.unk9, 0);
                    goto block_12;
                }
            } else {
                temp_r4 = arg0->unk104;
                sp.unk0 = *GetItemAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
                if ((IsEmpty__C12RucksackItem(&sp.unk0) << 0x18) == 0) {
                    sp.unk4 = sp.unk0;
                    var_r0 = func_080CFA38(arg0, temp_r5);
                    goto block_12;
                }
            }
        } else if ((func_0800F190(arg0->unk100) << 0x18) == 0) {
            var_r0 = func_080CF67C(arg0, temp_r5, arg0->unk100);
            goto block_12;
        }
    } else if ((IsEmpty__C9ToolStack((s32 *)arg0->unkFC) << 0x18) == 0) {
        sp.unk8 = GetTool__C9ToolStack((s32 *)arg0->unkFC);
        var_r0 = func_080CF05C(arg0, temp_r5, (s8 *)&sp.unk8, 1);
block_12:
        var_r8 = var_r0;
    }
    if (var_r8 != 0) {
        func_08050DC8((GenObj *)((u8 *)arg0 + 0x80), var_r8, 0, 0);
        return;
    }
    func_08050DC8((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100168, 0, 0);
}
