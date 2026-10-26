extern s32 gUnk_081008EC;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[1];
    s32 unkD;
    u8 _pad11[3];
    s32 unk14;
    u8 _pad18[8];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
} GenObj;
void func_08094288(GenObj *arg0, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    ((void (*)(void *,...))(arg0->unk0->unk20))(arg0);
    arg0->unk14 = arg3;
    arg0->unk20 = arg4;
    arg0->unk24 = arg5;
    arg0->unk28 = arg6;
    arg0->unk2C = arg7;
    arg0->unk8 = &gUnk_081008EC;
    arg0->unkD = 0;
}
