u8 *func_08008920(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[17928];
    s32 unk4608;
    u8 _pad460C[8];
    s32 unk4614;
    u8 _pad4618[36];
    s32 unk463C;
} GenObj;
void func_08006858(GenObj *arg0) {
    u8 *temp_r0;
    u8 *temp_r0_3;
    u32 temp_r2;
    u32 temp_r2_2;

    if (arg0->unk463C != 0) {
        goto second;
    }
    temp_r0 = func_08008920(arg0);
    temp_r2 = *temp_r0;
    if (temp_r2 <= 0x7FU) {
        u8 *s = temp_r0 + ((temp_r2 * 8) + 4);
        *(s32 *)s = *(s32 *)((u8 *)arg0 + 0x4608);
        *(u16 *)(s + 4) = *(u16 *)((u8 *)arg0 + 0x460C);
        *temp_r0 = (u8)(temp_r2 + 1);
    }
second:
    temp_r0_3 = func_08008920(arg0);
    temp_r2_2 = *temp_r0_3;
    if (temp_r2_2 <= 0x7FU) {
        u8 *s2 = temp_r0_3 + ((temp_r2_2 * 8) + 4);
        s32 *src = (s32 *)((u8 *)arg0 + 0x4614);
        *(s32 *)s2 = *src;
        *(u16 *)(s2 + 4) = *(u16 *)((u8 *)src + 4);
        *temp_r0_3 = (u8)(temp_r2_2 + 1);
    }
}
