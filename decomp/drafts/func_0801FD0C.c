typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8];
    struct GenObj *unk14;
} GenObj;
void func_0801FD0C(s32 arg0, s32 arg1) {
    GenObj **pp;
    GenObj *obj;

    arg0 += 8;
    pp = (GenObj **)(arg0 + arg1 * 4);
    obj = *pp;
    if (obj != 0) {
        ((void (*)(GenObj *, ...))(obj->unk14->unk8))(obj, 3);
        *pp = 0;
    }
}
