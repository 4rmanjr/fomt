s32 **__builtin_new(s32);                             /* extern */
extern s32 vtable_unk_080E5E84;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
s32 ***func_080DB320(s32 ***arg0, GenObj *arg1) {
    s32 **sp0;
    s32 sp4;
    s32 ***sp8;
    s32 **spC;
    s32 **temp_r0;
    s32 temp_r5;

    temp_r0 = __builtin_new(0xC);
    temp_r5 = arg1->unk4;
    arg1->unk4 = 0;
    temp_r0->unk0 = &vtable_unk_080E5E84;
    sp4 = 0;
    temp_r0->unk4 = temp_r5;
    temp_r0->unk8 = (s32) arg1->unk8;
    sp0 = temp_r0;
    sp8 = &sp0;
    spC = temp_r0;
    sp0 = 0;
    *arg0 = temp_r0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
