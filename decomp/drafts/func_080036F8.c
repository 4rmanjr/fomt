s32 __builtin_new(s32);                               /* extern */
s32 func_08000914();                                /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct O6B O6B;
typedef struct Sub Sub;
typedef struct CellW CellW;
typedef struct Blk Blk;
typedef struct GenObj GenObj;
struct Sub {
    s32 unk0;
    s32 unk4;
};
struct CellW {
    u16 v;
    u16 _p;
};
struct Blk {
    O6B *p;
    CellW *arr;
    u8 _x[4];
    u16 idx;
};
struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[0x6B80 - 0xC];
    Blk blk;
    u8 _padX[0x6CD0 - 0x6B90];
    Sub k0;
    Sub k1;
    Sub k2;
    Sub k3;
};
void *func_080036F8(GenObj *arg0) {
    arg0->unk0 = &vtable_unk_080E5A18;
    __builtin_new(0x6D34);
    arg0->unk4 = (GenObj *)func_08000914();
    return arg0;
}
