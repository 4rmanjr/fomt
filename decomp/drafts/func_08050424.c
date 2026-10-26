s32 func_0804F0E0(void *);                            /* extern */
s32 func_080503E4(void *);                            /* extern */
s32 func_080ADD5C(void *, s32, s32);                  /* extern */
s32 func_080ADD74(void *, u16);                       /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void func_08050424(GenObj *arg0, s32 arg1, u16 arg2, s32 arg3) {
    s32 temp_r0;
    void *temp_r4;

    temp_r0 = arg0->unk8;
    if (temp_r0 >= 0) {
        if (temp_r0 <= 2) {
            func_080503E4(arg0);
        } else if (temp_r0 <= 6) {
            func_0804F0E0(arg0 + 0xD0);
        }
    }
    temp_r4 = arg0 + 0xEC;
    func_080ADD5C(temp_r4, arg1, arg3);
    func_080ADD74(temp_r4, arg2);
    arg0->unk8 = 4;
}
