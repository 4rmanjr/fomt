s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */

typedef struct GenObj {
    u8 _pad0[1816];
    s32 unk718;
    u8 _pad71C[1016];
    s32 unkB14;
    s32 unkB18;
    u8 _padB1C[21];
    s32 unkB31;
    s32 unkB32;
    u8 _padB36[7];
    s32 unkB3D;
    s32 unkB3E;
    s32 unkB3F;
    u8 _padB43[21];
    s32 unkB58;
} GenObj;
void func_080B45F0(GenObj *arg0) {
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;

    arg0->unkB31 = 0;
    arg0->unkB32 = 0;
    arg0->unkB18 = (s32) arg0->unkB58;
    arg0->unkB14 = 0;
    arg0->unkB3D = 0x16;
    arg0->unkB3E = 0x16;
    arg0->unkB3F = 0x16;
    temp_sl = arg0->unk718;
    temp_sb = func_080088DC(arg0);
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r5 = func_08008940(arg0);
    func_08050D3C(temp_sl, temp_sb, temp_r8, temp_r6, temp_r5, func_0800894C(arg0), arg0 + 0x708);
}
