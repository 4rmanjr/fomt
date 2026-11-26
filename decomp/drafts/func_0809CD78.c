typedef struct Elem_CD78 {
    s32 x;
    s32 y;
} Elem_CD78;

void func_0809CD78(Elem_CD78 *arg0) {
    s32 i;

    for (i = 0x3A; i >= 0; i--) {
        arg0[i].x = 0;
        arg0[i].y = 0;
    }
}
