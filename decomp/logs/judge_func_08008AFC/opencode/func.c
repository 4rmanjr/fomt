#include "common.h"
s32 m4aSoundInit();                                   /* extern */
s32 m4aSoundVSyncOff();                               /* extern */

void func_08008AFC(void) {
    m4aSoundInit();
    m4aSoundVSyncOff();
}

