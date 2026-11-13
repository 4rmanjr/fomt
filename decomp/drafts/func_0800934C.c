typedef struct GenObj {
    u8 _pad0[4];
    s16 unk4;
    u8 _pad6[2];
    s32 unk8;
    u8 unkC;
    u8 _padD;
    u16 unkE;
} GenObj;

void func_0800934C(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    GenObj *t = *(GenObj **) arg0;
    register s32 n asm("r0");
    u8 flag;

    n = arg1;

    if (n < 0) {
        n = -n;
    }
    n = -n;
    flag = ((u32) (0 - arg3) | (u32) arg3) >> 0x1F;
    t->unk4 = n;
    t->unk8 = arg2;
    t->unkC = flag;
    t->unkE = 0xFFFF;
}
