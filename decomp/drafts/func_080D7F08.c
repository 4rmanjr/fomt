typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[36];
    s32 unk3C;
    u8 _pad40[104];
    s32 unkA8;
} GenObj;
void func_080D7F08(GenObj *arg0) {
    u32 var_r4;
    void **temp_r0;
    void *temp_r0_2;

    var_r4 = 1;
    do {
        temp_r0 = arg0->unkA8;
        temp_r0_2 = (*temp_r0)->unk40(temp_r0, var_r4);
        if (temp_r0_2 != 0) {
            ((void (*)(void *,...))(temp_r0_2->unk14->unk3C))(temp_r0_2, 3);
        }
        var_r4 += 1;
    } while (var_r4 <= 0x23U);
}
