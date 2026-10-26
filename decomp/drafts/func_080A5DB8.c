void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080A5DB8(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 *temp_r4;
    GenObj *temp_r0;

    temp_r0 = GetMapData(arg0->unk4);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x1C) + (arg2 * 4);
    Unpack(temp_r0->unk4, *temp_r4);
    if (arg1 >= 0) {
        if (arg1 > 2) {
            if (arg1 != 3) {
                return;
            }
            Unpack(temp_r0->unk8, *temp_r4);
        } else {
            Unpack(temp_r0->unk4, *temp_r4);
        }
    }
}
