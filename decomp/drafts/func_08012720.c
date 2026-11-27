s32 func_08050E68(void *);

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

void func_08012720(Obj *arg0) {
    void *v = arg0->unk4->unkAC;

    if (v != 0 && (arg0->unk4->unk8C[0x2210] << 28) < 0) {
        func_08050E68(v);
    }
}
