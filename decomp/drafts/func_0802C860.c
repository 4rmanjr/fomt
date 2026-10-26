s32 GetId__C4Tool(s8 *);                            /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_08025B10(void *);                          /* extern */
s32 func_0802A510(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
    u8 _pad18[32];
    s32 unk38;
    s32 unk3C;
    u8 _pad40[36];
    struct GenObj *unk64;
} GenObj;
void func_0802C860(GenObj *arg0) {
    s8 sp0;
    s32 *var_r4;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    void *temp_r0;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;

    arg0->unk3C = 0xA;
    ((GenObj *)((u8 *)arg0 + 0x3C))->unk1 = 0x14;
    func_0802A510(arg0);
    temp_r0 = (*arg0->unk0)->unk14C();
    var_r4 = temp_r0->unk0;
    temp_r5 = temp_r0->unk4;
    if (var_r4 != temp_r5) {
loop_1:
        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
            var_r4 += 4;
            if (var_r4 == temp_r5) {
                goto block_3;
            }
            goto loop_1;
        }
        var_r0 = *var_r4;
    } else {
block_3:
        var_r0 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0, 0xBC);
    temp_r4 = arg0->unk38;
    sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    if (GetId__C4Tool(&sp0) == 0x4D) {
        temp_r4_2 = arg0->unk14;
        temp_r4_2->unk64(arg0, -2, func_08025B10(arg0));
        return;
    }
    temp_r4_3 = arg0->unk14;
    temp_r4_3->unk64(arg0, 0, func_08025B10(arg0));
}
