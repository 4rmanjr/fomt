#include "common.h"
s32 func_080E3504();                                  /* extern */
extern ? vtable_unk_080E7D4C;

void func_08088304(void *arg0) {
    arg0->unk4 = &vtable_unk_080E7D4C;
    func_080E3504();
}

