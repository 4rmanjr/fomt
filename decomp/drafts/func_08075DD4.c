s32 memset(s32, s32, s32);                            /* extern */

void func_08075DD4(void *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk18;
    memset(temp_r1, 0xFF, ((s32) (arg0->unk1C - temp_r1) >> 6) << 6);
}
