void *GetMapData(s32);                              /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_080A5EB8(void *, s32);                     /* extern */

s32 func_08019F38(void *arg0, s32 arg1) {
    if ((GetMapData(arg0->unk4->unk4)->unk24 != 0) || ((func_0800E324(arg0->unk1038 + 0x10) != 3) && ((func_080A5EB8(arg0->unk4, arg1) << 0x18) == 0))) {
        return 0;
    }
    return 1;
}
