#include "common.h"
s32 func_08050E5C();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[172];
    s32 unkAC;
} GenObj;
void func_080D7F74(GenObj *arg0) {
    if (arg0->unkAC != 0) {
        func_08050E5C();
    }
}

