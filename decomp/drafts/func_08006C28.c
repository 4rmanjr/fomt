typedef struct GenObj {
    u8 _pad0[17959];
    u8 unk4627;
} GenObj;
void func_08006C28(GenObj *arg0, u32 arg1) {
    GenObj *temp_r3;
    u32 var_r1;

    var_r1 = (arg1 << 0x18) >> 0x18;
    if (var_r1 <= 0xAU) {
        temp_r3 = (GenObj *)((u8 *)arg0 + 0x461C);
        do {
            u8 *d = (u8 *)temp_r3 + var_r1;
            u8 *s = (u8 *)temp_r3 + var_r1 + 1;
            var_r1 += 1;
            *d = *s;
        } while (var_r1 <= 0xAU);
    }
    arg0->unk4627 = 0x5F;
}
