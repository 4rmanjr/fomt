extern s32 gUnk_081009DC;
extern s32 vtable_unk_080E8028;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
    u8 _padC[1];
    s32 unkD;
} GenObj;
void func_0809424C(GenObj *arg0) {
    arg0->unk0 = &vtable_unk_080E8028;
    arg0->unk4 = &gUnk_081009DC;
    arg0->unk8 = 0;
    arg0->unkD = 1;
}
