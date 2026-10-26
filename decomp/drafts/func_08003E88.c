void *func_08008920(void *);                           /* extern */

typedef struct GenObj {
    u8 _pad0[0x34];
    s32 unk34;
    u16 unk38;
} GenObj;
void func_08003E88(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_r2;
    s32 var_r4;
    GenObj *temp_r0;

    var_r4 = arg1;
    if (var_r4 == 1) {
        var_r4 = 0;
    }
    sp0 = arg2;
    sp4 = arg3;
    temp_r2 = (sp0 & 0xFFFFFF00) | (u8) (*(u8 *)&sp0 + 8 + (((var_r4 * 2) + 1) * 8));
    sp0 = (0xFE00FFFF & temp_r2) | (((((u32) (temp_r2 << 7) >> 0x17) + 0x10) & 0x1FF) << 0x10);
    temp_r0 = func_08008920(arg0);
    temp_r0->unk34 = sp0;
    temp_r0->unk38 = (u16) sp4;
}
