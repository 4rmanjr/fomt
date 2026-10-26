#include "common.h"
s32 func_08009168();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkA;
    s32 unkC;
} GenObj;
void *func_080091A4(GenObj *arg0, u16 arg1, u16 arg2) {
    s16 *var_r0;
    void *temp_r1;

    func_08009168();
    arg0->unk8 = (u16) arg0->unk4;
    arg0->unkA = arg1;
    arg0->unkC = arg2;
    var_r0 = arg0 + 0xE;
    temp_r1 = arg0 + 0x22;
    if (var_r0 != temp_r1) {
        do {
            *var_r0 = 0;
            var_r0 += 2;
        } while (var_r0 != temp_r1);
    }
    return arg0;
}

