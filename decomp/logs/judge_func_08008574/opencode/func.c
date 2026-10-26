#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08008980(void *);                            /* extern */
s32 func_080091A4(void *, s32, s32);                  /* extern */
s32 func_080096B0(void *);                            /* extern */
s32 func_08009744(void *, u8, u8);                    /* extern */
extern ? vtable_unk_080E5B00;
extern ? vtable_unk_080E5BB4;
extern ? vtable_unk_080E5BD8;

void *func_08008574(void *arg0, void *arg1) {
    u16 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r2;

    arg0->unk4 = &vtable_unk_080E5B00;
    temp_r0 = __builtin_new(0x4B0);
    func_080091A4(temp_r0, 0x1E, 4);
    temp_r0->unk24 = 0;
    temp_r0->unk28 = 0;
    temp_r0_2 = temp_r0 + 0x2C;
    temp_r0_2->unk4 = 0;
    func_080096B0(temp_r0_2 + 8);
    func_08009744(temp_r0 + 0x8C, arg1->unk0, arg1->unk1);
    func_08008980(temp_r0 + 0x490);
    temp_r2 = temp_r0 + 0x494;
    temp_r0->unk494 = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = temp_r0 + 0x4A4;
    temp_r2->unkC = temp_r1;
    temp_r0->unk4A4 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r2->unk10 = (void *) (temp_r0 + 0x4A0);
    temp_r2->unk14 = temp_r1;
    temp_r0_3 = temp_r0->unk38 | 8;
    temp_r0->unk38 = temp_r0_3;
    *(u16 *)0x04000004 = temp_r0_3;
    arg0->unk0 = temp_r0;
    return arg0;
}

