s32 vfunc_10__7AEntity(void *);                       /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[36];
    s32 unk3C;
    s32 unk3E;
    s32 unk40;
} GenObj;
void func_08037434(GenObj *arg0) {
    if (arg0->unk40 == 0) {
        ((void (*)(void *,...))(arg0->unk14->unk3C))(arg0);
    }
    arg0->unk3E = 0;
    vfunc_10__7AEntity(arg0);
}
