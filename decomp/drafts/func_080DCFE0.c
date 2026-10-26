void *__builtin_new(s32);                           /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_08039E98(void *, void **, s32, s32);         /* extern */
s8 func_0803A144(void *, s32, s32);                 /* extern */
s32 func_0803A394(void *, void **, s32, s32);         /* extern */
extern s32 vtable_unk_080E759C;
extern s32 vtable_unk_080E75B4;
extern s32 vtable_unk_080E75CC;
extern s32 vtable_unk_080E75E4;
extern s32 vtable_unk_080E75FC;
extern s32 vtable_unk_080E7614;
extern s32 vtable_unk_080E762C;
extern s32 vtable_unk_080E7644;
extern s32 vtable_unk_080E765C;
extern s32 vtable_unk_080E7674;
extern s32 vtable_unk_080E768C;
extern s32 vtable_unk_080E76A4;
extern s32 vtable_unk_080E76D4;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    s32 unk8;
    u8 _padC[12];
    s32 unk18;
    s32 unk1C;
    u8 _pad20[44];
    void *unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk56;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8 _pad64[4];
    s32 unk68;
    u8 _pad6C[12];
    s32 unk78;
    s32 unk79;
    u8 _pad7D[7];
    s32 unk84;
} GenObj;
void *func_080DCFE0(GenObj *arg0) {
    s32 *var_r0;
    s32 temp_sl;
    s32 var_r6;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 var_sb;
    void **temp_r0_5;
    void **temp_r4;
    void **temp_r8;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    GenObj *temp_r4_2;
    void *temp_r7;
    GenObj *var_r4;
    GenObj *var_r5;
    void *var_r7;

    if (arg0->unk1C == 0) {
        temp_r0 = __builtin_new(0x18);
        temp_r0->unk0 = arg0;
        temp_r0->unk4 = &vtable_unk_080E76D4;
        temp_r0->unk8 = 0;
        temp_r4 = arg0->unk0;
        var_r6 = 0;
        if ((u32) (((u32) ((*temp_r4)->unk144(temp_r4)->unkA << 0x1B) >> 0x1B) - 6) > 0xBU) {
            var_r6 = 1;
        }
        func_0803A394(temp_r0, temp_r4, func_0800E324((*temp_r4)->unk144(temp_r4) + 8), var_r6);
        var_r7 = temp_r0;
    } else {
        temp_r0_2 = __builtin_new(0x18);
        temp_sl = arg0->unk18;
        temp_r0_2->unk0 = arg0;
        temp_r0_2->unk4 = &vtable_unk_080E76D4;
        temp_r0_2->unk8 = 0U;
        temp_r8 = arg0->unk0;
        var_sb = 0;
loop_3:
        temp_r7 = temp_sl + (var_sb * 0x10);
        temp_r0_3 = ((u32) (temp_r7->unk0 << 0x1C) >> 0x1C) - 1;
        switch (temp_r0_3) {                        /* irregular */
        case 0:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x9B6, 1);
            var_r0 = &vtable_unk_080E76A4;
block_18:
            var_r5->unk4C = var_r0;
            var_r5->unk50 = (s32) temp_r7->unk4;
            var_r5->unk54 = (u16) var_r4->unk4;
            var_r5->unk56 = (u16) var_r4->unk6;
            var_r5->unk60 = 0;
            ((GenObj *)((u8 *)var_r5 + 0x60))->unk2 = 0;
            var_r5->unk58 = (s32) ((s16) var_r5->unk54 << 0x10);
            var_r5->unk5C = (s32) ((s16) var_r5->unk56 << 0x10);
block_19:
            temp_r0_4 = temp_r0_2->unk8;
            if (temp_r0_4 <= 2U) {
                temp_r0_5 = (GenObj *)((u8 *)temp_r0_2 + 8) + ((temp_r0_4 * 4) + 4);
                if (temp_r0_5 != 0) {
                    *temp_r0_5 = var_r5;
                }
                temp_r0_2->unk8 = (u32) (temp_r0_2->unk8 + 1);
            }
            break;
        case 1:
            temp_r0_6 = __builtin_new(0x64);
            var_r5 = temp_r0_6;
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(temp_r0_6, temp_r8, temp_r7->unk4 + 0x10, 1);
            var_r0 = &vtable_unk_080E768C;
            goto block_18;
        case 2:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x3DB, 1);
            var_r0 = &vtable_unk_080E7674;
            goto block_18;
        case 3:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x806, 1);
            var_r0 = &vtable_unk_080E765C;
            goto block_18;
        case 4:
            var_r5 = __builtin_new(0x6C);
            temp_r4_2 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x202, 1);
            var_r5->unk4C = &vtable_unk_080E7644;
            var_r5->unk50 = (s32) temp_r7->unk4;
            var_r5->unk54 = (u16) temp_r4_2->unk4;
            var_r5->unk56 = (u16) temp_r4_2->unk6;
            var_r5->unk60 = 0;
            ((GenObj *)((u8 *)var_r5 + 0x60))->unk2 = 0;
            var_r5->unk58 = (s32) ((s16) var_r5->unk54 << 0x10);
            var_r5->unk5C = (s32) ((s16) var_r5->unk56 << 0x10);
            var_r5->unk68 = 0;
            goto block_19;
        case 5:
            var_r5 = __builtin_new(0x88);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x2A3, 1);
            var_r5->unk4C = &vtable_unk_080E762C;
            var_r5->unk50 = (s32) temp_r7->unk4;
            var_r5->unk79 = 0xFF;
            var_r5->unk78 = func_0803A144(var_r5, ((GenObj *)((u8 *)var_r5 + 0x79)) - 0x29, (s32) (((GenObj *)((u8 *)temp_r7 + 4))->unk8 << 0x1C) >> 0x1C);
            temp_r0_7 = (GenObj *)((u8 *)var_r5 + 0x60);
            var_r5->unk60 = 0;
            temp_r0_7->unk2 = 0;
            var_r5->unk58 = (s32) (*(((GenObj *)((u8 *)temp_r0_7 + 2)) - 0xE) << 0x10);
            var_r5->unk5C = (s32) (var_r5->unk56 << 0x10);
            var_r5->unk84 = 0xF8;
            goto block_19;
        case 6:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x87B, 1);
            var_r0 = &vtable_unk_080E7614;
            goto block_18;
        case 7:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x65C, 1);
            var_r0 = &vtable_unk_080E75FC;
            goto block_18;
        case 8:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x8F9, 1);
            var_r0 = &vtable_unk_080E75E4;
            goto block_18;
        case 9:
            var_r5 = __builtin_new(0x64);
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(var_r5, temp_r8, temp_r7->unk4 + 0x9A9, 1);
            var_r0 = &vtable_unk_080E75CC;
            goto block_18;
        case 10:
            temp_r0_8 = __builtin_new(0x64);
            var_r5 = temp_r0_8;
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(temp_r0_8, temp_r8, 0x8FD, 1);
            var_r0 = &vtable_unk_080E75B4;
            goto block_18;
        case 11:
            temp_r0_9 = __builtin_new(0x64);
            var_r5 = temp_r0_9;
            var_r4 = (GenObj *)((u8 *)temp_r7 + 4);
            func_08039E98(temp_r0_9, temp_r8, 0x15, 0);
            var_r0 = &vtable_unk_080E759C;
            goto block_18;
        }
        temp_r7->unk0 = (u8) (-0x10 & temp_r7->unk0);
        var_sb += 1;
        if (var_sb <= 2U) {
            goto loop_3;
        }
        var_r7 = temp_r0_2;
    }
    return var_r7;
}
