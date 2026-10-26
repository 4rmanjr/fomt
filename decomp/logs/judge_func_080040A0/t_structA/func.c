#include "common.h"
s32 __builtin_delete(s32);                            /* extern */
s32 **__builtin_new(s32);                             /* extern */
s32 func_080003DC(void *, u8);                      /* extern */
s32 func_08000470(void *, u8);                        /* extern */
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08011650(s32 **, void *, s32, s32 *);        /* extern */
s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_080D4178(s32, s32);                          /* extern */
s32 func_080D4480(s32, s32);                          /* extern */
extern s32 gUnk_080E88D8;
extern s32 vtable_unk_080E5A4C;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[117];
    s32 unk85;
    u8 _pad89[3];
    s32 unk8C;
} GenObj;
s32 func_080040A0(GenObj *arg0) {
    u16 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
    s32 **temp_r0_4;
    s32 **temp_r1_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_sl;
    s32 var_r7;
    u8 temp_r0;
    void *temp_r4;

    temp_r0 = arg0->unk85;
    temp_r4 = arg0 + 0x90;
    temp_sl = func_080003DC(temp_r4, temp_r0);
    sp8 = 0;
    var_r7 = 3;
    spC = temp_r4;
loop_1:
    sp0 = 0x1000 & func_08000528(0x1000);
    temp_r0_2 = func_08011650(__builtin_new(0x34F4), arg0 + 0x90, temp_sl, &sp8);
    sp4 = temp_r0_2;
    if (sp8 == 0) {
        temp_r4_2 = arg0->unk8;
        if (temp_r4_2 != 0) {
            func_080D4480(temp_r4_2, 2);
            temp_r0_3 = arg0->unk8;
            if (temp_r0_3 != 0) {
                func_080D4178(temp_r0_3, sp4);
            }
        } else {
            temp_r0_4 = __builtin_new(8);
            temp_r0_4->unk0 = &vtable_unk_080E5A4C;
            temp_r1 = sp4;
            sp4 = temp_r4_2;
            temp_r0_4->unk4 = temp_r1;
            temp_r1_2 = arg0->unkC;
            if ((temp_r0_4 != temp_r1_2) && (temp_r1_2 != 0)) {
                (*temp_r1_2)->unk8(temp_r1_2, 3);
            }
            arg0->unkC = temp_r0_4;
        }
        func_08008B6C(arg0 + 0x18, 0xC5);
        func_08000470(spC, temp_r0);
        if (sp4 != 0) {
            func_080D4480(sp4, 3);
        }
        if (sp0 != 0) {
            func_080004F4();
        }
        return 1;
    }
    sp4 = 0;
    __builtin_delete(temp_r0_2);
    if (0 != 0) {
        func_080D4480(0, 3);
    }
    if (sp0 != 0) {
        func_080004F4();
    }
    var_r7 -= 1;
    if (var_r7 == 0) {
        func_08050DC8(arg0 + 0x10, &gUnk_080E88D8, 0, 0);
        arg0->unk8C = 3;
        func_08008B6C(arg0 + 0x18, 0xC7);
        return 0;
    }
    goto loop_1;
}

