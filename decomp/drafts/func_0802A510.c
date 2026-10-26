u16 GetIconId__C4Tool(s8 *);                        /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0805E850(void *, s32, u16);                  /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    struct GenObj *unk14;
    u8 _pad18[32];
    s32 unk38;
    u8 _pad3C[76];
    s32 unk88;
    u8 _pad8C[60];
    struct GenObj *unkC8;
} GenObj;
void func_0802A510(GenObj *arg0) {
    s8 sp0;
    s32 temp_r4;
    u16 temp_r4_2;
    GenObj *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r5;

    temp_r0 = (GenObj *)((u8 *)arg0 + 0x88);
    arg0->unk88 = 1;
    temp_r0->unk1 = 0;
    temp_r0->unk4 = 0xFFF80000;
    temp_r0->unk8 = 0;
    temp_r0->unk14 = 0x110000;
    temp_r5 = arg0->unk10;
    if (temp_r5 != 0) {
        temp_r4 = arg0->unk38;
        sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
        temp_r4_2 = GetIconId__C4Tool(&sp0);
        func_0805E850((GenObj *)((u8 *)temp_r5 + 0xB4), (**temp_r5->unk0)->unk64(), temp_r4_2);
        temp_r0_2 = (GenObj *)((u8 *)temp_r5 + 0xC8);
        temp_r5->unkC8 = 1;
        temp_r0_2->unk2 = 0;
        (temp_r0_2 + 2)->unk1 = 1;
    }
}
