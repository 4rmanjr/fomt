typedef struct GenObj {
    u8 _pad0[0xBD8];
    s16 unkBD8;
} GenObj;
void func_0805A6E4(GenObj *arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    s16 *n = &arg0->unkBD8;

    *(u16 *) ((u8 *) arg0 + 0x738 + (*n << 3)) = arg1;
    *(u16 *) ((u8 *) arg0 + 0x73A + (*n << 3)) = arg2;
    *(u16 *) ((u8 *) arg0 + 0x73C + (*n << 3)) = arg3;
    *(u16 *) ((u8 *) arg0 + 0x73E + (*n << 3)) = arg4;
    *n = *n + 1;
}
