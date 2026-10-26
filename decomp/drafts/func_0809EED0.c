typedef struct GenObj {
    u8 _pad0[22];
    s32 unk16;
} GenObj;
s32 func_0809EED0(GenObj *arg0) {
    u8 temp_r0;

    temp_r0 = arg0->unk16;
    if (temp_r0 == 0xA) {
        return 0;
    }
    arg0->unk16 = (u8) (temp_r0 + 1);
    return 1;
}
