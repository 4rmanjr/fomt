s32 __builtin_delete(void *);                         /* extern */
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E7568;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    s32 unk18;
    u8 _pad1C[48];
    struct GenObj *unk4C;
} GenObj;
void func_080DCF4C(GenObj *arg0, s32 arg1) {
    s32 var_r5;
    u32 temp_r7;
    u32 var_r6;
    void **var_r4;
    GenObj *temp_r0;
    GenObj *temp_r1;
    GenObj *temp_r1_2;

    arg0->unk14 = &vtable_unk_080E7568;
    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        var_r6 = 0;
        temp_r7 = temp_r0->unk8;
        if (temp_r7 > 0U) {
            var_r5 = arg0->unk18;
            var_r4 = (GenObj *)((u8 *)temp_r0 + 0xC);
            do {
                temp_r1 = *var_r4;
                if (temp_r1 != 0) {
                    ((void (*)(void *,...))(temp_r1->unk4C->unk14))(temp_r1, var_r5);
                }
                var_r5 += 0x10;
                var_r4 += 4;
                var_r6 += 1;
            } while (var_r6 < temp_r7);
        }
    }
    arg0->unk14 = &__vt_7AEntity;
    temp_r1_2 = arg0->unk10;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk4->unk8))(temp_r1_2, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
