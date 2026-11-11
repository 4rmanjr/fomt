struct In;
typedef struct Vt {
    u8 _pad0[0x40];
    s32 (*unk40)(struct In *);
} Vt;

typedef struct In {
    u8 _pad0[0xA];
    s16 unkA;
    u8 _padC[2];
    s16 unkE;
    u8 _pad10[4];
    struct Vt *unk14;
} In;

typedef struct Out {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Out;

Out func_0803240C(In *arg1);

void *func_08024BFC(u32 *arg0, In *arg1) {
    Out r;

    if ((s8) arg1->unk14->unk40(arg1) != 0) {
        s16 a = arg1->unkA;
        s16 b = arg1->unkE;

        ((s16 *) &r)[0] = a - 7;
        ((s16 *) &r)[1] = b - 9;
        ((s16 *) &r)[2] = a + 7;
        ((s16 *) &r)[3] = b + 5;
    } else {
        r = func_0803240C(arg1);
    }
    arg0[0] = ((u32 *) &r)[0];
    arg0[1] = ((u32 *) &r)[1];
    return arg0;
}
