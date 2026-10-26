extern s32 vtable_unk_080E76E8;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_0803B4B0(GenObj *arg0, s32 arg1) {
    s32 var_r1;
    s8 *var_r0;

    arg0->unk0 = &vtable_unk_080E76E8;
    arg0->unk4 = arg1;
    var_r0 = arg0 + 8;
    var_r1 = 3;
    do {
        *var_r0 = 0;
        var_r0 += 0x18;
        var_r1 -= 1;
    } while (var_r1 != -1);
    return arg0;
}
