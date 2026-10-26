#include "common.h"
s32 func_0805039C();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
} GenObj;
void func_080503E4(GenObj *arg0) {
    func_0805039C();
    arg0->unk8 = 3;
    arg0->unkC = 9;
}

