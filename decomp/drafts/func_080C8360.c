s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08000540(s32, u16);                          /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                         /* extern */
s32 func_08050D0C(void *, s32);                       /* extern */
s32 func_08075DEC(s32, s32);                          /* extern */
s32 func_080E5478(void *, s32);                       /* extern */
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E8570;

void func_080C8360(void *arg0, ? arg1) {
    s32 temp_r2;
    s32 var_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *var_r0;
    void *var_r4;
    void *var_r4_2;

    arg0->unk4 = &vtable_unk_080E8570;
    var_r4 = arg0 + 0x434;
    func_08000540(0, arg0->unk434);
    arg0->unk534 = &vtable_unk_080E5A28;
    arg0->unk504 = &vtable_unk_080E5A28;
    arg0->unk4D4 = &vtable_unk_080E5A28;
    func_080E5478(arg0 + 0x438, 2);
    temp_r0 = arg0 + 0x3EC;
    if ((temp_r0 != 0) && (temp_r0 != var_r4)) {
        do {
            var_r4 -= 8;
            func_080073E0(var_r4, var_r4->unk4);
            func_08007184(var_r4, 2);
        } while (temp_r0 != var_r4);
    }
    temp_r0_2 = arg0 + 0x3A4;
    if (temp_r0_2 != 0) {
        var_r4_2 = arg0 + 0x3EC;
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 8;
                func_08007C28(var_r4_2, var_r4_2->unk4);
                func_080079E8(var_r4_2, 2);
            } while ((arg0 + 0x3A4) != var_r4_2);
        }
    }
    temp_r4 = arg0 + 0x39C;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = arg0 + 0x394;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = arg0 + 0x38C;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x384;
    func_080073E0(temp_r4_4, temp_r4_4->unk4);
    func_08007184(temp_r4_4, 2);
    temp_r4_5 = arg0 + 0x37C;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    temp_r4_6 = arg0 + 0x374;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x36C;
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    temp_r4_8 = arg0 + 0x364;
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = arg0 + 0x35C;
    func_080073E0(temp_r4_9, temp_r4_9->unk4);
    func_08007184(temp_r4_9, 2);
    temp_r4_10 = arg0 + 0x354;
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    func_08050D0C(arg0 + 0x348, 2);
    temp_r1 = arg0 + 0x20 + ((arg0->unk20 * 0x10) + 4);
    var_r0 = arg0 + 0x24;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1);
    }
    temp_r0_3 = arg0->unk1C;
    if (temp_r0_3 != 0) {
        func_08075DEC(temp_r0_3 + 0x28, 2);
        temp_r2 = (temp_r0_3 + 0x18)->unk4;
        var_r1 = temp_r0_3->unk18;
        if (var_r1 != temp_r2) {
            do {
                var_r1 += 0x40;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_3->unk18 != 0) {
            free();
        }
        __builtin_delete(temp_r0_3);
    }
    func_080086BC(arg0, arg1);
}
