#include "common.h"
s32 func_08094268(s32 **, s32);                         /* extern */
s32 func_080D02EC();                                  /* extern */
extern s32 vtable_unk_080E7F0C;

void func_080E3B60(s32 **arg0, s32 arg1) {
    *arg0 = &vtable_unk_080E7F0C;
    func_080D02EC();
    func_08094268(arg0, arg1);
}

