#include "common.h"
extern s32 gUnk_08105EDC;

void *GetMapData(s32 arg0) {
    s32 x = (arg0 << 2) + arg0;
    return (s8 *)&gUnk_08105EDC + (x << 3);
}

