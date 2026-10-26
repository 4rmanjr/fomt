#include "common.h"
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
s32 func_08050C18(void *);                            /* extern */
s32 strlen(u8 *);                                   /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    u8 _pad6[490];
    s32 unk1F0;
} GenObj;
void func_08050B50(GenObj *arg0, u8 *arg1) {
    u8 *sp0;
    u8 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    u8 **sp14;
    s32 var_r6;
    u32 var_r5;
    u8 *var_r2;
    u8 *var_r7;
    void *temp_r4;

    if (arg1 != 0) {
        var_r6 = strlen(arg1);
    } else {
        var_r6 = 0;
    }
    if ((u32) (var_r6 - 1) > 0xBU) {
        func_08050C18(arg0);
        return;
    }
    var_r7 = arg1;
    var_r5 = 0;
    sp14 = &sp0 + 0xC;
    do {
        spC = 4;
        sp14->unk2 = 2;
        temp_r4 = (var_r5 * 0x104) + arg0 + 0x1F8;
        func_0804E7A0(spC, temp_r4, 0);
        var_r5 += 1;
        if (var_r6 != 0) {
            var_r2 = &sp4;
loop_8:
            *var_r2 = *var_r7;
            var_r7 += 1;
            var_r2 += 1;
            var_r6 -= 1;
            if (var_r6 != 0) {
                if (var_r2 != &sp8) {
                    goto loop_8;
                }
            }
            *var_r2 = 0;
            sp10 = 4;
            sp10.unk2 = 2;
            sp0 = &sp4;
            func_0804E8F0(sp10, temp_r4, 0, 0);
        }
    } while (var_r5 <= 2U);
    arg0->unk1F0 = (u8) (arg0->unk1F0 | 1 | 2);
}

