#include "common.h"
typedef struct GenObj {
    u8 _pad0[3032];
    s32 unkBD8;
} GenObj;
void func_0805A6E4(GenObj *arg0, s16 arg1, s16 arg2, s16 arg3) {
    *(arg0 + 0x738 + (arg0->unkBD8 * 8)) = arg1;
    *(arg0 + 0x73A + (arg0->unkBD8 * 8)) = arg2;
    *(arg0 + 0x73C + (arg0->unkBD8 * 8)) = arg3;
    *(arg0 + 0x73E + (arg0->unkBD8 * 8)) = unksp0.unk14;
    arg0->unkBD8 = (s16) ((u16) arg0->unkBD8 + 1);
}

