#include "common.h"
u16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
u8 *func_08008920(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[48];
    s32 unk38;
    s32 unk39;
    s32 unk3C;
    s32 unk3E;
    s32 unk40;
    s32 unk44;
    u8 _pad48[1022];
    s32 unk446;
} GenObj;
void func_0806E7E0(GenObj *arg0) {
    GenObj *sp0;
    s32 sp4;
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r7;
    u8 *temp_r0_4;
    u8 *temp_r0_5;
    u8 *temp_r0_7;
    u8 *temp_r0_9;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 temp_r2_3;
    u8 temp_r2_4;
    void *temp_r0_10;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r1;

    temp_r0 = ((sp0 & 0xFFFFFCFF & 0xFFFFF3FF & 0xFFFFDFFF & 0xFFFF3FFF) | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
    sp0 = temp_r0;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x20);
    sp4 = (s32) (u16) ((sp4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_2, temp_r0_2->unk4) & 0xF) << 0xC));
    sp0 = temp_r0 | 0x1000;
    var_r7 = arg0->unk446 - 1;
    if (var_r7 >= 0) {
        do {
            temp_r4 = var_r7 * 8;
            sp0.unk4 = (s32) ((sp0.unk4 & 0xFFFFF3FF) | ((*((u8 *)(GenObj *)((u8 *)arg0 + 0x4C) + temp_r4) & 3) << 0xA));
            sp0 = (((sp0 & 0xFE00FFFF) | ((*((u8 *)(GenObj *)((u8 *)arg0 + 0x46) + temp_r4) & 0x1FF) << 0x10)) & 0xFFFFFF00) | *((u8 *)(GenObj *)((u8 *)arg0 + 0x48) + temp_r4);
            temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x18);
            sp0.unk4 = (s32) ((sp0.unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C(temp_r0_3, temp_r0_3->unk4) + (*((u8 *)(GenObj *)((u8 *)arg0 + 0x4A) + temp_r4) * 2)) << 0x16) >> 0x16));
            temp_r0_4 = func_08008920(arg0);
            temp_r2 = *temp_r0_4;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r1 = temp_r0_4 + ((temp_r2 * 8) + 4);
                temp_r1->unk0 = sp0;
                temp_r1->unk4 = (u16) sp0.unk4;
                *temp_r0_4 = temp_r2 + 1;
            }
            var_r7 -= 1;
        } while (var_r7 >= 0);
    }
    if (arg0->unk44 != 0) {
        temp_r0_5 = func_08008920(arg0);
        temp_r2_2 = *temp_r0_5;
        if ((u32) temp_r2_2 <= 0x7FU) {
            temp_r0_6 = temp_r0_5 + ((temp_r2_2 * 8) + 4);
            temp_r0_6->unk0 = (s32) arg0->unk3C;
            temp_r0_6->unk4 = (u16) arg0->unk40;
            *temp_r0_5 = temp_r2_2 + 1;
        }
        if ((s8) arg0->unk39 == 0) {
            arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | (((arg0->unk38 * 0x10) + 0x10) & 0x1FF));
            temp_r0_7 = func_08008920(arg0);
            temp_r2_3 = *temp_r0_7;
            if ((u32) temp_r2_3 <= 0x7FU) {
                temp_r0_8 = temp_r0_7 + ((temp_r2_3 * 8) + 4);
                temp_r0_8->unk0 = (s32) arg0->unk3C;
                temp_r0_8->unk4 = (u16) arg0->unk40;
                *temp_r0_7 = temp_r2_3 + 1;
            }
            arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | (((arg0->unk38 * 0x10) + 0x20) & 0x1FF));
            temp_r0_9 = func_08008920(arg0);
            temp_r2_4 = *temp_r0_9;
            if ((u32) temp_r2_4 <= 0x7FU) {
                temp_r0_10 = temp_r0_9 + ((temp_r2_4 * 8) + 4);
                temp_r0_10->unk0 = (s32) arg0->unk3C;
                temp_r0_10->unk4 = (u16) arg0->unk40;
                *temp_r0_9 = temp_r2_4 + 1;
            }
        }
    }
}

