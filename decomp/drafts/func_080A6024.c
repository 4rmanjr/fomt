s32 func_080A5BD8(void *, s32 *, u8, s32);              /* extern */
extern s32 gUnk_08106C8C;
extern s32 gUnk_081073C4;
extern s32 gUnk_081073CC;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    s32 unk29;
} GenObj;
void func_080A6024(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    if (temp_r0 >= 0x24) {
        if (temp_r0 > 0x25) {
            if (temp_r0 != 0x40) {

            } else {
                func_080A5BD8(arg0, &gUnk_08106C8C, *((u8 *)arg1 + &gUnk_081073CC), 4);
            }
        } else {
            func_080A5BD8(arg0, &gUnk_08106C8C, *((u8 *)arg1 + &gUnk_081073C4), 8);
        }
    }
    arg0->unk29 = 1;
}
