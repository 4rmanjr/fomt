#include "common.h"
s32 *GetMapData(s32);                               /* extern */
s32 Unpack(s32, s32);                                 /* extern */

void func_080A5EA0(void *arg0) {
    Unpack(*GetMapData(arg0->unk4), 0x06000000);
}

