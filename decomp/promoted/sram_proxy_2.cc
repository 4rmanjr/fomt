
// DECOMP-MATCHED func_0800063C (dari sram_proxy_2.s; cek manusia sebelum ke src/)
void func_0800063C(void) {

}

// DECOMP-MATCHED func_08000640 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern s16 gUnk_03000400;
extern u8 gUnk_03000402;

s32 func_08000640(s32 arg0) {
    u8 temp_r1;

    temp_r1 = gUnk_03000402;
    if (temp_r1 == 0) {
        gUnk_03000402 = 1;
        gUnk_03000400 = (s16) temp_r1;
    }
    return arg0;
}
