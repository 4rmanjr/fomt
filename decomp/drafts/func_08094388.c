typedef struct ObjEEC {
    u8 _pad[0x20];
    s16 unk20;
    s16 unk22;
    void *unk24;
} ObjEEC;
typedef struct GenObj {
    u8 _pad0[4];
    ObjEEC *unk4;
} GenObj;
void func_08094388(GenObj *arg0) {
    ObjEEC *obj;
    void *fn;
    s16 off;
    s32 count;

    obj = arg0->unk4;
    count = obj->unk22;
    if (count > 0) {
        s16 soff;
        void **sp;
        void *ptr;
        void **slot2;
        soff = *(s16 *)(&obj->unk24);
        sp = (void **)((u8 *)arg0 + soff);
        ptr = *sp;
        slot2 = (void **)((u8 *)ptr + (count * 4) - 4);
        fn = *slot2;
    } else {
        fn = obj->unk24;
    }
    off = arg0->unk4->unk20;
    ((void (*)(void *))(fn))((u8 *)arg0 + off);
}
