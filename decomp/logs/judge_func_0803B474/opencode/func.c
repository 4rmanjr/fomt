#include "common.h"
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    s32 unk14;
    s32 unk18;
} GenObj;
void func_0803B474(GenObj *arg0, s32 arg1, s32 arg2) {
    arg0->unk14 = (s32) ((arg1 + (rand() % 240)) << 0x10);
    arg0->unk18 = (s32) ((arg2 + (rand() % 160)) << 0x10);
    arg0->unk10 = (s16) ((0x90 & rand()) + 0x60);
}

