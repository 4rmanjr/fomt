s32 func_08076E0C(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[8548];
    s32 unk2164;
} GenObj;
void func_080E1D54(GenObj *arg0, s32 arg1) {
    s32 temp_r1;
    void *var_r0;

    temp_r1 = arg0 + 0x2164 + ((arg0->unk2164 * 0x10) + 4);
    var_r0 = arg0 + 0x2168;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1);
    }
    func_08076E0C(arg0, arg1);
}
