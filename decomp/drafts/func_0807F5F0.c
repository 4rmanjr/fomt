s32 func_0807EF90(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
s32 *func_0807F5F0(s32 *arg0, GenObj *arg1) {
    s32 temp_r1;

    func_0807EF90(arg1->unk4);
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
