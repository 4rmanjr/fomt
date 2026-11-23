typedef struct S_08CD0 {
    u8 _pad0[4];
    u32 unk4;
} S_08CD0;

s32 func_08008CD0(S_08CD0 **arg0) {
    return ((*arg0)->unk4 >> 0x1F) ^ 1;
}
