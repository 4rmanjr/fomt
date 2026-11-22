void func_08009154(s16 *, s32);                       /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    u16 unk4;
} GenObj;

s32 func_0800917C(s32 arg0, s32 arg1) {
    func_08009154((s16 *) arg0, arg1);
    ((GenObj *)arg0)->unk4 = ((GenObj *)arg0)->unk0;
    return arg0;
}
