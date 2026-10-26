#include "common.h"
typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[16];
    s32 unk28;
    u8 _pad2C[16];
    s32 unk3C;
} GenObj;
s32 func_08024CA0(GenObj *arg0) {
    u8 temp_r0;

    if ((((void (*)(void *,...))(arg0->unk14->unk28))(arg0) << 0x18) == 0) {
        temp_r0 = arg0->unk3C;
        if (((s32) temp_r0 <= 0x2A) && ((s32) temp_r0 >= 0x24)) {
            return 1;
        }
    }
    return 0;
}

