s32 func_080D7F9C(void *, s32, s32, s32, s32, s32); /* extern */

typedef struct Vt {
    void *f0;       /* 0x0 */
    void *f4;       /* 0x4 */
    void *f8;       /* 0x8 */
    void *fC;       /* 0xC */
    void *f10;      /* 0x10 */
    s32 (*f14)(void *); /* 0x14 */
} Vt;

void func_080DC360(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *obj;
    s32 temp;

    obj = *(void **) ((u8 *) arg0 + 0xA8);
    temp = ((Vt *) *(void **) obj)->f14(obj);
    func_080D7F9C(arg0, arg1, temp, arg2, arg3, arg4);
}
