void func_0805DF68(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    *(arg0 + 0x14E + (arg0->unk2CE * 8)) = arg1;
    *(arg0 + 0x150 + (arg0->unk2CE * 8)) = arg2;
    *(arg0 + 0x152 + (arg0->unk2CE * 8)) = arg3;
    *(arg0 + 0x154 + (arg0->unk2CE * 8)) = (s16) arg4;
    arg0->unk2CE = (s16) ((u16) arg0->unk2CE + 1);
}
