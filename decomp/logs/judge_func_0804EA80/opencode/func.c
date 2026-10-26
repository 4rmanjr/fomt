#include "common.h"
s32 func_080098AC();                                  /* extern */
extern ? vtable_unk_080E7868;

void func_0804EA80(void *arg0) {
    arg0->unk8 = &vtable_unk_080E7868;
    func_080098AC();
}

