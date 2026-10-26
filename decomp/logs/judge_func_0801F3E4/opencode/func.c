#include "common.h"
u16 GetIconId__C7Article(s32 *);                      /* extern */
s32 GetVaseArticleId__C9FarmHouse(s32);             /* extern */
s32 __7ArticleUi(s32 *);                                /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_0805E824(void ***, void **, u16, s32);       /* extern */
s32 func_080A4740(void *, void *, s32, s32);          /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? vtable_unk_080E602C;

void func_0801F3E4(void *arg0) {
s32 sp0;
    void **sp20;
s32 sp34;
    u16 *sp38;
    u16 temp_r7;
    void **temp_r4_2;
    void **var_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r6;
    void *var_r5;

    if (arg0->unk0->unk14(arg0) == 0x1D) {
        if (GetVaseArticleId__C9FarmHouse(arg0->unk1038 + 0x1F4) != 0x5F) {
            __7ArticleUi(&sp34);
            temp_r7 = GetIconId__C7Article(&sp34);
            temp_r4 = arg0->unk1068;
            if (temp_r4 != 0) {
                func_0805E824(&sp20, arg0->unk0->unk64(arg0), temp_r7, 0x100);
                (*sp20)->unk10(&sp0, sp20, *(sp24 + (sp20.unkC * 4)));
                memcpy(&sp0, &sp0, 0x20);
                temp_r1 = temp_r4 + 0x28;
                temp_r0 = &sp0 + 0xC;
                temp_r4->unk28 = (s32) sp0.unk0;
                temp_r1->unk4 = (s32) sp0.unk4;
                temp_r1->unk8 = (s32) sp0.unk8;
                temp_r1_2 = temp_r1 + 0xC;
                temp_r1->unkC = (s32) sp0.unkC;
                temp_r1_2->unk4 = (s32) temp_r0->unk4;
                temp_r1_2->unk8 = (s32) temp_r0->unk8;
                temp_r1_2->unkC = (s32) temp_r0->unkC;
                (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
                temp_r4->unk48 = 1;
                return;
            }
            var_r5 = __builtin_new(0x4C);
            temp_r4_2 = arg0->unk0->unk64(arg0);
            func_080A4740(var_r5, arg0, 2, 0x1B);
            var_r5->unk24 = &vtable_unk_080E602C;
            temp_r6 = *temp_r4_2;
            temp_r6->unkC(&sp38, temp_r4_2, temp_r7);
            temp_r6->unk10(var_r5 + 0x28, temp_r4_2, *sp38);
            var_r5->unk48 = 1;
            var_r4 = arg0 + 0x1068;
            goto block_6;
        }
    } else {
        var_r4 = arg0 + 0x1068;
        var_r5 = 0;
block_6:
        temp_r1_3 = *var_r4;
        if ((var_r5 != temp_r1_3) && (temp_r1_3 != 0)) {
            temp_r1_3->unk24->unk8(temp_r1_3, 3);
        }
        *var_r4 = var_r5;
    }
}

