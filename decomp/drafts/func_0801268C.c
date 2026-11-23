s32 func_08050DC8(s32, s32, s32, s32);

typedef struct GenObj {
    u8 _pad4[4];
    u8 *unk4;
} GenObj;

void func_0801268C(GenObj *arg0, s32 arg1, s32 arg2) {
    u8 *p;

    p = arg0->unk4;
    if (*(s32 *) (p + 0xAC) != 0) {
        func_08050DC8(*(s32 *) (p + 0xAC), arg1, (u16) arg2, *(s32 *) (p + 0xB0));
        *(s32 *) (p + 0x9C) = 0x10;
    }
}
