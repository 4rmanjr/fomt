typedef struct Obj0809AB8C {
    s32 unk0;
    u8 bit0 : 1;
    u8 bit1 : 1;
    u8 rest : 6;
} Obj0809AB8C;

s32 func_0809AE6C(void *);                             /* extern */

void *func_0809AB8C(Obj0809AB8C *arg0) {
    arg0->unk0 = 0x1F4;
    arg0->bit0 = 0;
    arg0->bit1 = 0;
    *(s32 *) ((u8 *) arg0 + 8) = 0;
    *(s32 *) ((u8 *) arg0 + 0xFC) = 0;
    *(s32 *) ((u8 *) arg0 + 0x120) = 0;
    *(s32 *) ((u8 *) arg0 + 0x124) = 0;
    *(s32 *) ((u8 *) arg0 + 0x128) = 0;
    *(s32 *) ((u8 *) arg0 + 0x12C) = 0;
    func_0809AE6C(arg0);
    return arg0;
}
