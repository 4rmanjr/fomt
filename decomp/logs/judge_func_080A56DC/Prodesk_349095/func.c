#include "common.h"
s32 func_080A5960(void *, s16, s16);                  /* extern */

void func_080A56DC(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk0 = (u32) ((u32) (arg1->unk0 << 0x16) >> 0x16);
    arg0->unk8 = (s32) ((((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) << 0x10);
    arg0->unkC = (s32) ((((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) << 0x10);
    arg0->unk90->unk14(arg0, arg2, arg3, arg4);
    func_080A5960(arg0, (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)), (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)));
}

