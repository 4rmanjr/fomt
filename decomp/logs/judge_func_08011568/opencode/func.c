#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void func_08011568(GenObj *arg0) {
    u8 temp_r0;

    if ((arg0->unk0 != 0x10) && (arg0->unk4 != 0x10)) {
        temp_r0 = arg0->unk8;
        if (temp_r0 != 0) {
            arg0->unk8 = (u8) (temp_r0 - 1);
        }
    }
}

