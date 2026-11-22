typedef struct GenObj GenObj;

void func_08050424(GenObj *, s32, u16, s32);                 /* extern */

void func_08050D8C(s32 *arg0, s32 arg1) {
    func_08050424((GenObj *)(*arg0), arg1, 0x100, 0);
}
