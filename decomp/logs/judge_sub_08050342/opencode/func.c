#include "common.h"
extern ? vtable_unk_080E78F0;

s32 sub_08050342(u16 *arg23, void *arg3B) {
    s32 temp_r1;

    *arg23 &= ~((0x100 << ((u32) (saved_reg_r7->unk0 << 0x1E) >> 0x1E)) | 0x6000);
    if (saved_reg_r7->unk4 == 1) {
        temp_r1 = saved_reg_r7->unk130;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
            arg3B->unk8->unk14(arg3B, saved_reg_r7 + 0x130);
        }
    }
    arg4 = &vtable_unk_080E78F0;
    return saved_reg_r7->unk8;
}

