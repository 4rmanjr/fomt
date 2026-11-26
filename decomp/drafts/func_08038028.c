s32 __7AEntityP10GameObjectRC8Location(void *, s32, s32 *);
s32 func_08020460(void *);
struct GenObj__func_08038374;
void func_08038374(struct GenObj__func_08038374 *, s32, s32, s32, s32);
extern s32 vtable_unk_080E73B4;

typedef struct Actor {
    u8 _pad0[0x40];
    s32 (*unk40)(void *, s32);
} Actor;

typedef struct Src {
    u8 _pad0[4];
    u16 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x10];
    u8 unk20;
    u8 _pad21[1];
    u16 unk22;
} Src;

typedef struct Obj {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[0xE];
    void *unk14;
    s32 unk18;
    s32 unk1C;
    u8 _pad20[5];
    u8 unk25;
    u8 unk26;
    u8 _pad27[1];
    u16 unk28;
} Obj;

void *func_08038028(Obj *arg0, void *arg1, s32 *arg2) {
    Src *o;

    __7AEntityP10GameObjectRC8Location(arg0, (s32)arg1, arg2);
    arg0->unk14 = &vtable_unk_080E73B4;
    arg0->unk18 = (s32)arg2;
    arg0->unk1C = 0;
    arg0->unk25 = 0;
    arg0->unk26 = 0;
    arg0->unk28 = 0x31;
    o = (Src *)(*(Actor **)arg1)->unk40(arg1, 0x2B);
    if (o != 0) {
        if (o->unk4 == arg0->unk4) {
            if ((func_08020460(o) << 0x18) != 0) {
                func_08038374((struct GenObj__func_08038374 *)arg0, o->unk8, o->unkC, o->unk22, o->unk20);
            }
        }
    }
    return arg0;
}
