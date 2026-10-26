s32 func_080A5BD8(void *, ? *, u8, s32);              /* extern */
extern ? gUnk_08106C8C;
extern ? gUnk_081073C4;
extern ? gUnk_081073CC;

void func_080A6024(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    if (temp_r0 >= 0x24) {
        if (temp_r0 > 0x25) {
            if (temp_r0 != 0x40) {

            } else {
                func_080A5BD8(arg0, &gUnk_08106C8C, *(arg1 + &gUnk_081073CC), 4);
            }
        } else {
            func_080A5BD8(arg0, &gUnk_08106C8C, *(arg1 + &gUnk_081073C4), 8);
        }
    }
    arg0->unk29 = 1;
}
