#include "common.h"
typedef struct GenObj {
    u8 _pad0[28];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk25;
} GenObj;
void func_080380EC(GenObj *arg0, s8 arg1) {
    arg0->unk24 = arg1;
    arg0->unk1C = 0x150000;
    arg0->unk20 = 0x30000;
    arg0->unk25 = 1;
}

