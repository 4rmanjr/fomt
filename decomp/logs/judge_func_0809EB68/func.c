#include "common.h"
typedef struct { u8 pad[0x14]; u8 v; } S_B68;
u32 func_0809EB68(S_B68 *arg0) { return (u32)(arg0->v << 28) >> 28; }

