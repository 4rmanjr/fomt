#include "common.h"
typedef struct { u8 pad[0x26]; u8 v; } S_AE0;
u32 func_0809EAE0(S_AE0 *arg0) {
    u32 x = arg0->v;
    return (x << 31) >> 31;
}

