#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08005A58(s32, s32, s32);                   /* extern */
extern s32 vtable_unk_080E5AC0;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_08007078(GenObj *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &vtable_unk_080E5AC0;
    arg0->unk4 = func_08005A58(__builtin_new(0x4640), arg1, arg2);
    return arg0;
}

