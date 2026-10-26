#include "common.h"
s32 func_0800050C(s32);                               /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_080D100C(s32, ? *);                        /* extern */
extern ? func_080E5418;
extern void *gUnk_03000414;
extern ? vtable_unk_080E857C;
extern ? vtable_unk_080E8588;

void *func_080E542C(void *arg0, s32 *arg1) {
    void *temp_r1;

    arg0->unk14 = &vtable_unk_080E857C;
    arg0->unk0 = (s32) *arg1;
    arg0->unk4 = (s16) (4 & func_08000528(4));
    temp_r1 = gUnk_03000414;
    gUnk_03000414 = arg0;
    arg0->unk8 = temp_r1;
    arg0->unkC = &vtable_unk_080E8588;
    arg0->unk10 = func_080D100C(2, &func_080E5418);
    func_0800050C(4);
    return arg0;
}

