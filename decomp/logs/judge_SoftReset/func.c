#include "common.h"
/* Warning: missing "bx $lr" in last block of SoftReset (initial). */

s32 SoftReset(s32 arg0) {
    *(s8 *)0x04000208 = 0;
    M2C_ERROR(/* unknown instruction: svc 0x1 */);
    M2C_ERROR(/* unknown instruction: svc 0x0 */);
    return arg0;
}

