void func_08037ED0(void *arg0, void *arg1) {
    s16 temp_r2;
    s16 temp_r3;

    temp_r2 = arg1->unkA;
    temp_r3 = arg1->unkE;
    arg0->unk0 = (s16) (temp_r2 - 7);
    arg0->unk2 = (s16) (temp_r3 - 4);
    arg0->unk4 = (s16) (temp_r2 + 7);
    arg0->unk6 = (s16) (temp_r3 + 5);
}
