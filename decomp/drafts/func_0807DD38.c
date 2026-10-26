s32 __builtin_new(s32);                             /* extern */
s32 func_0807D194(s32, s32);                        /* extern */
extern ? vtable_unk_080E7C30;

void *func_0807DD38(void *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7C30;
    arg0->unk4 = func_0807D194(__builtin_new(0x710), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
