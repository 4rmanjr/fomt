#include "common.h"
? .L08048FEE(u32);                                  /* extern */

void sub_08047766(s32 arg0) {
    void *temp_r0;

    .L08048FEE((u32) (arg0 << 0x1B) >> 0x1B);
    .L08048FEE((u32) (M2C_ERROR(/* Read from unset register $r2 */)->unk350->unk217B << 0x19) >> 0x1E);
    temp_r0 = M2C_ERROR(/* Read from unset register $r2 */)->unk350;
    .L08048FEE(((temp_r0->unk21A8 & 1) * 2) | ((u8) temp_r0->unk21A7 >> 7));
}

