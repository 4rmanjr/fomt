s32 func_030004DC(s32, s32, s32, s32, s32, void *, s32, s32, void *); /* extern */

typedef struct GenObj {
    u8 _pad0[40];
    s32 unk28;
} GenObj;
void func_0803AE58(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r4;

    temp_r4 = arg0 + ((arg4 * 0x2C) + 4);
    func_030004DC(arg1, arg2, arg3, 0xAA, 0x8000, temp_r4, *arg0, (s32) temp_r4->unk28, arg0 + 0x88);
}
