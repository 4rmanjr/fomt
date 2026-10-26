s32 func_080088C4();                                /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    u8 _pad6[2224];
    s32 unk8B6;
    s32 unk8B7;
    u8 _pad8BB[1];
    s32 unk8BC;
    s32 unk8C0;
    s32 unk8C4;
    u8 _pad8C8[160];
    s32 unk968;
    s32 unk969;
    u8 _pad96D[2];
    s32 unk96F;
    s32 unk970;
    u8 _pad974[4];
    s32 unk978;
    u8 _pad97C[3];
    s32 unk97F;
} GenObj;
void func_080C7BF0(GenObj *arg0) {
    s32 temp_r1;
    s32 var_r8;
    s8 *var_r5;
    void *var_r0;
    GenObj *var_r1;

    if (!(1 & func_080088C4())) {
        return;
    }
    temp_r1 = arg0->unk8BC;
    if (temp_r1 > 3) {
        return;
    }
    if (arg0->unk968 == 0) {
        return;
    }
    arg0->unk8C0 = temp_r1;
    arg0->unk96F = (u8) (arg0->unk96F + 1);
    var_r8 = 0;
    var_r5 = (GenObj *)((u8 *)arg0 + 0x8C9);
    var_r1 = (GenObj *)((u8 *)arg0 + 0x8C8);
loop_7:
    if (var_r1->unk0 != 0) {
        arg0->unk978 = (u8) (arg0->unk978 + 1);
        arg0->unk8BC = 9;
        arg0->unk8C4 = 1;
        arg0->unk969 = 1U;
        var_r0 = (GenObj *)((u8 *)arg0 + 0x820);
        goto block_12;
    }
    if (var_r1->unk2 == (arg0->unk8B6 + (arg0->unk8B7 * 5))) {
        if (var_r1->unk1 != 0) {
            arg0->unk8BC = 9;
            arg0->unk8C4 = 1;
            arg0->unk978 = (u8) (arg0->unk978 + 1);
            arg0->unk969 = 1U;
            var_r0 = (GenObj *)((u8 *)arg0 + 0x820);
block_12:
            func_08008B6C(var_r0, 0xC7);
        } else {
            *var_r5 = 1;
            if ((var_r8 == (arg0->unk96F - 1)) && (arg0->unk969 == 0)) {
                arg0->unk970 = (u8) (arg0->unk970 + 1);
            } else {
                arg0->unk969 = 1U;
            }
            arg0->unk8BC = 8;
            arg0->unk8C4 = 1;
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x820), 0xBC);
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x818), 0xBE);
            arg0->unk97F = (u8) (arg0->unk97F + 1);
        }
    } else {
        var_r5 += 4;
        var_r1 += 4;
        var_r8 += 1;
        if (var_r8 <= 0xE) {
            goto loop_7;
        }
    }
    if (var_r8 == 0xF) {
        arg0->unk978 = (u8) (arg0->unk978 + 1);
        arg0->unk8BC = 9;
        arg0->unk8C4 = 1;
        arg0->unk969 = 1U;
        func_08008B6C((GenObj *)((u8 *)arg0 + 0x820), 0xC7);
    }
}
