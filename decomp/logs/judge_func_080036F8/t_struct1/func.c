#include "common.h"
s32 __builtin_new(s32);                               /* extern */
s32 func_08000914();                                /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void *func_080036F8(GenObj *arg0) {
    arg0->unk0 = &vtable_unk_080E5A18;
    __builtin_new(0x6D34);
    arg0->unk4 = func_08000914();
    return arg0;
}

