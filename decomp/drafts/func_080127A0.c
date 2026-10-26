u32 GetLove__C12Bachelorette();                     /* extern */
s32 func_08050E80(s32, s32);                          /* extern */
s32 func_080A0878(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[28];
    struct GenObj *unkAC;
} GenObj;
void func_080127A0(GenObj *arg0, s32 arg1) {
    s32 var_r1;
    u32 temp_r0;
    void *temp_r2;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    if (temp_r4->unkAC != 0) {
        temp_r2 = temp_r4->unk8C;
        if (((s32) (temp_r2->unk2210 << 0x1D) < 0) && (arg1 != 0x1F) && (func_080A0878(temp_r2 + 0x1CD4) != 0)) {
            temp_r0 = GetLove__C12Bachelorette();
            if (temp_r0 > 0xEA5FU) {
                var_r1 = 6;
            } else if (temp_r0 > 0xC34FU) {
                var_r1 = 5;
            } else if (temp_r0 > 0x9C3FU) {
                var_r1 = 4;
            } else if (temp_r0 > 0x752FU) {
                var_r1 = 3;
            } else if (temp_r0 > 0x4E1FU) {
                var_r1 = 2;
            } else {
                var_r1 = 0;
                if (temp_r0 > 0x270FU) {
                    var_r1 = 1;
                }
            }
            func_08050E80(temp_r4->unkAC, var_r1);
        }
    }
}
