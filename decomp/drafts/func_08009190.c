s32 func_08009158(i16 *);                           /* extern */

typedef struct GenObj {
    u16 unk0;
    u16 _pad2;
    u16 unk4;
} GenObj;

s32 func_08009190(s32 arg0) {
    register s32 temp_r5 asm("r5");
    s32 res;

    temp_r5 = ((GenObj *)arg0)->unk0;
    res = func_08009158((i16 *) arg0) & ~temp_r5;
    ((GenObj *)arg0)->unk4 = res;
    return res;
}
