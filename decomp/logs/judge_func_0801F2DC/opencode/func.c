#include "common.h"
s32 __builtin_new(s32);                             /* extern */
void *func_080A4A00(s32, void *, s32, void *);      /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    struct GenObj *unk8;
    u8 _padC[6];
    s32 unk12;
    s32 unk14;
    u8 _pad18[12];
    struct GenObj *unk24;
    u8 _pad28[4112];
    void *unk1038;
    u8 _pad103C[40];
    s32 unk1064;
} GenObj;
void func_0801F2DC(GenObj *arg0) {
    s8 sp8;
    s32 var_r0;
    s32 var_r2;
    u32 temp_r0;
    void *temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    void *var_r1;

    if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) == 0x23) {
        temp_r0 = (u32) (arg0->unk1038->unk12 << 0x1B) >> 0x1B;
        if (temp_r0 > 3U) {
            if (temp_r0 <= 8U) {
                var_r0 = __builtin_new(0x40);
                var_r1 = (GenObj *)((u8 *)arg0 + 0xFF4);
                sp8 = 0;
                var_r2 = 0;
            } else if (temp_r0 <= 0xFU) {
                var_r0 = __builtin_new(0x40);
                var_r1 = (GenObj *)((u8 *)arg0 + 0xFF4);
                sp8 = 0;
                var_r2 = 1;
            } else if (temp_r0 <= 0x12U) {
                var_r0 = __builtin_new(0x40);
                var_r1 = (GenObj *)((u8 *)arg0 + 0xFF4);
                sp8 = 0;
                var_r2 = 2;
            } else {
                goto block_8;
            }
        } else {
block_8:
            var_r0 = __builtin_new(0x40);
            var_r1 = (GenObj *)((u8 *)arg0 + 0xFF4);
            sp8 = 0;
            var_r2 = 3;
        }
        temp_r0_2 = func_080A4A00(var_r0, var_r1, var_r2, arg0);
        temp_r1 = arg0->unk1064;
        if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
            ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
        }
        arg0->unk1064 = temp_r0_2;
        return;
    }
    temp_r1_2 = arg0->unk1064;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
    }
    arg0->unk1064 = 0;
}

