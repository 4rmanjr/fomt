typedef struct Out { s16 unk0; s16 unk2; s16 unk4; s16 unk6; } Out;
typedef struct In { u8 _pad0[0xA]; s16 unkA; u8 _padC[2]; s16 unkE; } In;
void func_08037470(Out *arg0, In *arg1) {
    s32 a = arg1->unkA;
    s32 b = arg1->unkE;

    arg0->unk0 = a - 7;
    arg0->unk2 = b - 9;
    arg0->unk4 = a + 7;
    arg0->unk6 = b + 5;
}
