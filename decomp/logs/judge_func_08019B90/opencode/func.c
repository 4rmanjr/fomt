#include "common.h"
void *GetMapData(s32);                              /* extern */
s32 func_0801A13C(void *, u32, u32, s32);             /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[120];
    struct GenObj *unk90;
    u8 _pad94[4012];
    s32 unk1040;
    u8 _pad1044[4];
    s32 unk1048;
    s32 unk104C;
} GenObj;
void func_08019B90(GenObj *arg0) {
    s32 temp_r2_2;
    u8 temp_r2;
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r2 = arg0->unk104C;
    ((void (*)(void *,...))(temp_r0->unk90->unk14))(temp_r0, arg0->unk1048, temp_r2, 0x1E - temp_r2);
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r2_2 = *arg0->unk1040;
        func_0801A13C(arg0, (u32) (temp_r2_2 << 0xB) >> 0x1B, (u32) (temp_r2_2 << 5) >> 0x1A, 1);
    }
}

