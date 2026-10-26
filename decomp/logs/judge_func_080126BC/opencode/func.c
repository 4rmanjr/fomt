#include "common.h"
s32 func_08050DC8(s32, s32, s32, s32);                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[12];
    struct GenObj *unkAC;
} GenObj;
void func_080126BC(GenObj *arg0, ? arg1) {
    s32 temp_r2;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r2 = temp_r4->unkAC;
    if (temp_r2 != 0) {
        func_08050DC8(temp_r2, arg1, 0x40, ((GenObj *)((u8 *)temp_r4 + 0xAC))->unk4);
        temp_r4->unk9C = 0x11;
    }
}

