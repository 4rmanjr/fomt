s32 GetCurrentTask__C13HarvestSprite(s32);          /* extern */
s32 GetLocation__C7AEntity(s32 *, void *);              /* extern */
s32 func_080330F4(u8 *, s32, s32, s32 *, s32, s32);     /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[44];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
} GenObj;
s32 func_08033B24(GenObj *arg0) {
    u8 sp8;
s32 sp10;
    s32 temp_r5;
    s32 var_r1;

    if ((*(arg0->unk38 + (arg0->unk30 * 8)) << 0x1C) != 0) {
        return 0;
    }
    temp_r5 = arg0->unk0;
    GetLocation__C7AEntity(&sp10, arg0);
    func_080330F4(&sp8, arg0->unk3C, temp_r5, &sp10, GetCurrentTask__C13HarvestSprite(arg0->unk34), arg0->unk38);
    var_r1 = 0;
    if ((sp8 << 0x1C) == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
