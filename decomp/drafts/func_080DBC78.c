s32 __builtin_new(s32);                             /* extern */
void **func_080931B0(s32, s32 *, s32);              /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
void ***func_080DBC78(void ***arg0, GenObj *arg1) {
    void **sp0;
    s32 sp4;
    void ***sp8;
    void **spC;
    s32 temp_r0;
    void **temp_r0_2;

    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp4 = temp_r0;
    temp_r0_2 = func_080931B0(__builtin_new(0xC), &sp4, arg1->unk8);
    sp0 = temp_r0_2;
    sp8 = &sp0;
    spC = temp_r0_2;
    sp0 = 0;
    *arg0 = temp_r0_2;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
