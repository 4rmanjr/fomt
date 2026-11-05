// DECOMP-MATCHED func_080ADACC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 memcpy(void *, s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[130];
    u8 unk82;
    u8 unk83;
} GenObj;
void func_080ADACC(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    GenObj *temp_r4;

    temp_r4 = (GenObj *)(arg0 + (0xDE << 1));
    temp_r4 = (GenObj *)((u8 *)temp_r4 + (arg2 * 0x84));
    memcpy(temp_r4, arg1, 0x20);
    temp_r4->unk82 = 1;
    temp_r4->unk83 = arg3;
}
