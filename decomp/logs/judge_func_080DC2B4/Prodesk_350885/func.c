#include "common.h"
s32 func_080D7F08(void *);                            /* extern */

void func_080DC2B4(void *arg0, s32 arg1, u16 arg2, u16 arg3) {
s32 sp0;
    void *sp8;
    void **temp_r0;

    sp8 = arg0;
    temp_r0 = arg0->unkA8;
    sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | (arg1 & 0x3FF));
    sp0.unk1 = (u8) ((3 & sp0.unk1) | ((arg2 & 0x3F) * 4));
    sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | (((u32) (arg2 << 0x10) >> 0x16) & 0x3FF));
    sp0.unk3 = (u8) ((3 & sp0.unk3) | ((arg3 & 0x3F) * 4));
    sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | (((u32) (arg3 << 0x10) >> 0x16) & 0x3FF));
    (*temp_r0)->unkB4(temp_r0, &sp0, 1);
    func_080D7F08(sp8);
}

