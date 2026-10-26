s32 func_080AC070(?, s32 *);                        /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    s32 unk4;
    struct GenObj *unk6;
} GenObj;
u32 func_08025248(s32 arg1, GenObj *arg2, s32 arg3, u32 arg4) {
    GenObj *sp0;
    s32 sp4;
    u32 var_r5;

    sp0 = arg2->unk0;
    sp4 = arg2->unk4;
    var_r5 = 1;
    if (arg4 >= 1U) {
loop_2:
        sp0.unk2 = (u16) (sp0.unk2 + arg3);
        sp0.unk6 = (u16) (sp0.unk6 + arg3);
        if ((func_080AC070(arg1, &sp0) << 0x18) != 0) {
            var_r5 += 1;
            if (var_r5 <= arg4) {
                goto loop_2;
            }
        }
    }
    return var_r5;
}
