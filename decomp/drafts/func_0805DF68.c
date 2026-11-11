typedef struct GenObj {
    u8 _pad0[0x2CE];
    s16 unk2CE;
} GenObj;
void func_0805DF68(GenObj *arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    s16 *n = &arg0->unk2CE;

    *(u16 *) ((u8 *) arg0 + 0x14E + (*n << 3)) = arg1;
    *(u16 *) ((u8 *) arg0 + 0x150 + (*n << 3)) = arg2;
    *(u16 *) ((u8 *) arg0 + 0x152 + (*n << 3)) = arg3;
    *(u16 *) ((u8 *) arg0 + 0x154 + (*n << 3)) = arg4;
    *n = *n + 1;
}
