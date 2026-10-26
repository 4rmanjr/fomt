#include "common.h"
s32 rand();                                         /* extern */
extern s32 gUnk_080FA71C;
extern s32 gUnk_080FA728;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    u8 _pad8[36];
    s32 unk2C;
    s32 unk2E;
} GenObj;
void func_08057F64(GenObj *arg0, u32 arg1) {
    GenObj *sp0;
    s32 sp4;
    u8 *sp8;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r1;
    s32 var_r4;
    s32 var_sb;
    GenObj *var_r7;

    sp0 = arg0;
    if ((3 & arg0->unk2C) == 2) {
        var_r1 = ((u8) sp0->unk2E >> 5) & 1;
    } else {
        var_r1 = 0;
    }
    sp4 = var_r1;
    var_r7 = (GenObj *)((u8 *)sp0 + 0xC);
    var_sb = 0;
    sp8 = (GenObj *)((u8 *)sp0 + 0x2C);
    do {
        if (sp4 == 0) {
            goto block_5;
        }
        switch (arg1) {                             /* irregular */
        case 3:
        case 1:
block_5:
            var_r4 = var_sb;
            break;
        case 2:
            var_r4 = 4;
            break;
        case 4:
            var_r4 = 5;
            break;
        default:
            var_r4 = 6;
            break;
        }
        temp_r4 = var_r4 * 0x10;
        temp_r6 = *((u8 *)temp_r4 + &gUnk_080FA71C);
        temp_r5 = *((u8 *)temp_r4 + (&gUnk_080FA71C + 4));
        var_r7->unk0 = (u8) ((rand() % (s32) (temp_r5 - temp_r6)) + temp_r6);
        temp_r6_2 = *((u8 *)temp_r4 + (&gUnk_080FA71C + 8));
        temp_r5_2 = *((u8 *)temp_r4 + &gUnk_080FA728);
        var_r7->unk1 = (s8) ((rand() % (s32) (temp_r5_2 - temp_r6_2)) + temp_r6_2);
        var_r7->unk2 = (u8) *(sp0 + (((u32) (*sp8 << 0x1E) >> 0x1C) + var_sb));
        temp_r0 = 0xFA - var_r7->unk0;
        temp_r4_2 = (s32) (temp_r0 * temp_r0) / 1000;
        var_r7->unk4 = (s16) (temp_r4_2 + ((rand() & 3) + 1));
        var_sb += 1;
        var_r7 += 8;
    } while (var_sb <= 3);
}

