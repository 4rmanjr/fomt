s32 func_08007C28(void *, s32);                       /* extern */
s32 func_08007CD8(void *, s32);                     /* extern */

void *func_080E4438(void *arg0, void *arg1) {
    s32 var_r4;
    s32 var_r6;
    void *temp_r0;
    void *temp_r1;
    void *var_r2;
    void *var_r3;
    void *var_r4_2;
    void *var_r5;

    arg0->unk0 = (u8) arg1->unk0;
    arg0->unk1 = (u8) arg1->unk1;
    var_r3 = arg0 + 4;
    var_r4 = 1;
    var_r2 = arg1 + 4;
    do {
        temp_r0 = var_r2 + 0xC;
        var_r3->unk0 = (s32) var_r2->unk0;
        var_r3->unk4 = (s32) var_r2->unk4;
        var_r3->unk8 = (s32) var_r2->unk8;
        temp_r1 = var_r3 + 0xC;
        var_r3->unkC = (s32) var_r2->unkC;
        temp_r1->unk4 = (s32) temp_r0->unk4;
        temp_r1->unk8 = (s32) temp_r0->unk8;
        temp_r1->unkC = (s32) temp_r0->unkC;
        (temp_r1 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
        var_r3 += 0x20;
        var_r2 += 0x20;
        var_r4 -= 1;
    } while (var_r4 != -1);
    var_r4_2 = arg0 + 0x44;
    var_r6 = 1;
    var_r5 = arg1 + 0x44;
    do {
        if (var_r5 != var_r4_2) {
            func_08007C28(var_r4_2, var_r4_2->unk4);
            var_r4_2->unk4 = func_08007CD8(var_r4_2, var_r5->unk4);
        }
        var_r4_2 += 8;
        var_r5 += 8;
        var_r6 -= 1;
    } while (var_r6 != -1);
    return arg0;
}
