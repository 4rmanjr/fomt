s32 free();                                           /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_080756D0(void *, s32);                       /* extern */
s32 func_080E20C0(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[16];
    void *unk20;
    u8 _pad24[124];
    void *unkA0;
    u8 _padA4[44];
    s32 unkD0;
} GenObj;
void func_080E2018(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r4;
    void **temp_r1;

    temp_r0 = arg0 + 0xE0;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x1A0;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 0x30;
                func_080E20C0(var_r4, 0);
            } while (temp_r0 != var_r4);
        }
    }
    temp_r2 = (arg0 + 0xD0)->unk4;
    var_r1 = arg0->unkD0;
    if (var_r1 != temp_r2) {
        do {
            var_r1 += 0x1C;
        } while (var_r1 != temp_r2);
    }
    if (arg0->unkD0 != 0) {
        free();
    }
    arg0->unkA0 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    func_080756D0(arg0 + 0x18, 2);
    temp_r1 = arg0->unkC;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_080086BC(arg0, arg1);
}
