#include "common.h"
extern s32 gUnk_080F1450;

typedef struct GenObj {
    u8 _pad0[48];
    s32 unk30;
} GenObj;
u16 func_08034248(GenObj *arg0, s32 arg1) {
    return *((((arg0->unk30 * 5) + arg1) * 2) + &gUnk_080F1450);
}

