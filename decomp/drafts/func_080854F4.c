s32 __builtin_new(s32);                             /* extern */
s32 func_08083BD4(s32, s32);                        /* extern */
extern ? vtable_unk_080E7D20;

void *func_080854F4(void *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D20;
    arg0->unk4 = func_08083BD4(__builtin_new(0x61F4), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
