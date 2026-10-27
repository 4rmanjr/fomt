#include "common.h"
typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[20];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 _pad28[12];
    s32 unk34;
} GenObj;
void func_080941A8(GenObj *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk34))(arg0, arg0->unk18, arg0->unk1C, arg0->unk20, arg0->unk24);
}

