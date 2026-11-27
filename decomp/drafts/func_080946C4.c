extern s32 gUnk_081008EC;
extern s32 gUnk_081009DC;

typedef struct GenObj {
    u8 _pad0[8];
    s32 *unk8;
    u8 _padC[4];
    s32 unk10;
} GenObj;

void func_080946C4(GenObj *arg0, s32 arg1) {
    switch (arg1) {
    case 2:
        arg0->unk8 = &gUnk_081008EC;
        break;
    case 3:
        arg0->unk10 = 1;
        arg0->unk8 = &gUnk_081009DC;
        break;
    }
}
