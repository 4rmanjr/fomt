s32 __9FieldPlot(void *);                             /* extern */
s32 func_080A4A94();                                  /* extern */
extern s32 vtable_unk_080E85E8;

typedef struct GenObj {
    u8 _pad0[144];
    void *unk90;
} GenObj;
void *func_080CFB28(GenObj *arg0) {
    s32 var_r5;
    void *var_r4;

    func_080A4A94();
    arg0->unk90 = &vtable_unk_080E85E8;
    var_r4 = arg0 + 0x94;
    var_r5 = 0x53;
    do {
        __9FieldPlot(var_r4);
        var_r4 += 4;
        var_r5 -= 1;
    } while (var_r5 != -1);
    return arg0;
}
