#include "common.h"
void func_080944A8(void *arg0) {
    arg0->unk14->unk8 = (s32) arg0->unk18;
    if ((arg0->unk0->unk50(arg0) << 0x18) != 0) {
        arg0->unk0->unk38(arg0, 0, 0);
        return;
    }
    arg0->unk0->unk38(arg0, 1, 0);
}

