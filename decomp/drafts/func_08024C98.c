typedef struct GenObj {
    u8 _pad0[60];
    u8 unk3C;
} GenObj;
void func_08024C98(GenObj *arg0) {
    arg0->unk3C = 0;
}

/* ATTEMPT-NOTE opencode: member u8 (strb) bukan s32; offset 0x3C muat adds+strb. */
