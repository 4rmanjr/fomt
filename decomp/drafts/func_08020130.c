s32 func_0805E894(void *);                          /* extern */

typedef struct Sub20130 { u8 _pad0[0xE]; u16 unkE; s16 unk10; } Sub20130;
typedef struct GenObj { u8 _pad0[0x10]; s32 unk10; } GenObj;

s32 func_08020130(GenObj *arg0) {
    s32 var_r4;
    u32 var_r1;
    Sub20130 *temp_r2;
    s32 temp_r1_2;

    if (arg0->unk10 != 0) {
        var_r4 = 0;
        temp_r2 = (Sub20130 *)(arg0->unk10 + 0x30);
        var_r1 = 0;
        if (temp_r2->unkE != 0) {
            temp_r1_2 = temp_r2->unk10;
            var_r1 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        }
        if ((var_r1 == 0) || ((func_0805E894(temp_r2) << 0x18) != 0)) {
            var_r4 = 1;
        }
        return var_r4;
    }
    return 1;
}
