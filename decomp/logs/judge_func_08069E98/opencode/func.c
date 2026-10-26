#include "common.h"
s32 func_080769A0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
s32 *func_08069E98(s32 *arg0, GenObj *arg1) {
    s32 temp_r1;

    func_080769A0(arg1->unk4);
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}

