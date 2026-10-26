s32 __builtin_new(s32);                             /* extern */
void **func_08083A7C(s32, s32 *, s32, u8, s32, s32, s32, s32); /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} GenObj;
void ***func_080DC068(void ***arg0, GenObj *arg1) {
    void **sp10;
    s32 sp14;
    void ***sp18;
    void **sp1C;
    s32 temp_r0;
    void **temp_r0_2;

    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp14 = temp_r0;
    temp_r0_2 = func_08083A7C(__builtin_new(0x20), &sp14, arg1->unk8, arg1->unk1C, arg1->unkC, arg1->unk10, arg1->unk14, arg1->unk18);
    sp10 = temp_r0_2;
    sp18 = &sp10;
    sp1C = temp_r0_2;
    sp10 = 0;
    *arg0 = temp_r0_2;
    if (sp10 != 0) {
        (*sp10)->unk8(sp10, 3);
    }
    return arg0;
}
