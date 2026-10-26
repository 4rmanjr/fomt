#include "common.h"
extern ? gUnk_081009DC;
extern ? gUnk_08100A04;

void func_08094668(void *arg0) {
    ? *var_r0;
    u8 temp_r0;

    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        temp_r0 = arg0->unk0->unk48(arg0);
        if (temp_r0 != 0) {
            var_r0 = &gUnk_08100A04;
        } else {
            arg0->unk10 = (s32) temp_r0;
            var_r0 = &gUnk_081009DC;
        }
        arg0->unk8 = var_r0;
    }
}

