s32 func_080D7F9C(void *, s32, s32, s32, s32, s32);       /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[160];
    struct GenObj *unkA8;
} GenObj;
void func_08012064(GenObj *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4) {
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    func_080D7F9C(temp_r4, arg1, (*temp_r4->unkA8)->unk14(), arg2, arg3, arg4);
}
