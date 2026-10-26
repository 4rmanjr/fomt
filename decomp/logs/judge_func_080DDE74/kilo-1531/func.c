#include "common.h"
void func_080DDE74(void *arg0, void *arg1) {
    arg1->unk0 = (u8) ((-0x10 & arg1->unk0) | 4);
    arg1->unk4 = (s32) arg0->unk50;
    arg1->unk8 = (u16) arg0->unk54;
    arg1->unkA = (u16) arg0->unk56;
}

