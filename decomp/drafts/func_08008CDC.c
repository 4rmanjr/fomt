typedef struct S_08CDC {
    u8 _pad0[4];
    u16 unk4;
} S_08CDC;

s32 func_08008CDC(S_08CDC **arg0) {
    return (*arg0)->unk4;
}
