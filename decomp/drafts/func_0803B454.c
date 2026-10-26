s32 func_0803B474(void *, s32, s32);                  /* extern */

void *func_0803B454(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = (s32) arg1->unk0;
    arg0->unk4 = (s32) arg1->unk4;
    arg0->unk8 = (s32) arg1->unk8;
    arg0->unkC = (s32) arg1->unkC;
    (arg0 + 0xC)->unk4 = (s32) (arg1 + 0xC)->unk4;
    func_0803B474(arg0, arg2, arg3);
    return arg0;
}
