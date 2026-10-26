void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[24];
    s32 unk20;
    s32 unk22;
    u8 _pad26[3];
    s32 unk29;
} GenObj;
void func_080A5CC0(GenObj *arg0) {
    s32 *var_r4;
    s32 temp_r0;
    u32 var_r6;
    GenObj *temp_r5;

    temp_r5 = GetMapData(arg0->unk4);
    var_r6 = 0;
    var_r4 = (GenObj *)((u8 *)arg0 + 0x10);
    do {
        temp_r0 = *((u8 *)(GenObj *)((u8 *)temp_r5 + 0xC) + (var_r6 * 4));
        if (temp_r0 != 0) {
            Unpack(temp_r0, *var_r4);
        } else {
            func_08008EB8(0x03FF03FF, *var_r4, temp_r5->unk22 * 2 * temp_r5->unk20);
        }
        var_r4 += 4;
        var_r6 += 1;
    } while (var_r6 <= 2U);
    arg0->unk29 = 1;
}
