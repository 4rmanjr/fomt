#include "common.h"
s32 func_08050E68(s32, s32);                          /* extern */
s32 func_0809FE3C(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[164];
    struct GenObj *unkAC;
    u8 _padB0[8544];
    s32 unk2210;
} GenObj;
void func_080126E4(GenObj *arg0) {
    s32 temp_r4;
    GenObj *temp_r2;
    void *temp_r2_2;

    temp_r2 = arg0->unk4;
    temp_r4 = temp_r2->unkAC;
    if (temp_r4 != 0) {
        temp_r2_2 = *(((GenObj *)((u8 *)temp_r2 + 0xAC)) - 0x20);
        if ((s32) (temp_r2_2->unk2210 << 0x1C) < 0) {
            func_08050E68(temp_r4, func_0809FE3C((GenObj *)((u8 *)temp_r2_2 + 0x1CD4)));
        }
    }
}

