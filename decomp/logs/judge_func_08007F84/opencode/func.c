#include "common.h"
s32 func_08007EC8(void *);                            /* extern */
s32 func_080D734C(void *, u32, u32);                  /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
} GenObj;
void func_08007F84(GenObj *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r2;
    u32 var_r1;
    u32 var_r1_2;
    GenObj *temp_r6;

    sp0 = arg2;
    if ((arg1 <= 0x3FFU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0x3FFU)) {
            func_08007EC8(arg0);
            return;
        }
        temp_r6 = (GenObj *)((u8 *)arg0 + 4);
        if (arg1 <= 0x1FFU) {
            temp_r0 = 0x200 - arg1;
            sp4 = temp_r0;
            var_r2 = &sp0;
            if (sp0 > temp_r0) {
                var_r2 = &sp4;
            }
            func_080D734C(temp_r6, arg1, *var_r2);
        }
        temp_r2 = arg1 + sp0;
        if (temp_r2 > 0x200U) {
            var_r1 = 0;
            if (arg1 > 0x1FFU) {
                var_r1 = arg1 + 0xFFFFFE00;
            }
            func_080D734C((GenObj *)((u8 *)arg0 + 0x80), var_r1, (temp_r2 - 0x200) - var_r1);
        }
        arg0->unk0 = 0;
        var_r1_2 = 0;
        if (temp_r6->unk1 != 0) {
            var_r1_2 = (u32) (0 - ((GenObj *)((u8 *)arg0 + 0x80))->unk1) >> 0x1F;
        }
        arg0->unk1 = (s8) var_r1_2;
    }
}

