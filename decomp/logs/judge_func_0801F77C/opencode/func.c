#include "common.h"
s32 IsFireplaceLighted__C9FarmHouse(void *);        /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_0800E324(void *);                          /* extern */
void *func_080A4A00(s32, void *, s32, void *, s32, s32); /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk3;
    s32 unk4;
    struct GenObj *unk8;
    u8 _padC[8];
    s32 unk14;
    u8 _pad18[12];
    struct GenObj *unk24;
    u8 _pad28[4112];
    void *unk1038;
    u8 _pad103C[56];
    s32 unk1074;
    s32 unk1078;
} GenObj;
void func_0801F77C(GenObj *arg0) {
    s8 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;
    void *temp_r0_3;
    void *temp_r0_4;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    void *var_r1;

    temp_r1 = arg0->unk1074;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    arg0->unk1074 = 0;
    temp_r1_2 = arg0->unk1078;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
    }
    arg0->unk1078 = 0;
    temp_r0 = ((void (*)(void *,...))(arg0->unk0->unk14))(arg0);
    switch (temp_r0) {                              /* irregular */
    case 7:
        if ((arg0->unk1038->unk4 << 0x1F) != 0) {
            temp_r0_2 = __builtin_new(0x40);
            sp8 = 0;
            temp_r0_3 = func_080A4A00(temp_r0_2, (GenObj *)((u8 *)arg0 + 0xF04), 2, arg0, 2, 0x1F);
            temp_r1_3 = arg0->unk1078;
            if ((temp_r0_3 != temp_r1_3) && (temp_r1_3 != 0)) {
                ((void (*)(void *,...))(temp_r1_3->unk24->unk8))(temp_r1_3, 3);
            }
            arg0->unk1078 = temp_r0_3;
        }
        if (func_0800E324(arg0->unk1038 + 0x10) == 3) {
            var_r0 = __builtin_new(0x40);
            var_r1 = (GenObj *)((u8 *)arg0 + 0xF04);
block_26:
            sp8 = 0;
block_27:
            temp_r0_4 = func_080A4A00(var_r0, var_r1, 2, arg0);
            temp_r1_4 = arg0->unk1074;
            if ((temp_r0_4 != temp_r1_4) && (temp_r1_4 != 0)) {
                ((void (*)(void *,...))(temp_r1_4->unk24->unk8))(temp_r1_4, 3);
            }
            arg0->unk1074 = temp_r0_4;
        }
        return;
    case 3:
        if (func_0800E324(arg0->unk1038 + 0x10) == 3) {
            var_r0 = __builtin_new(0x40);
            var_r1 = (GenObj *)((u8 *)arg0 + 0xF04);
            goto block_26;
        }
        break;
    case 0:
        if (((u8) arg0->unk1038->unk3 >> 7) != 0) {
            var_r0 = __builtin_new(0x40);
            var_r1 = (GenObj *)((u8 *)arg0 + 0xF04);
            sp8 = (s8) temp_r0;
            goto block_27;
        }
        break;
    case 2:
        if ((IsFireplaceLighted__C9FarmHouse(arg0->unk1038 + 0x1F4) << 0x18) != 0) {
            var_r0 = __builtin_new(0x40);
            var_r1 = (GenObj *)((u8 *)arg0 + 0xF04);
            goto block_26;
        }
        break;
    }
}

