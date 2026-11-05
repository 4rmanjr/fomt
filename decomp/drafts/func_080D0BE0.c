// DECOMP-MATCHED func_080D0BE0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern void *gUnk_0300041C;
typedef struct S_D0BE0 { u8 _pad0[52]; u32 unk34; u32 unk38; } S_D0BE0;
extern S_D0BE0 *gUnk_03000420;

void func_080D0BE0(void) {
    u32 temp_r0;
    u32 temp_r1;

    temp_r1 = gUnk_03000420->unk34;
    if (temp_r1 != gUnk_03000420->unk38) {
        temp_r0 = (u32) (temp_r1 + 1) % 10U;
        gUnk_03000420->unk34 = temp_r0;
        gUnk_0300041C = (void *)((u8 *)gUnk_03000420 + ((temp_r0 << 5) + 0x3C));
    }
}
