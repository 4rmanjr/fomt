s32 GetChicken__4CoopUi(s32);                         /* extern */
u32 GetProductRank__C9Livestock();                  /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
s32 func_0807BE74(GenObj *arg0) {
    s32 var_r4;
    u32 temp_r0;

    GetChicken__4CoopUi(arg0->unk8 + 0x410);
    var_r4 = 0x1F4;
    temp_r0 = GetProductRank__C9Livestock();
    switch (temp_r0) {
    case 0:
    case 1:
    case 2:
        var_r4 = 0x1F4;
        break;
    case 3:
        var_r4 = 0x3E8;
        break;
    case 4:
        var_r4 = 0x7D0;
        break;
    }
    return var_r4;
}
