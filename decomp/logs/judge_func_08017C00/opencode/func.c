#include "common.h"
void *GetMapData(s32);                              /* extern */

s32 func_08017C00(void *arg0) {
    if ((arg0->unk103C == 0) && (GetMapData(arg0->unk4->unk4)->unk24 == 0)) {
        return 0;
    }
    return 1;
}

