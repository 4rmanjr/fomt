s32 func_0803CD4C(s32, void *, s32);                  /* extern */
s32 func_080D7F08(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[10];
    struct GenObj *unk12;
    u8 _pad16[118];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
    u8 _padAC[8];
    struct GenObj *unkB4;
} GenObj;
void func_08014318(GenObj *arg0) {
    s32 temp_r0;
    s32 var_r7;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    (*temp_r4->unkA8)->unkBC();
    temp_r0 = temp_r4->unkB4;
    if (temp_r0 != 0) {
        var_r7 = 0;
        if ((((*temp_r4->unkA8)->unkB0() << 0x18) != 0) || (1 & ((u32) (temp_r4->unk8C->unk12 << 0x15) >> 0x1A))) {
            var_r7 = 1;
        }
        func_0803CD4C(temp_r0 + 8, temp_r4->unk8C + 0x10, var_r7);
    }
    func_080D7F08(temp_r4);
}
