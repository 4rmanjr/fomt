s32 func_08050DC8(s32, s32, u16, s32);                /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[12];
    struct GenObj *unkAC;
} GenObj;
void func_0801268C(GenObj *arg0, s32 arg1, u16 arg2) {
    s32 temp_r1;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r1 = temp_r4->unkAC;
    if (temp_r1 != 0) {
        func_08050DC8(temp_r1, arg1, arg2, ((GenObj *)((u8 *)temp_r4 + 0xAC))->unk4);
        temp_r4->unk9C = 0x10;
    }
}
