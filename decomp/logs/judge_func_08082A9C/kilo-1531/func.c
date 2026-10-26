#include "common.h"
s32 GetFirstSlotWithArticle__C8RucksackUi(s32, s32); /* extern */
s32 GetId__C7Article(s8 *);                         /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_080CABA0(void *, ? *);                       /* extern */
extern ? gUnk_080FEE68;
extern ? gUnk_080FEED8;
extern ? gUnk_080FEF44;
extern ? gUnk_080FEF78;
extern ? gUnk_080FEFAC;
extern ? gUnk_080FF040;

void func_08082A9C(void *arg0, s32 arg1, u32 arg2) {
    s8 sp0;
    s32 *var_r1_2;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_3;
    s32 var_r8;

    var_r8 = 0;
    if (GetFirstSlotWithArticle__C8RucksackUi(arg0->unk8 + 0x1C38, arg1) == -1) {
        if (((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(arg0->unk8 + 0x1C2C) == 1)) {
            sp0 = func_0800F258(arg0->unk8 + 0x1C2C);
            var_r1 = 0;
            if (GetId__C7Article(&sp0) == arg1) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                var_r8 = 1;
            }
        }
        if (var_r8 != 0) {
            goto block_8;
        }
        if (arg1 == 0x17) {
            func_080CABA0(arg0, &gUnk_080FEFAC);
        } else {
            func_080CABA0(arg0, &gUnk_080FF040);
        }
        func_08050E50(arg0 + 0x348, 0xA8);
        var_r1_2 = arg0 + 0x6A4;
        var_r0 = 2;
    } else {
block_8:
        var_r1_3 = 0;
        if (arg2 > (u32) arg0->unk8->unk1AA8) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {
            if (arg1 == 0x17) {
                func_080CABA0(arg0, &gUnk_080FEE68);
            } else {
                func_080CABA0(arg0, &gUnk_080FEED8);
            }
            func_08050E50(arg0 + 0x348, 0xA8);
            var_r1_2 = arg0 + 0x6A4;
            var_r0 = 3;
        } else {
            arg0->unk48DC = arg1;
            if (arg1 == 0x17) {
                arg0->unk48E4 = 5;
                arg0->unk48E0 = arg2;
                func_080CABA0(arg0, &gUnk_080FEF44);
            } else {
                arg0->unk48E4 = 1;
                arg0->unk48E0 = arg2;
                func_080CABA0(arg0, &gUnk_080FEF78);
            }
            func_08050E50(arg0 + 0x348, 0xA9);
            var_r1_2 = arg0 + 0x6A4;
            var_r0 = 5;
        }
    }
    *var_r1_2 = var_r0;
}

