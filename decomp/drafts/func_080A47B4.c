s32 __builtin_delete(void *);                         /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
extern ? vtable_unk_080E82D8;

void func_080A47B4(void *arg0, s32 arg1) {
    u32 var_r6;
    u8 *var_r4;
    void **temp_r0;
    void *temp_r4;

    arg0->unk24 = &vtable_unk_080E82D8;
    var_r6 = 0;
    if ((u32) arg0->unk10 > 0U) {
        var_r4 = arg0 + 0x14;
        do {
            temp_r0 = arg0->unk0;
            (*temp_r0)->unk4C(temp_r0, *var_r4);
            var_r4 += 1;
            var_r6 += 1;
        } while (var_r6 < (u32) arg0->unk10);
    }
    temp_r4 = arg0 + 4;
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
