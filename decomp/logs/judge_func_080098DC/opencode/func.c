#include "common.h"
s32 func_080098AC(void *, s32);                       /* extern */
s32 func_08009984(void *);                            /* extern */
extern s32 vtable_unk_080E5BB4;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
} GenObj;
void func_080098DC(GenObj *arg0, s32 arg1) {
    arg0->unk8 = &vtable_unk_080E5BB4;
    func_08009984(arg0);
    func_080098AC(arg0 + 0x10, 2);
    func_080098AC(arg0, arg1);
}

