typedef struct GenObj {
    u8 _pad0[132];
    s32 unk84;
    u8 _pad88[4];
    s32 unk8C;
    u8 _pad90[5];
    s32 unk95;
    u8 _pad99[43];
    s32 unkC4;
    u8 _padC8[4];
    s32 unkCC;
    u8 _padD0[5];
    s32 unkD5;
    u8 _padD9[2619];
    s32 unkB14;
    u8 _padB18[40];
    s32 unkB40;
    s32 unkB44;
    u8 _padB48[8];
    s32 unkB50;
} GenObj;
void func_080BA734(GenObj *arg0) {
    if ((s32) arg0->unk84 < 0) {
        if ((u32) ((u16) arg0->unk8C >> 8) <= 0x47U) {
            arg0->unk95 = 2;
        }
        arg0->unk8C = (u16) (arg0->unk8C + 0x300);
        arg0->unkB14 = 3;
        arg0->unkB40 = 0;
        arg0->unkB44 = 3;
        arg0->unkB50 = 1;
        return;
    }
    if ((s32) arg0->unkC4 < 0) {
        if ((u32) ((u16) arg0->unk8C >> 8) <= 0x47U) {
            arg0->unkD5 = 2;
        }
        arg0->unkCC = (u16) (arg0->unkCC + 0x300);
        arg0->unkB14 = 3;
        arg0->unkB44 = 1;
        arg0->unkB40 = 3;
        arg0->unkB50 = 1;
    }
}
