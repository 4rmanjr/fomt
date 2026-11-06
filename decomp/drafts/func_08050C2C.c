s32 func_08050C64(void *);                            /* extern */
s32 func_0805E860(void *, u32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[1280];
    s32 unk500;
} GenObj;
typedef struct Sub504 { u8 _pad20[0x20]; u16 unk20; } Sub504;

void func_08050C2C(GenObj *arg0, u32 arg1) {
    if (arg1 >= (u32) ((Sub504 *) ((u8 *) arg0 + 0x504))->unk20) {
        func_08050C64(arg0);
        return;
    }
    *(u8 *) ((u8 *) arg0 + 0x500) = 1;
    func_0805E860((u8 *) arg0 + 0x534, arg1);
}
