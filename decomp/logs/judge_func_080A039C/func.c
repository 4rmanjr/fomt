#include "common.h"
typedef struct { u8 pad[3]; u8 v; } S_39C;
u32 func_080A039C(S_39C *arg0) { u32 x = arg0->v; return (x << 27) >> 29; }

