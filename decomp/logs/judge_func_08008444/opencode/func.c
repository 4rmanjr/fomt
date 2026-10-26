#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08008980(void *);                            /* extern */
s32 func_080091A4(void *, s32, s32);                  /* extern */
s32 func_080096B0(void *);                            /* extern */
s32 func_08009744(void *, s32, s32);                  /* extern */
extern s32 vtable_unk_080E5B00;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    u8 _pad18[12];
    s32 unk24;
    s32 unk28;
    u8 _pad2C[12];
    s32 unk38;
    u8 _pad3C[1112];
    s32 unk494;
    u8 _pad498[12];
    s32 unk4A4;
} GenObj;
void *func_08008444(GenObj *arg0) {
    u16 temp_r0_3;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r2;

    arg0->unk4 = &vtable_unk_080E5B00;
    temp_r0 = __builtin_new(0x4B0);
    func_080091A4(temp_r0, 0x1E, 4);
    temp_r0->unk24 = 0;
    temp_r0->unk28 = 0;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 0x2C);
    temp_r0_2->unk4 = 0;
    func_080096B0((GenObj *)((u8 *)temp_r0_2 + 8));
    func_08009744((GenObj *)((u8 *)temp_r0 + 0x8C), 0, 0x20);
    func_08008980((GenObj *)((u8 *)temp_r0 + 0x490));
    temp_r2 = (GenObj *)((u8 *)temp_r0 + 0x494);
    temp_r0->unk494 = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = (GenObj *)((u8 *)temp_r0 + 0x4A4);
    temp_r2->unkC = temp_r1;
    temp_r0->unk4A4 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r2->unk10 = (void *) ((GenObj *)((u8 *)temp_r0 + 0x4A0));
    temp_r2->unk14 = temp_r1;
    temp_r0_3 = temp_r0->unk38 | 8;
    temp_r0->unk38 = temp_r0_3;
    *(u16 *)0x04000004 = temp_r0_3;
    arg0->unk0 = temp_r0;
    return arg0;
}

