#include "common.h"
s32 func_08005CDC(void *);                            /* extern */
s32 func_080061A0(void *, s32);                       /* extern */
s32 func_08006334(void *);                            /* extern */
s32 func_0800637C(void *);                            /* extern */
s32 func_080064E8(void *);                            /* extern */
s32 func_08006858(void *);                            /* extern */
s32 func_080068CC(void *);                            /* extern */
s32 func_08006CDC(void *);                            /* extern */
s32 func_08006ED8(void *);                            /* extern */
s32 func_08007874(s32 *);                               /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007D4C(s32 *);                             /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009300(s32 *, void *);                       /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);                /* extern */
s32 func_08009378(s32 *, s32, s32, s32);                /* extern */
s32 func_080094B8(s32 *, s32);                        /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[60];
    s32 unk50;
    u8 _pad54[17890];
    s32 unk4636;
} GenObj;
s32 *func_08005B68(s32 *arg0, GenObj *arg1) {
s32 sp0;
    s32 sp4;
    s16 sp8;
    GenObj *spC;
    s32 *sp14;
s32 sp18;
    void **sp1C;
    void ***sp20;
    s32 temp_r4;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r1;

    func_08008724(arg1);
    func_08007874(&sp0);
    sp4 = 0;
    func_08007C28(&sp0, 0);
    sp4 = func_08007B54(&sp0, 3);
    temp_r4 = func_08007D4C(&sp0);
    func_08005CDC(arg1);
    func_080061A0(arg1, temp_r4);
    func_08006334(arg1);
    func_0800637C(arg1);
    temp_r0 = func_08008918(arg1);
    sp8 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = func_08008918(arg1);
    spC = 0;
    spC.unk4 = 0;
    sp14 = &vtable_unk_080E5B80;
    func_08009300(&sp18, temp_r1);
    func_0800934C(&sp18, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, &spC);
    if ((s32) ((0 - spC) | spC) < 0) {
        do {
            func_080087C8(arg1);
        } while ((s32) ((0 - spC) | spC) < 0);
    }
loop_4:
    if (arg1->unk4636 == 0) {
        func_080088B8(arg1);
        func_08006CDC(arg1);
        func_080068CC(arg1);
        func_0800637C(arg1);
        func_080064E8(arg1);
        func_08006858(arg1);
        func_08006ED8(arg1);
        func_080087C8(arg1);
        goto loop_4;
    }
    func_08009378(&sp18, 0x889, 1, 1);
    temp_r0_3 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_3->unk8->unk10))(temp_r0_3, &spC);
loop_7:
    if ((s32) ((0 - spC) | spC) < 0) {
        func_080087C8(arg1);
        goto loop_7;
    }
    sp1C = 0;
    sp20 = &sp1C;
    sp20.unk4 = 0;
    sp1C = 0;
    *arg0 = 0;
    if (sp1C != 0) {
        (*sp1C)->unk8(sp1C, 3);
    }
    func_080094B8(&spC, 2);
    func_08007C28(&sp0, sp4);
    func_080079E8(&sp0, 2);
    return arg0;
}

