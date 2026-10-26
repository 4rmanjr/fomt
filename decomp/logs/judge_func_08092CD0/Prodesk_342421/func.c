#include "common.h"
s32 GetItemAt__8RucksackUi(s32, s32);                 /* extern */
s32 TryWrap__12RucksackItem();                        /* extern */
s32 func_0800F528(s32);                               /* extern */
s32 func_0809ACC0(s32, s32);                          /* extern */
s32 func_080A0A54(s32, s32);                          /* extern */
s32 func_080CC728(s32, s32, ? *, s32, s32);           /* extern */
s32 func_080CCE58(s32, ? *, s32, s32);                /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
extern ? gUnk_086678A0;

void func_08092CD0(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (arg1 == 9) {
        func_0800F528(arg0->unk100);
        func_080CCE58(arg0->unk7C, &gUnk_086678A0, 0x160, 1);
    } else {
        temp_r4 = arg0->unk104;
        GetItemAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
        TryWrap__12RucksackItem();
        temp_r4_2 = arg0->unk7C;
        func_080CC728(temp_r4_2, func_080CE184(arg0, arg1, 0), &gUnk_086678A0, 0x160, 1);
    }
    func_0809ACC0(arg0->unk8 + 0x1AA8, 0x64);
    func_080A0A54(arg0->unk8 + 0x1CD4, 1);
}

