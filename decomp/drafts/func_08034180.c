s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_080323C8(void *);                            /* extern */
s32 func_08034248();                                /* extern */

typedef struct GenObj {
    u8 _pad0[24];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    u8 _pad26[26];
    s32 unk40;
    s32 unk42;
} GenObj;
void func_08034180(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r1;

    if (arg0->unk22 != func_08034248()) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    arg0->unk42 = 0;
    switch (arg1) {                                 /* switch 1; irregular */
    default:                                        /* switch 1 */
    case 0:                                         /* switch 1 */
        arg0->unk18 = 0;
        arg0->unk1C = 0;
        break;
    case 1:                                         /* switch 1 */
        var_r0 = arg3;
        if (arg3 < 0) {
            var_r0 = 0 - arg3;
        }
        switch (arg2) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            arg0->unk1C = var_r0;
            arg0->unk18 = 0;
            break;
        case 1:                                     /* switch 2 */
            arg0->unk1C = (s32) (0 - var_r0);
            arg0->unk18 = 0;
            break;
        case 2:                                     /* switch 2 */
            arg0->unk18 = (s32) (0 - var_r0);
block_23:
            arg0->unk1C = 0;
            break;
        case 3:                                     /* switch 2 */
            arg0->unk18 = var_r0;
            goto block_23;
        }
        break;
    }
    if (arg1 != arg0->unk40) {
        var_r1 = -1;
        switch (arg1) {                             /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            var_r1 = 8;
block_31:
            func_08032384(arg0, var_r1, 1);
            break;
        case 3:                                     /* switch 3 */
            var_r1 = 5;
            /* fallthrough */
        default:                                    /* switch 3 */
            if (var_r1 >= 0) {
                goto block_31;
            }
            func_080323C8(arg0);
            break;
        }
    }
    arg0->unk40 = (u8) arg1;
}
