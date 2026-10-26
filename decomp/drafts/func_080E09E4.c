typedef struct GenObj {
    u8 _pad0[448];
    s32 unk1C0;
} GenObj;
void func_080E09E4(GenObj *arg0, s32 arg1) {
    u32 temp_r2;

    temp_r2 = arg0->unk1C0;
    if (temp_r2 <= 0x63U) {
        *((u8 *)arg0 + 0x30 + (temp_r2 * 4)) = arg1;
        arg0->unk1C0 = (u32) (temp_r2 + 1);
    }
}
