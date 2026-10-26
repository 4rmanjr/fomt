#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_080A4740(void *, void **, s32, s32);         /* extern */
s32 func_080A47B4(void *, s32);                       /* extern */
extern s32 vtable_unk_080E602C;

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[8];
    s32 unkC;
    s32 unk10;
    u8 _pad14[16];
    void *unk24;
    u8 _pad28[32];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
} GenObj;
void func_08038DF0(GenObj *arg0) {
    u16 *sp0;
    void **temp_r4;
    void **temp_r5;
    GenObj *temp_r4_2;
    void *temp_r4_3;
    GenObj *temp_r7;

    temp_r7 = __builtin_new(0x54);
    temp_r4 = *arg0->unk0;
    temp_r5 = (*temp_r4)->unk70(temp_r4);
    func_080A4740(temp_r7, temp_r4, 6, 0x1B);
    temp_r7->unk24 = &vtable_unk_080E602C;
    temp_r4_2 = *temp_r5;
    temp_r4_2->unkC(&sp0, temp_r5, 0);
    temp_r4_2->unk10((GenObj *)((u8 *)temp_r7 + 0x28), temp_r5, *sp0);
    temp_r7->unk48 = 1;
    temp_r7->unk4C = 0x01200000;
    temp_r7->unk50 = 0;
    ((GenObj *)((u8 *)temp_r7 + 0x50))->unk1 = 0;
    temp_r4_3 = arg0->unkC;
    if ((temp_r7 != temp_r4_3) && (temp_r4_3 != 0)) {
        func_080A47B4(temp_r4_3, 2);
        __builtin_delete(temp_r4_3);
    }
    arg0->unkC = temp_r7;
}

