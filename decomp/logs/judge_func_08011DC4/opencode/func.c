#include "common.h"
s32 SetUnk__12ScriptEnginePv(s32, void *);            /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08008980(void *);                            /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_080096B0(void *);                            /* extern */
extern s32 gUnk_0300040C;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E5C08;
extern s32 vtable_unk_080E5E64;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    u8 _pad18[84];
    s32 unk6C;
    u8 _pad70[12];
    s32 unk7C;
    u8 _pad80[32];
    s32 unkA0;
    u8 _padA4[44];
    s32 unkD0;
    u8 _padD4[32];
    void *unkF4;
} GenObj;
void *func_08011DC4(GenObj *arg0, s32 arg1, GenObj *arg2) {
    u16 temp_r0_16;
    GenObj *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    GenObj *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    GenObj *temp_r1;
    GenObj *temp_r2;

    arg0->unk0 = &vtable_unk_080E5E64;
    temp_r0 = __builtin_new(0xF8);
    temp_r0->unkF4 = &vtable_unk_080E5C08;
    temp_r0->unk0 = 0;
    temp_r0->unk4 = 0;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 8);
    temp_r0_2->unk4 = 0;
    func_080096B0((GenObj *)((u8 *)temp_r0_2 + 8));
    func_08008980((GenObj *)((u8 *)temp_r0 + 0x68));
    temp_r2 = (GenObj *)((u8 *)temp_r0 + 0x6C);
    temp_r0->unk6C = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = (GenObj *)((u8 *)temp_r0 + 0x7C);
    temp_r2->unkC = temp_r1;
    temp_r0->unk7C = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r0_3 = (GenObj *)((u8 *)temp_r0 + 0x78);
    temp_r2->unk10 = temp_r0_3;
    temp_r2->unk14 = temp_r1;
    temp_r0_4 = (GenObj *)((u8 *)temp_r0_3 + 0x10);
    temp_r0_3->unk10 = arg0;
    temp_r0_5 = temp_r0_4 + 4;
    temp_r0_4->unk4 = arg1;
    temp_r0_6 = temp_r0_5 + 4;
    temp_r0_5->unk4 = (s32) arg2->unk0;
    temp_r0_6->unk4 = (s32) arg2->unk4;
    temp_r0_6->unk8 = (s32) arg2->unk8;
    temp_r0_7 = (GenObj *)((u8 *)temp_r0 + 0xA0);
    temp_r0->unkA0 = 0;
    temp_r0_8 = (GenObj *)((u8 *)temp_r0_7 + 4);
    temp_r0_7->unk4 = 0;
    temp_r0_9 = temp_r0_8 + 4;
    temp_r0_8->unk4 = 0;
    temp_r0_10 = temp_r0_9 + 4;
    temp_r0_9->unk4 = 0;
    temp_r0_11 = temp_r0_10 + 4;
    temp_r0_10->unk4 = 0;
    temp_r0_12 = temp_r0_11 + 4;
    temp_r0_11->unk4 = 0;
    temp_r0_12->unk4 = 0;
    func_08008B54(temp_r0_12 + 4 + 4, 0);
    func_08008B54((GenObj *)((u8 *)temp_r0 + 0xC0), 1);
    func_08008B54((GenObj *)((u8 *)temp_r0 + 0xC4), 2);
    func_08008B54((GenObj *)((u8 *)temp_r0 + 0xC8), 3);
    func_08008B54((GenObj *)((u8 *)temp_r0 + 0xCC), 4);
    temp_r0_13 = (GenObj *)((u8 *)temp_r0 + 0xD0);
    temp_r0->unkD0 = 0;
    temp_r0_13->unk4 = 0;
    temp_r0_14 = (GenObj *)((u8 *)temp_r0_13 + 8);
    temp_r0_14->unk4 = 0;
    temp_r0_15 = temp_r0_14 + 0x10;
    temp_r0_14->unk10 = 0;
    temp_r0_15->unk2 = 0;
    (temp_r0_15 + 2)->unk6 = 0;
    temp_r0_16 = temp_r0->unk14 | 8;
    temp_r0->unk14 = temp_r0_16;
    *(u16 *)0x04000004 = temp_r0_16;
    arg0->unk4 = temp_r0;
    SetUnk__12ScriptEnginePv(gUnk_0300040C + 8, arg0);
    return arg0;
}

