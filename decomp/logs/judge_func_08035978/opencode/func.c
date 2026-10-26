#include "common.h"
s32 func_08035978(void *arg0) {
    s32 var_r2;
    s32 var_r2_2;
    u16 temp_r1_3;
    u16 temp_r2;
    u8 temp_r1_2;
    void *temp_r1;
    void *temp_r5;
    void *temp_r6;
    void *temp_r7;

    if ((arg0->unk14->unk28(arg0) << 0x18) == 0) {
        temp_r1 = arg0->unk38;
        if (temp_r1 != 0) {
            temp_r6 = *((arg0->unk3C * 4) + temp_r1->unk8);
            if (temp_r6 != 0) {
                temp_r1_2 = arg0->unk3D;
                if ((u32) temp_r1_2 < (u32) temp_r6->unk0) {
                    temp_r7 = temp_r6->unk4 + (temp_r1_2 * 8);
                    temp_r5 = temp_r7->unk4;
                    if (temp_r5 != 0) {
                        temp_r1_3 = (*arg0->unk0)->unk144()->unkA;
                        var_r2_2 = ((u32) (temp_r1_3 << 0x1B) >> 0x1B) - 6;
                        if (var_r2_2 < 0) {
                            var_r2_2 += 0x18;
                        }
                        if (temp_r5->unk0 != 0) {
                            temp_r2 = temp_r5->unk4;
                            if (temp_r2 != 0) {
                                if ((u32) arg0->unk3E < (u32) temp_r2) {
                                    if ((s32) (temp_r5->unkB << 0x1B) >= 0) {
                                        var_r2 = 0;
                                        if ((s32) arg0->unk40 >= 0x2EE) {
                                            goto block_15;
                                        }
                                    } else {
                                        goto block_13;
                                    }
                                    goto block_16;
                                }
                                goto block_17;
                            }
                        }
block_13:
                        var_r2 = 0;
                        if (((s32) (arg0->unk3D + 1) < (s32) temp_r6->unk0) && ((u32) ((var_r2_2 * 0x3C) + ((u32) (temp_r1_3 << 0x15) >> 0x1A)) >= (u32) temp_r7->unk8)) {
block_15:
                            var_r2 = 1;
                        }
block_16:
                        return var_r2;
                    }
                }
            }
        }
    }
block_17:
    return 0;
}

