#include "common.h"
extern ? gUnk_08100914;
extern ? gUnk_081009DC;
extern ? gUnk_08100A04;

void func_080943E4(void *arg0, s32 arg1) {
    ? *var_r0;

    if (arg1 == 1) {
        arg0->unk0->unk3C(arg0);
    }
    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        if ((arg0->unk0->unk48(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else if ((arg0->unk0->unk44(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_081009DC;
        } else {
            var_r0 = &gUnk_08100914;
        }
        arg0->unk8 = var_r0;
    }
}

