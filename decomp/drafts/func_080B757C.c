s32 rand();                                         /* extern */
s32 strcpy(s32, void *);                              /* extern */
extern ? gUnk_081078BD;

void func_080B757C(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r1;
    u32 var_r5;

    var_r5 = 0;
    var_r1 = 0;
    temp_r3 = arg0 + 0x9E;
    temp_r2 = arg0 + 0xDE;
    do {
        *(temp_r3 + var_r1) = 0;
        *(temp_r2 + var_r1) = 0;
        var_r1 += 1;
    } while (var_r1 <= 0xD);
    strcpy(temp_r3, arg0 + 0xB1C);
    temp_r0 = arg0->unkB18;
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r5 = (u32) (6 * (0xFFFF & rand())) >> 0x10;
        break;
    case 1:
        var_r5 = ((u32) (7 * (0xFFFF & rand())) >> 0x10) + 6;
        break;
    case 2:
        var_r5 = ((u32) (7 * (0xFFFF & rand())) >> 0x10) + 0xD;
        break;
    }
    *(arg0 + 0xB3D + arg0->unkB18) = (s8) var_r5;
    strcpy(temp_r2, (0xD * var_r5) + &gUnk_081078BD);
}
