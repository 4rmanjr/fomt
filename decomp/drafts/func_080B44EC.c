s32 func_080087C8(void *);                            /* extern */
void *func_08008918(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080B45E4(void *);                            /* extern */
s32 func_080B45F0(void *);                            /* extern */
s32 func_080B469C(void *);                            /* extern */
s32 func_080B5824(void *);                            /* extern */
s32 func_080B7648(void *);                            /* extern */
s32 func_080B888C(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[80];
    s32 unk50;
    u8 _pad54[1868];
    s32 unk7A0;
    u8 _pad7A4[880];
    s32 unkB14;
    u8 _padB18[26];
    s32 unkB32;
} GenObj;
s32 *func_080B44EC(s32 *arg0, GenObj *arg1) {
    s16 sp0;
    void **sp4;
    void ***sp8;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    GenObj *temp_r0;

    func_080B45E4(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    func_080B45F0(arg1);
    func_08008B6C((GenObj *)((u8 *)arg1 + 0x704), 0x21);
    if (arg1->unkB32 == 0) {
        do {
            func_080087C8(arg1);
            temp_r0_2 = arg1->unkB14;
            switch (temp_r0_2) {                    /* irregular */
            case 1:
                func_080B469C(arg1);
                break;
            case 2:
                func_080B7648(arg1);
                break;
            case 0:
                func_080B5824(arg1);
                break;
            case 3:
                func_080B888C(arg1);
                break;
            }
        } while (arg1->unkB32 == 0);
    }
    temp_r0_3 = *arg1->unk7A0;
    if ((s32) ((0 - temp_r0_3) | temp_r0_3) < 0) {
        do {
            func_080087C8(arg1);
            temp_r0_4 = *arg1->unk7A0;
        } while ((s32) ((0 - temp_r0_4) | temp_r0_4) < 0);
    }
    sp4 = 0;
    sp8 = &sp4;
    sp8.unk4 = 0;
    sp4 = 0;
    *arg0 = 0;
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    return arg0;
}
