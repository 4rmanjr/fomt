s32 func_080D6E98(s32);                               /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4[12];
    u8 unk10[12];
} GenObj;
void func_080D6EAC(GenObj *arg0) {
    func_080D6E98((s32)arg0->unk4);
    func_080D6E98((s32)arg0->unk10);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
