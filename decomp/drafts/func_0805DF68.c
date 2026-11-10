typedef struct GenObj {
    u8 _pad0[0x14E];
    s16 unk14E;
    s16 unk150;
    s16 unk152;
    s16 unk154;
    u8 _pad156[182];
    s16 unk2CE;
} GenObj;
typedef struct Slot {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Slot;
void func_0805DF68(GenObj *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    u8 *p;
    s32 n;
    Slot *t;

    p = (u8 *)arg0 + 0x2CE;
    n = (s32) *(s16 *)p;
    p = (u8 *)arg0 + (0x14E + (n << 3));
    t = (Slot *)p;
    t->unk0 = arg1;
    t->unk2 = arg2;
    t->unk4 = arg3;
    t->unk6 = arg4;
    p = (u8 *)arg0 + 0x2CE;
    n = (s32) *(s16 *)p;
    *(s16 *)p = (s16) (n + 1);
}
