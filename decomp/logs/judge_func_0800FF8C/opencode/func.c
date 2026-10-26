#include "common.h"
typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk3;
    struct GenObj *unk4;
    u8 _pad8[28];
    s32 unk24;
} GenObj;
void func_0800FF8C(GenObj *arg0) {
    GenObj *temp_r4;

    arg0->unk0 = 0;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x24);
    arg0->unk24 = (u16) ((0xFFFFFC00 & arg0->unk24) | 0x234);
    temp_r4->unk1 = (u8) (3 & temp_r4->unk1);
    temp_r4->unk2 = (u16) (0xFFFFFC00 & temp_r4->unk2);
    temp_r4->unk3 = (u8) (3 & temp_r4->unk3);
    temp_r4->unk4 = (u16) (0xFFFFFC00 & temp_r4->unk4);
}

