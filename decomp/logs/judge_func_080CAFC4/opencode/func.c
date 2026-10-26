#include "common.h"
s32 func_080CAC70(s32 *);                               /* extern */
s32 func_080CADB4(void *, s32);                       /* extern */
s32 memcpy(void *, s32, u32);                         /* extern */
u32 strlen(s32);                                    /* extern */
extern ? vtable_unk_080E85BC;

void *func_080CAFC4(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, u8 arg5) {
s32 sp0;
    u32 *spC;
    ? *sp10;
    u32 var_r3;
    u32 var_r4;
    u8 temp_r8;
    void *temp_r6;
    void *var_r2;

    temp_r8 = arg5;
    func_080CADB4(arg0, arg2);
    arg0->unk210 = &vtable_unk_080E85BC;
    func_080CAC70(&sp0);
    spC = arg0 + 0x214;
    sp10 = &sp0;
    arg0->unk214 = 0;
    if (arg3 <= 8U) {
        var_r3 = arg3;
        var_r2 = arg0 + 0x218;
        if (arg3 != 0) {
            do {
                if (var_r2 != 0) {
                    var_r2->unk0 = (s32) sp10->unk0;
                    var_r2->unk4 = (s32) sp10->unk4;
                    var_r2->unk8 = (s32) sp10->unk8;
                }
                var_r3 -= 1;
                var_r2 += 0xC;
            } while (var_r3 != 0);
        }
        *spC = arg3;
    }
    arg0->unk278 = arg1;
    arg0->unk27C = temp_r8;
    func_080CAC70(arg0 + 0x280);
    temp_r6 = arg0 + 0x28C;
    var_r4 = strlen(arg4);
    if (var_r4 > 8U) {
        var_r4 = 8;
    }
    memcpy(temp_r6, arg4, var_r4);
    *(temp_r6 + var_r4) = 0;
    arg0->unk298 = arg3;
    return arg0;
}

