#include "common.h"
/* Warning: missing "bx $lr" in last block of func_08082CEC (.L08082EDE). */

s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08008724();                                  /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_0808268C(void *);                            /* extern */
s32 func_08082C14(void *, s32);                       /* extern */
s32 func_08082C74(void *, s32);                     /* extern */
s32 func_080C85A0(void *);                            /* extern */
s32 method_0800C5C4__C4Coop(s32);                   /* extern */
s32 method_0800CF00__C4Barn(s32);                   /* extern */
s32 method_0800CF08__C4Barn(s32);                   /* extern */
extern s32 .L08082F84;
extern s32 .L08082F88;

void func_08082CEC(void *arg0) {
    s16 sp24;
    void *sp28;
    s32 *temp_r2;
    s32 *temp_r2_10;
    s32 *temp_r2_11;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r2_8;
    s32 *temp_r2_9;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r1;
    void *temp_r4;
    void *temp_r5;

    func_08008724();
    func_080C85A0(arg0);
    temp_r0 = arg0->unk2A4;
    if (temp_r0 <= 0x27U) {
        temp_r2 = arg0 + 0x2A4 + ((temp_r0 * 4) + 4);
        if (temp_r2 != 0) {
            *temp_r2 = 0;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    if ((func_08082C74(arg0, 0x46) << 0x18) != 0) {
        temp_r0_2 = arg0->unk2A4;
        if (temp_r0_2 <= 0x27U) {
            temp_r2_2 = arg0 + 0x2A4 + ((temp_r0_2 * 4) + 4);
            if (temp_r2_2 != 0) {
                *temp_r2_2 = 1;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if ((func_08082C74(arg0, 0x47) << 0x18) != 0) {
        temp_r0_3 = arg0->unk2A4;
        if (temp_r0_3 <= 0x27U) {
            temp_r2_3 = arg0 + 0x2A4 + ((temp_r0_3 * 4) + 4);
            if (temp_r2_3 != 0) {
                *temp_r2_3 = 2;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if ((func_08082C74(arg0, 0x48) << 0x18) != 0) {
        temp_r0_4 = arg0->unk2A4;
        if (temp_r0_4 <= 0x27U) {
            temp_r2_4 = arg0 + 0x2A4 + ((temp_r0_4 * 4) + 4);
            if (temp_r2_4 != 0) {
                *temp_r2_4 = 3;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if ((GetUpgradeLevel__C4Coop(arg0->unk8 + 0x410) != 0) && ((method_0800C5C4__C4Coop(arg0->unk8 + 0x410) << 0x18) == 0)) {
        temp_r0_5 = arg0->unk2A4;
        if (temp_r0_5 <= 0x27U) {
            temp_r2_5 = arg0 + 0x2A4 + ((temp_r0_5 * 4) + 4);
            if (temp_r2_5 != 0) {
                *temp_r2_5 = 4;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if (GetUpgradeLevel__C4Barn(arg0->unk8 + 0x5F0) != 0) {
        if ((method_0800CF00__C4Barn(arg0->unk8 + 0x5F0) << 0x18) == 0) {
            temp_r0_6 = arg0->unk2A4;
            if (temp_r0_6 <= 0x27U) {
                temp_r2_6 = arg0 + 0x2A4 + ((temp_r0_6 * 4) + 4);
                if (temp_r2_6 != 0) {
                    *temp_r2_6 = 5;
                }
                arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
            }
        }
        if ((method_0800CF08__C4Barn(arg0->unk8 + 0x5F0) << 0x18) == 0) {
            temp_r0_7 = arg0->unk2A4;
            if (temp_r0_7 <= 0x27U) {
                temp_r2_7 = arg0 + 0x2A4 + ((temp_r0_7 * 4) + 4);
                if (temp_r2_7 != 0) {
                    *temp_r2_7 = 6;
                }
                arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
            }
        }
    }
    temp_r0_8 = arg0->unk2A4;
    if (temp_r0_8 <= 0x27U) {
        temp_r2_8 = arg0 + 0x2A4 + ((temp_r0_8 * 4) + 4);
        if (temp_r2_8 != 0) {
            *temp_r2_8 = 7;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_9 = arg0->unk2A4;
    if (temp_r0_9 <= 0x27U) {
        temp_r2_9 = arg0 + 0x2A4 + ((temp_r0_9 * 4) + 4);
        if (temp_r2_9 != 0) {
            *temp_r2_9 = 8;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_10 = arg0->unk2A4;
    if (temp_r0_10 <= 0x27U) {
        temp_r2_10 = arg0 + 0x2A4 + ((temp_r0_10 * 4) + 4);
        if (temp_r2_10 != 0) {
            *temp_r2_10 = 9;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_11 = arg0->unk2A4;
    if (temp_r0_11 <= 0x27U) {
        temp_r2_11 = arg0 + 0x2A4 + ((temp_r0_11 * 4) + 4);
        if (temp_r2_11 != 0) {
            *temp_r2_11 = 0xA;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    func_0808268C(arg0);
    func_08082C14(arg0, ((arg0->unk10 * 4) + arg0)->unk2A8);
    temp_r0_12 = func_08008918(arg0);
    sp24 = 0x3F;
    temp_r0_12->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = (s32) .L08082F84;
    temp_r5 = temp_r4 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp28 = temp_r4;
    func_0800934C(temp_r5, .L08082F88, 1, 1);
    temp_r0_13 = func_08008940(arg0);
    temp_r0_13->unk8->unk10(temp_r0_13, sp28);
}

