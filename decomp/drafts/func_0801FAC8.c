s32 __builtin_new(s32);                             /* extern */
s32 func_0803AEA0(s32, void *, s32, s32, s32);      /* extern */
s32 func_0803B0A8(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 *unk4;
    u8 _pad8[4212];
    s32 unk107C;
} GenObj;
void func_0801FAC8(GenObj *arg0, s32 arg1) {
    s32 temp_r5;
    s32 var_r7;
    void *var_r8;
    u32 var_r3;
    void **var_r1;
    GenObj *temp_r0;
    void **temp_r2;
    s32 res;
    s32 nv;
    s32 *slot;

    var_r8 = 0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r8 = (void *)((u8 *)arg0 + 0xED4);
        }
    } else {
        var_r8 = (void *)((u8 *)arg0 + 0xEA4);
    }
    if (var_r8 != 0) {
        var_r7 = 0x20;
        temp_r5 = *arg0->unk4;
        if (temp_r5 == 2) {
            var_r3 = 0;
            var_r1 = (void **)((u8 *)arg0 + 8);
            temp_r2 = (void **)((u8 *)arg0 + 0x198);
            if (var_r1 != temp_r2) {
                do {
                    temp_r0 = (GenObj *)*var_r1;
                    if ((temp_r0 != 0) && (*(u16 *)((u8 *)temp_r0 + 4) == temp_r5)) {
                        var_r3 += 1;
                    }
                    var_r1 += 1;
                } while (var_r1 != temp_r2);
            }
            if ((u32) (var_r3 + 0xA) > 0xAU) {
                if (var_r3 <= 0x15U) {
                    var_r7 = 0x20 - var_r3;
                } else {
                    var_r7 = 0xA;
                }
            }
        }
        /* res menahan hasil call di r0 melewati hitung-alamat slot;
           salinan nv = res yg memaksa urutan emisi ldr/adds/adds */
        res = func_0803AEA0(__builtin_new(0x46C), arg0, (s32)var_r8, arg1, var_r7);
        slot = &arg0->unk107C;
        nv = res;
        if ((nv != *slot) && (*slot != 0)) {
            func_0803B0A8(*slot, 3);
        }
        *slot = nv;
    }
}
