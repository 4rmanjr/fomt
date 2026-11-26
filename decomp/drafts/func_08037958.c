s32 SetAnimFacing__12AActorEntityUi(void *);
s32 SetAnim__12AActorEntityUi(void *);
s32 func_08037098(void *, s32);
s32 func_08037A38(void *, s32);
s32 func_08037A48(void *, s32);
s32 func_080AB788(s32);
s32 func_080AB7A4(u8);
s32 func_080AB82C(s32 *, s32);
extern s32 gUnk_080F1638;

typedef struct Rec {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Rec;

typedef struct Obj {
    u8 _pad0[0x20];
    u8 unk20;
    u8 _pad21[1];
    u16 unk22;
} Obj;

s32 func_08037958(Obj *arg0) {
    s32 idx;
    Rec *r;
    s32 t;
    s32 m;
    s32 k;

    idx = func_080AB82C(&gUnk_080F1638, 3);
    r = (Rec *)((u8 *)&gUnk_080F1638 + (idx * 4));
    k = 0x3C;
    t = (r->unk1 * k) + func_080AB788(r->unk2 * k);
    m = func_080AB788(4);
    if (m != 0) {
        if (m != 3) {
            if (func_080AB7A4(arg0->unk20) != arg0->unk20) {
                SetAnimFacing__12AActorEntityUi(arg0);
            }
        }
    }
    func_08037098(arg0, func_08037A48(arg0, idx));
    if (arg0->unk22 != func_08037A38(arg0, idx)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    return t;
}
