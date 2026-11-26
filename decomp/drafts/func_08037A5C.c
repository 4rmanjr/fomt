void *__builtin_new(s32);
void func_08037008(void *, s32, u32, s32, s32);
void func_08037244(void *, void *);
extern s32 vtable_unk_080E72E4;

typedef struct Obj37A5C {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[0x2C];
    u8 unk44;
} Obj37A5C;

typedef struct Rect {
    u16 x0;
    u16 y0;
    u16 x1;
    u16 y1;
} Rect;

void *func_08037A5C(s32 arg0, u32 arg1, s32 arg2) {
    Obj37A5C *obj;
    Rect r;

    obj = __builtin_new(0x48);
    func_08037008(obj, arg0, arg1, 0x71C, 0);
    obj->unk14 = &vtable_unk_080E72E4;
    obj->unk44 = (obj->unk44 & 0xFC) | (arg2 & 3);
    r.x0 = 0x160;
    r.y0 = 0xD8;
    r.x1 = 0x198;
    r.y1 = 0xE8;
    func_08037244(obj, &r);
    return obj;
}
