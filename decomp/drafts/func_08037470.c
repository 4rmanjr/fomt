typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unkA;
    s32 unkE;
} GenObj;
void func_08037470(GenObj *arg0, GenObj *arg1) {
    s16 temp_r2;
    s16 temp_r3;

    temp_r2 = arg1->unkA;
    temp_r3 = arg1->unkE;
    arg0->unk0 = (s16) (temp_r2 - 7);
    arg0->unk2 = (s16) (temp_r3 - 9);
    arg0->unk4 = (s16) (temp_r2 + 7);
    arg0->unk6 = (s16) (temp_r3 + 5);
}
