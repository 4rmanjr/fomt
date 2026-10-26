#include "common.h"
typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[24];
    struct GenObj *unk24;
    u8 _pad28[4144];
    s32 unk1058;
} GenObj;
void func_0801DCA8(GenObj *arg0) {
    GenObj *temp_r1;

    temp_r1 = arg0->unk1058;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    arg0->unk1058 = 0;
}

