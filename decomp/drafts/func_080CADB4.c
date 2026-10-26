void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 vtable_unk_080E85CC;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[520];
    void *unk210;
} GenObj;
void *func_080CADB4(GenObj *arg0, s32 arg1) {
    GenObj *temp_r4;
    GenObj *var_r0;

    arg0->unk210 = &vtable_unk_080E85CC;
    arg0->unk0 = arg1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 4);
    temp_r4->unk4 = 0;
    var_r0 = malloc(0xC);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0xC);
    }
    var_r0->unk0 = var_r0;
    var_r0->unk4 = var_r0;
    temp_r4->unk4 = var_r0;
    return arg0;
}
