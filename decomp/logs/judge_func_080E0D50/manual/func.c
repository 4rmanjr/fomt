#include "common.h"
s32 func_08008E64(s32, s32, s32);                     /* extern */

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} UnkStruct;

s32 func_080E0D50(UnkStruct *arg0) {
    func_08008E64(arg0->unkC, arg0->unk10, arg0->unk14);
    return 0;
}

