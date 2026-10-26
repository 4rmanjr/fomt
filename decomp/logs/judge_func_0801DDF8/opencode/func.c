#include "common.h"
s32 func_0809C5D0(s32, s32);                          /* extern */
s32 func_080AA850(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[4144];
    s32 unk1038;
} GenObj;
void func_0801DDF8(GenObj *arg0, s32 arg1) {
    func_0809C5D0(arg0->unk1038 + 0x34D8, arg1);
    func_080AA850(arg0->unk4, arg1);
}

