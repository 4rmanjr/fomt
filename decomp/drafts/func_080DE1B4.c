s32 __builtin_delete(void *);                         /* extern */
extern s32 vtable_unk_080E65E0;
extern s32 vtable_unk_080E76D4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[64];
    struct GenObj *unk4C;
} GenObj;
void func_080DE1B4(GenObj *arg0, s32 arg1) {
    void *sp4;
    void *spC;
    s32 var_r1;
    void *temp_r1;

    arg0->unk4 = &vtable_unk_080E76D4;
    sp4 = (arg0->unk8 * 4) + arg0 + 0xC;
    spC = arg0 + 0xC;
loop_4:
    var_r1 = 0;
    if (sp4 == spC) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        temp_r1 = *(sp4 - 4);
        if (temp_r1 != 0) {
            ((void (*)(void *,...))(temp_r1->unk4C->unk8))(temp_r1, 3);
        }
        sp4 -= 4;
        goto loop_4;
    }
    arg0->unk4 = &vtable_unk_080E65E0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
