s32 func_08050E68(void *);
s32 func_08050E50(void *);

typedef struct Base {
    u8 _pad0[0x8C];
    u8 *unk8C;
    u8 _pad90[0x1C];
    void *unkAC;
} Base;

typedef struct Obj {
    u8 _pad0[4];
    Base *unk4;
} Obj;

void func_08012760(Obj *arg0, s32 arg1) {
    Base *s = arg0->unk4;
    void *v = s->unkAC;
    u8 *p;
    u8 b;

    if (v != 0) {
        p = s->unk8C;
        b = p[0x2210];
        if ((b << 29) < 0) {
            func_08050E50(v);
        }
    }
}
