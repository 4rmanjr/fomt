#include "common.h"
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
extern ? gUnk_08100558;

void func_080E3678(void *arg0) {
    void *temp_r4;

    arg0->unk3D8 = 0;
    arg0->unk3DC = 0;
    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_08100558, 0, 0);
    func_08050E50(temp_r4, 0x3A);
}

