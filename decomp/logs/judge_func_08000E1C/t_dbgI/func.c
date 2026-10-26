#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08000F5C(void *);                            /* extern */
s32 func_08008724();                                  /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
extern ? vtable_unk_080E5B80;

void func_08000E1C(void *arg0) {
    s16 sp0;
    void *sp4;
    s16 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r6;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r4;
    void *temp_r5;

    func_08008724();
    func_08000F5C(arg0);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    var_r6 = 0;
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4;
    func_0800934C(temp_r5, 0x889, 1, 0);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    arg0->unk6D32 = 0;
    func_08008B6C(arg0 + 8, 0);
    do {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r0_3 = arg0->unk6D32;
        switch (temp_r0_3) {                        /* irregular */
        case 0:
            temp_r1_2 = sp4->unk0;
            if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
                arg0->unk6D2C = 0x78;
                arg0->unk6D32 = 1;
            }
            break;
        case 1:
            arg0->unk6D2C = (s32) (arg0->unk6D2C - 1);
            if (func_080088CC(arg0) & 8) {
                arg0->unk6D2C = 0;
            }
            if ((s32) arg0->unk6D2C <= 0) {
                func_08009378(sp4 + 0xC, 0x889, 1, 0);
                temp_r0_4 = func_08008940(arg0);
                temp_r0_4->unk8->unk10(temp_r0_4, sp4);
                arg0->unk6D32 = 2;
            }
            break;
        case 2:
            temp_r1_3 = sp4->unk0;
            if ((s32) ((0 - temp_r1_3) | temp_r1_3) >= 0) {
                var_r6 = 1;
            }
            break;
        }
    } while (var_r6 == 0);
    if (sp4 != 0) {
        sp4->unk8->unkC(sp4, 3);
    }
}

