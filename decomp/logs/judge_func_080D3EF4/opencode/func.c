#include "common.h"
s32 __12ScriptEnginePv(s32 **);                         /* extern */
? **__builtin_new(s32);                             /* extern */
s32 func_080D40CC(s32 **);                              /* extern */
s32 func_080D4130(s32 **);                              /* extern */
s32 func_080D4480(s32, s32);                          /* extern */
extern ? **gUnk_0300040C;
extern ? vtable_unk_080E5BF8;

? ***func_080D3EF4(s32 ***arg0, void *arg1) {
    ? **sp0;
    s32 sp4;
    ? ***sp8;
    ? ***sp10;
    ? **temp_r0;
    ? **var_r4;
    ? **var_r4_2;
    s32 temp_r1;
    s32 var_r5;
    s32 var_r5_2;

    sp10 = arg0;
    temp_r0 = __builtin_new(0x554);
    temp_r1 = arg1->unk4;
    arg1->unk4 = 0;
    temp_r0->unk0 = &vtable_unk_080E5BF8;
    sp4 = 0;
    temp_r0->unk4 = temp_r1;
    __12ScriptEnginePv(temp_r0 + 8);
    temp_r0->unk364 = 0;
    temp_r0->unk36C = 0;
    (temp_r0 + 0x36C)->unk4 = 0x1D;
    temp_r0->unk374 = (u8) ((-0x20 & temp_r0->unk374) | 6);
    temp_r0->unk374 = (s16) (0xFFFFF81F & (u16) temp_r0->unk374);
    temp_r0->unk378 = 0;
    temp_r0->unk38C = 0;
    temp_r0->unk4D0 = 0;
    var_r4 = temp_r0 + 0x4DC;
    var_r5 = 5;
    do {
        func_080D4130(var_r4);
        var_r4 += 0xC;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r4_2 = temp_r0 + 0x524;
    var_r5_2 = 3;
    do {
        func_080D40CC(var_r4_2);
        var_r4_2 += 0xC;
        var_r5_2 -= 1;
    } while (var_r5_2 != -1);
    gUnk_0300040C = temp_r0;
    if (sp4 != 0) {
        func_080D4480(sp4, 3);
    }
    sp0 = temp_r0;
    sp8 = &sp0;
    sp8.unk4 = sp0;
    *sp8 = 0;
    *sp10 = sp0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}

