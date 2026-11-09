s32 BeginIncubation__4CoopUi(s32, s32);

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_080146CC(GenObj *arg0, s32 arg1) {
    void *temp;
    void *p8c;
    void *a8;
    void *vt;
    void *fn;

    temp = *(void **)((u8 *)arg0 + 4);
    p8c = *(void **)((u8 *)temp + 0x8C);
    BeginIncubation__4CoopUi((s32)((u8 *)p8c + 0x410), arg1);
    a8 = *(void **)((u8 *)temp + 0xA8);
    vt = *(void **)a8;
    fn = *(void **)((u8 *)vt + 0xAC);
    ((void (*)(void *, s32))(fn))(a8, arg1);
}
