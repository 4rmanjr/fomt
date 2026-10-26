#include "common.h"
s32 func_08009158();                                /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_08009190(GenObj *arg0) {
    u16 temp_r5;

    temp_r5 = arg0->unk0;
    arg0->unk4 = (s16) (func_08009158() & ~temp_r5);
}

