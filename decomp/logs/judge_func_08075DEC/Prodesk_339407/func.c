#include "common.h"
s32 func_080098AC();                                  /* extern */
extern ? vtable_unk_080E7B68;

void func_08075DEC(void *arg0) {
    arg0->unk8 = &vtable_unk_080E7B68;
    func_080098AC();
}

