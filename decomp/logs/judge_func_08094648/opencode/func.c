#include "common.h"
typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[28];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 _pad30[4];
    s32 unk34;
} GenObj;
void func_08094648(GenObj *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk34))(arg0, arg0->unk20, arg0->unk24, arg0->unk28, arg0->unk2C);
}

