#include "common.h"
s32 SetVaseArticleId__9FarmHouseUi(s32);              /* extern */
s32 func_0801F3E4(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4152];
    s32 unk1038;
} GenObj;
void func_0801F5F0(GenObj *arg0) {
    SetVaseArticleId__9FarmHouseUi(arg0->unk1038 + 0x1F4);
    func_0801F3E4(arg0);
}

