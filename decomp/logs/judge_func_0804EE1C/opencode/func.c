#include "common.h"
s32 func_080098AC();                                  /* extern */
extern s32 vtable_unk_080E7848;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
} GenObj;
void func_0804EE1C(GenObj *arg0) {
    arg0->unk8 = &vtable_unk_080E7848;
    func_080098AC();
}

