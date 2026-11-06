s32 func_080A5760();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[180];
    s32 unkB4;
    s32 unkB8;
} GenObj;
void func_080A6640(GenObj *arg0) {
    u8 *p;
    s32 z;

    func_080A5760();
    z = 0;
    p = (u8 *) arg0 + 0xB4;
    *p = (u8) z;
    p[1] = (u8) z;
    p = (u8 *) arg0 + 0xB8;
    *p = (u8) z;
    p[1] = (u8) z;
}
