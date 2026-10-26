s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_080E586C(void *);                            /* extern */
extern s32 vtable_unk_080E85CC;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[512];
    void *unk210;
} GenObj;
void func_080CADF0(GenObj *arg0, s32 arg1) {
    GenObj *sp0;
    s32 *sp4;
    s32 *var_r0;
    s32 *var_r1;
    s32 temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r4;

    arg0->unk210 = &vtable_unk_080E85CC;
    var_r0 = arg0->unk8;
    var_r1 = *var_r0;
    sp0 = var_r1;
    sp4 = var_r0;
loop_4:
    temp_r1 = (s32) var_r1 ^ (s32) var_r0;
    if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
        temp_r1_2 = sp0->unk8;
        if (temp_r1_2 != 0) {
            ((void (*)(void *,...))(temp_r1_2->unk8->unkC))(temp_r1_2, 3);
        }
        var_r0 = sp0->unk0;
        sp0 = var_r0;
        var_r1 = sp4;
        goto loop_4;
    }
    temp_r4 = (GenObj *)((u8 *)arg0 + 4);
    func_080E586C(temp_r4);
    if (temp_r4->unk4 != 0) {
        free();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
