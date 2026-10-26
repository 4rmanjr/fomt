#include "common.h"
u16 GetIconId__C7Article(s32 *);                      /* extern */
s32 GetVaseArticleId__C9FarmHouse(s32);             /* extern */
s32 __7ArticleUi(s32 *);                                /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_0805E824(void ***, void **, u16, s32);       /* extern */
s32 func_080A4740(void *, void *, s32, s32);          /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 vtable_unk_080E602C;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 _pad18[12];
    struct GenObj *unk24;
    struct GenObj *unk28;
    u8 _pad2C[28];
    struct GenObj *unk48;
    u8 _pad4C[24];
    s32 unk64;
    u8 _pad68[4048];
    s32 unk1038;
    u8 _pad103C[44];
    s32 unk1068;
} GenObj;
void func_0801F3E4(GenObj *arg0) {
GenObj sp0;
    void **sp20;
s32 sp34;
    u16 *sp38;
    u16 temp_r7;
    void **temp_r4_2;
    void **var_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r4;
    GenObj *temp_r6;
    GenObj *var_r5;

    if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) == 0x1D) {
        if (GetVaseArticleId__C9FarmHouse(arg0->unk1038 + 0x1F4) != 0x5F) {
            __7ArticleUi(&sp34);
            temp_r7 = GetIconId__C7Article(&sp34);
            temp_r4 = arg0->unk1068;
            if (temp_r4 != 0) {
                func_0805E824(&sp20, ((void (*)(void *,...))(arg0->unk0->unk64))(arg0), temp_r7, 0x100);
                (*sp20)->unk10(&sp0, sp20, *((u8 *)sp24 + (sp20.unkC * 4)));
                memcpy(&sp0, &sp0, 0x20);
                temp_r1 = (GenObj *)((u8 *)temp_r4 + 0x28);
                temp_r0 = &(GenObj *)((u8 *)sp0 + 0xC);
                temp_r4->unk28 = (s32) sp0;
                temp_r1->unk4 = (s32) sp0.unk4;
                temp_r1->unk8 = (s32) sp0.unk8;
                temp_r1_2 = temp_r1 + 0xC;
                temp_r1->unkC = (s32) sp0.unkC;
                temp_r1_2->unk4 = (s32) temp_r0->unk4;
                temp_r1_2->unk8 = (s32) temp_r0->unk8;
                temp_r1_2->unkC = (s32) temp_r0->unkC;
                (temp_r1_2 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
                temp_r4->unk48 = 1;
                return;
            }
            var_r5 = __builtin_new(0x4C);
            temp_r4_2 = ((void (*)(void *,...))(arg0->unk0->unk64))(arg0);
            func_080A4740(var_r5, arg0, 2, 0x1B);
            var_r5->unk24 = &vtable_unk_080E602C;
            temp_r6 = *temp_r4_2;
            temp_r6->unkC(&sp38, temp_r4_2, temp_r7);
            temp_r6->unk10((GenObj *)((u8 *)var_r5 + 0x28), temp_r4_2, *sp38);
            var_r5->unk48 = 1;
            var_r4 = (GenObj *)((u8 *)arg0 + 0x1068);
            goto block_6;
        }
    } else {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1068);
        var_r5 = 0;
block_6:
        temp_r1_3 = *var_r4;
        if ((var_r5 != temp_r1_3) && (temp_r1_3 != 0)) {
            ((void (*)(void *,...))(temp_r1_3->unk24->unk8))(temp_r1_3, 3);
        }
        *var_r4 = var_r5;
    }
}

