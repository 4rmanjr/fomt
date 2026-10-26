typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk6;
} GenObj;
void func_080097A4(u8 *arg0) {
    u16 temp_r2;
    u32 var_r5;
    void *temp_r6;
    void *var_r1;
    void *var_r3;
    void *var_r4;

    var_r3 = arg0 + 4;
    var_r4 = (void *)0x07000000;
    temp_r6 = arg0 + ((*arg0 * 8) + 4);
    var_r5 = 0;
    do {
        var_r1 = arg0 + 4;
        if (var_r1 != temp_r6) {
            do {
                temp_r2 = var_r1->unk4;
                if ((temp_r2 & 0xC00) == var_r5) {
                    var_r4->unk0 = (s32) var_r1->unk0;
                    var_r4->unk4 = temp_r2;
                    var_r4->unk6 = (u16) var_r3->unk6;
                    var_r3 += 8;
                    var_r4 += 8;
                }
                var_r1 += 8;
            } while (var_r1 != temp_r6);
        }
        var_r5 += 0x400;
    } while (var_r5 <= 0xFFFU);
    if (var_r4 != (void *)0x07000400) {
        do {
            var_r4->unk0 = 0x200;
            var_r4->unk6 = (u16) var_r3->unk6;
            var_r3 += 8;
            var_r4 += 8;
        } while (var_r4 != (void *)0x07000400);
    }
}
