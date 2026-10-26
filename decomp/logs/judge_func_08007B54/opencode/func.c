#include "common.h"
u32 func_08008020(void *);                          /* extern */
s32 func_080080A0(void *, u32, s32);                  /* extern */
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
    s32 unk922;
} GenObj;
s32 func_08007B54(s32 arg1) {
    s32 *temp_r2;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r1;
    u32 temp_r0;
    u32 var_r0_2;
    GenObj *temp_r3;
    GenObj *temp_r4;
    void *temp_r6;

    temp_r4 = gUnk_03000408;
    temp_r6 = (GenObj *)((u8 *)temp_r4 + 0x824);
    temp_r0 = func_08008020(temp_r6);
    var_r0 = 0;
    if (temp_r0 <= 0x3FFU) {
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        temp_r3 = temp_r4->unk20;
        if ((temp_r3 != 0) && (temp_r4->unk20 = (void *) temp_r3->unk0, (temp_r3 != 0))) {
            temp_r6_2 = (s32) ((temp_r3 - 4) - ((GenObj *)((u8 *)temp_r4 + 0x20))) >> 3;
            if ((u32) temp_r6_2 <= 0xFFU) {
                temp_r2 = temp_r4 + (((u32) temp_r6_2 >> 5) * 4);
                *temp_r2 |= 1 << (0x1F & temp_r6_2);
            }
            temp_r4->unk920 = (u16) (temp_r4->unk920 + 1);
            temp_r3->unk0 = (s16) ((0xFFFFFC00 & (u16) temp_r3->unk0) | (temp_r0 & 0x3FF));
            temp_r3->unk1 = (u8) ((-0x3D & temp_r3->unk1) | ((arg1 & 0xF) * 4));
            temp_r3->unk2 = 1;
            var_r0_2 = temp_r4->unk922 + 1;
            if (var_r0_2 > 0xFFFFU) {
                var_r0_2 = 1;
            }
            temp_r3->unk4 = (u16) var_r0_2;
            temp_r4->unk922 = (u16) var_r0_2;
            var_r1 = (u8) temp_r6_2 | ((u16) temp_r3->unk4 << 8);
        } else {
            func_080080A0(temp_r6, temp_r0, arg1);
            goto block_11;
        }
    } else {
block_11:
        var_r1 = 0;
    }
    return var_r1;
}

