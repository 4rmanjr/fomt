u8 *func_08008920(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[17920];
    s32 unk4608;
    s32 unk460C;
    u8 _pad4610[4];
    s32 unk4614;
    s32 unk4618;
    u8 _pad461C[32];
    s32 unk463C;
} GenObj;
void func_08006858(GenObj *arg0) {
    u8 *temp_r0;
    u8 *temp_r0_3;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r0_2;
    void *temp_r0_4;

    if (arg0->unk463C == 0) {
        temp_r0 = func_08008920(arg0);
        temp_r2 = *temp_r0;
        if ((u32) temp_r2 <= 0x7FU) {
            temp_r0_2 = temp_r0 + ((temp_r2 * 8) + 4);
            temp_r0_2->unk0 = (s32) arg0->unk4608;
            temp_r0_2->unk4 = (u16) arg0->unk460C;
            *temp_r0 = temp_r2 + 1;
        }
    }
    temp_r0_3 = func_08008920(arg0);
    temp_r2_2 = *temp_r0_3;
    if ((u32) temp_r2_2 <= 0x7FU) {
        temp_r0_4 = temp_r0_3 + ((temp_r2_2 * 8) + 4);
        temp_r0_4->unk0 = (s32) arg0->unk4614;
        temp_r0_4->unk4 = (u16) arg0->unk4618;
        *temp_r0_3 = temp_r2_2 + 1;
    }
}
