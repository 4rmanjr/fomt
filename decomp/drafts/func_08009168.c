s32 func_08009140();                                  /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    u16 unk4;
} GenObj;

s32 func_08009168(s32 arg0) {
    func_08009140();
    ((GenObj *)arg0)->unk4 = ((GenObj *)arg0)->unk0;
    return arg0;
}
