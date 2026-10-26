#include "common.h"
s32 __builtin_delete(s32 *);                            /* extern */
s32 free();                                           /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
} GenObj;
void func_08008364(s32 *arg0, s32 arg1) {
    s32 *temp_r0;
    s32 temp_r6;
    GenObj *var_r4;
    void *var_r5;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        var_r5 = temp_r0 + 0xA0;
loop_2:
        if (temp_r0 != var_r5) {
            var_r5 -= 0x14;
            temp_r6 = var_r5->unk4;
            var_r4 = var_r5->unk0;
            if (var_r4 != temp_r6) {
                do {
                    func_08007C28(var_r4, var_r4->unk4);
                    func_080079E8(var_r4, 2);
                    var_r4 += 8;
                } while (var_r4 != temp_r6);
            }
            if (var_r5->unk0 != 0) {
                free();
            }
            goto loop_2;
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

