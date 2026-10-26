typedef struct GenObj {
    u8 _pad0[36];
    s32 unk24;
    u8 _pad28[2];
    s32 unk2A;
    u8 _pad2E[98];
    struct GenObj *unk90;
} GenObj;
void func_080A5D14(GenObj *arg0, s32 arg1) {
    ? (*var_r3)(void *, s32, s32);
    s32 var_r1;

    switch (arg1) {                                 /* irregular */
    case 3:
        ((void (*)(void *,...))(arg0->unk90->unk24))(arg0, 3, 0);
        var_r3 = arg0->unk90->unk24;
        var_r1 = 0;
block_9:
        var_r3(arg0, var_r1, 1);
        break;
    case 0:
        ((void (*)(void *,...))(arg0->unk90->unk24))(arg0, 0, 0);
        var_r3 = arg0->unk90->unk24;
        var_r1 = 1;
        goto block_9;
    case 1:
        ((void (*)(void *,...))(arg0->unk90->unk24))(arg0, 1, 0);
        var_r3 = arg0->unk90->unk24;
        var_r1 = 2;
        goto block_9;
    case 2:
        ((void (*)(void *,...))(arg0->unk90->unk24))(arg0, 2, 0);
        ((void (*)(void *,...))(arg0->unk90->unk24))(arg0, 3, 1);
        break;
    }
    arg0->unk2A = 1;
}
