s32 func_0805E860(void *, u16);                        /* extern */
extern u16 gUnk_080F14F0[];

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;
void func_08034BFC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 v = gUnk_080F14F0[arg1];
    func_0805E860((u8 *)arg0 + 0xB4, v);
    arg0->unkC8 = 1;
    arg0->unkCA = 0;
    arg0->unkCB = 1;
    arg0->unkCC = arg2;
    arg0->unkCE = arg3;
    arg0->unkD0 = 0x3C;
}
