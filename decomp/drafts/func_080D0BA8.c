extern void *gUnk_03000420;
s32 __umodsi3(s32, s32);

typedef struct CP8 { s32 w[8]; } CP8;
typedef struct GenObj {
    void *unk0;
    void *unk4;
} GenObj;
void func_080D0BA8(GenObj *arg0) {
    void *obj;
    s32 x;
    CP8 *dst;

    obj = gUnk_03000420;
    x = *(s32 *)((u8 *)obj + 0x38);
    *(s32 *)((u8 *)obj + 0x38) = __umodsi3((u32)(x + 1), 10);
    ((void **)(arg0))[1] = 0;
    ((void **)(arg0))[2] = 0;
    {
        volatile s32 *xp;
        xp = (volatile s32 *)((u8 *)obj + 0x38);
        x = *xp;
    }
    dst = (CP8 *)((u8 *)obj + (x << 5) + 0x3C);
    *dst = *(CP8 *)arg0;
}
