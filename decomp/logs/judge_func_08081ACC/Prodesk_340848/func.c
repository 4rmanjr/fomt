#include "common.h"
s32 func_080C7F58();                                  /* extern */
extern ? vtable_unk_080E7CCC;

void *func_08081ACC(void *arg0) {
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7CCC;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}

