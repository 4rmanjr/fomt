typedef struct Sub {
    u8 _pad0[2];
    u16 unk2;
} Sub;

typedef struct VTab {
    u8 _pad0[12];
    void *unkC;
} VTab;

typedef struct GenObj {
    void *unk0;
    struct Sub *unk4;
    u8 _pad8[4];
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u8 unk12;
    u8 _pad13[1];
} GenObj;
void *func_0805E824(s32 *arg0, void **arg1, s32 arg2, s32 arg3) {
    GenObj *a = (GenObj *)arg0;
    s32 *p = arg0;

    *p++ = (s32)arg1;
    ((void (*)(void *, void *, s32))(*(VTab **)arg1)->unkC)(p, arg1, arg2);
    a->unkC = 0;
    a->unkE = (u16) (a->unk4->unk2 << 8);
    a->unk10 = (u16) arg3;
    a->unk12 = 1;
    return a;
}
