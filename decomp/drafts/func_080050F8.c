void *__builtin_new(s32);                           /* extern */
s32 func_08005254(void *);                            /* extern */
s32 func_08005260(void *);                            /* extern */
s32 func_08005278(void *);                            /* extern */
s32 func_08005800(void *);                            /* extern */
s32 func_080087C8(s32);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088D4(void *);                            /* extern */
s32 func_08008918(s32);                        /* extern */
s32 func_08008940(s32);                        /* extern */
s32 func_08009300(void *, ...);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
void func_08009378(void *, i16, s32, s32);             /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[60];
    u16 unk50;
    u8 _pad52[6690];
    u8 unk1A74;
} GenObj;
s32 *func_080050F8(s32 *arg0, GenObj *arg1) {
    struct { s32 sp0; GenObj *volatile sp4; GenObj *slot[3]; } fr;
    GenObj **p7;
    GenObj **p8;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r4;
    s32 var_r5;
    register s32 sv __asm__("r0");
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r1;
    GenObj *temp_r4;
    void *temp_r5;
    GenObj *obj;
    register s32 zero __asm__("r0");
    register s16 *psp __asm__("r1");
    register s32 c3f __asm__("r2");

    func_08005254((void *) arg1);
    func_08005260(arg1);
    func_08005278(arg1);
    temp_r0 = (GenObj *) func_08008918((s32) arg1);
    psp = (s16 *) &fr.sp0;
    c3f = 0x3F;
    *psp = (s16) c3f;
    temp_r0->unk50 = (u16) c3f;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = (GenObj *) func_08008918((s32) arg1);
    zero = 0;
    temp_r4->unk0 = zero;
    temp_r4->unk4 = (GenObj *) zero;
    temp_r4->unk8 = (GenObj *) &vtable_unk_080E5B80;
    temp_r5 = (GenObj *)((u8 *)temp_r4 + 0xC);
    func_08009300(temp_r5, temp_r1);
    fr.sp4 = temp_r4;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = (GenObj *) func_08008940((s32) arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, fr.sp4);
    var_r4 = 0;
    var_r5 = 0;
    p7 = &fr.slot[0];
    p8 = &fr.slot[1];
    do {
        func_080087C8((s32) arg1);
        func_080088B8(arg1);
        func_080088D4(arg1);
        sv = var_r4;
        switch (sv) {                               /* irregular */
        case 0:
            temp_r1_2 = fr.sp4->unk0;
            if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
                var_r4 = 1;
            }
            break;
        case 1:
            func_08005800(arg1);
            if (arg1->unk1A74 != 0) {
                var_r4 = 2;
            }
            break;
        case 2:
            func_08009378((void *)((u8 *)fr.sp4 + 0xC), (i16) 0x889, 1, 1);
            temp_r0_3 = (GenObj *) func_08008940((s32) arg1);
            ((void (*)(void *,...))(temp_r0_3->unk8->unk10))(temp_r0_3, fr.sp4);
            var_r4 = 3;
            break;
        case 3:
            temp_r1_3 = fr.sp4->unk0;
            if ((s32) ((0 - temp_r1_3) | temp_r1_3) >= 0) {
                var_r5 = 1;
            }
            break;
        }
    } while (var_r5 == 0);
    fr.slot[0] = 0;
    fr.slot[1] = (GenObj *) p7;
    *(s32 *)(p8 + 1) = 0;
    *p7 = 0;
    *arg0 = 0;
    if (fr.slot[0] == 0) {
    } else {
        ((void (*)(void *,...))(((GenObj *)(fr.slot[0]->unk0))->unk8))(fr.slot[0], 3);
    }
    obj = fr.sp4;
    if (obj != 0) {
        ((void (*)(void *,...))(obj->unk8->unkC))(obj, 3);
    }
    return arg0;
}
