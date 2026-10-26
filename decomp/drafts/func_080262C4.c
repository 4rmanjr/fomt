s32 __7Product(u8 *);                                 /* extern */
s32 __7ProductG4Food(u8 *, s32);                      /* extern */
s32 __7ProductG7Article(u8 *, s32);                   /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                          /* extern */
s32 func_0800F258(s32);                             /* extern */
s32 func_0800F388(s32);                             /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    u8 _pad6[46];
    s32 unk34;
} GenObj;
u8 func_080262C4(GenObj *arg0) {
GenObj sp0;
    u8 sp4;
    s32 temp_r0;
    s32 temp_r5;
    u8 *var_r4;

    temp_r5 = arg0->unk34 + 0x1C2C;
    if (((func_0800F190(temp_r5) << 0x18) == 0) && ((func_0800F388(temp_r5) << 0x18) == 0)) {
        temp_r0 = func_0800F204(temp_r5);
        switch (temp_r0) {                          /* irregular */
        case 0:
            var_r4 = &sp4;
            func_0800F20C(&sp0, temp_r5);
            __7ProductG4Food(var_r4, (sp0.unk2 << 0x10) | ((sp0.unk1 << 8) | sp0));
            break;
        case 1:
            var_r4 = &sp0 + 5;
            __7ProductG7Article(var_r4, func_0800F258(temp_r5));
            break;
        }
    } else {
        var_r4 = &sp0 + 6;
        __7Product(var_r4);
    }
    return *var_r4;
}
