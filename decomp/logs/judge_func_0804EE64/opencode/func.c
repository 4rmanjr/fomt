#include "common.h"
extern s32 vtable_unk_080E7838;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    void *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk16;
    s32 unk18;
} GenObj;
void func_0804EE64(GenObj *arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4, s32 arg5) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = &vtable_unk_080E7838;
    arg0->unkC = arg1;
    arg0->unk10 = arg2;
    arg0->unk14 = arg3;
    arg0->unk16 = (s16) arg4;
    arg0->unk18 = arg5;
}

