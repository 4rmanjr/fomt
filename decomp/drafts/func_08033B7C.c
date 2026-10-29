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
void func_08033B7C(GenObj *arg0) {
    arg0->unk41 = 0;
}

/* ATTEMPT-NOTE opencode: member u8 (strb). */
