#include "common.h"
extern ? gUnk_0810089C;
extern ? gUnk_081008C4;

void func_080941C8(void *arg0) {
    ? *var_r0;
    u8 temp_r0;

    if ((arg0->unk0->unk40(arg0) << 0x18) != 0) {
        temp_r0 = arg0->unk0->unk48(arg0);
        if (temp_r0 != 0) {
            var_r0 = &gUnk_081008C4;
        } else {
            arg0->unk10 = (s32) temp_r0;
            var_r0 = &gUnk_0810089C;
        }
        arg0->unk8 = var_r0;
    }
}

