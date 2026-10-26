#include "common.h"
s32 func_080080A0(void *, u32, u32);                  /* extern */
extern void *gUnk_03000408;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    u8 _pad8[24];
    s32 unk20;
    u8 _pad24[2300];
    s32 unk920;
} GenObj;
void func_08007C28(s32 arg1) {
    s32 sp0;
    s32 *temp_r2;
    s32 temp_r1;
    s32 var_r1;
    u16 temp_r0;
    u16 temp_r7;
    u32 var_r0;
    u8 temp_r5;
    GenObj *temp_r4;
    GenObj *temp_r6;

    temp_r6 = gUnk_03000408;
    if (arg1 != 0) {
        sp0 = arg1;
        temp_r5 = sp0;
        var_r0 = 0;
        if ((u32) temp_r5 <= 0xFFU) {
            temp_r1 = *(temp_r6 + ((temp_r5 >> 5) * 4)) & (1 << (0x1F & temp_r5));
            var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r4 = (GenObj *)((u8 *)temp_r6 + 0x20) + ((temp_r5 * 8) + 4);
            var_r1 = 0;
            if (((u32) (arg1 << 8) >> 0x10) == temp_r4->unk4) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                temp_r0 = temp_r4->unk2 - 1;
                temp_r4->unk2 = temp_r0;
                temp_r7 = temp_r0;
                if (temp_r7 == 0) {
                    func_080080A0((GenObj *)((u8 *)temp_r6 + 0x824), (u32) (temp_r4->unk0 << 0x16) >> 0x16, (u32) (temp_r4->unk1 << 0x1A) >> 0x1C);
                    temp_r4->unk4 = temp_r7;
                    temp_r4->unk0 = (void *) temp_r6->unk20;
                    temp_r6->unk20 = temp_r4;
                    if ((u32) temp_r5 <= 0xFFU) {
                        temp_r2 = temp_r6 + ((temp_r5 >> 5) * 4);
                        *temp_r2 &= ~(1 << (temp_r5 & 0x1F));
                    }
                    temp_r6->unk920 = (u16) (temp_r6->unk920 - 1);
                }
            }
        }
    }
}

