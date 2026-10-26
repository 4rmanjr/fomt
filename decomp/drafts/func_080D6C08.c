s32 __builtin_delete(void *);                         /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[240];
    s32 unkFC;
} GenObj;
void func_080D6C08(GenObj *arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_r1_2;
    void *var_r0;
    void *var_r0_2;

    temp_r1 = arg0 + 0xFC + ((arg0->unkFC * 8) + 4);
    var_r0 = arg0 + 0x100;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 8;
        } while (var_r0 != temp_r1);
    }
    temp_r1_2 = arg0 + 8 + ((arg0->unk8 * 8) + 4);
    var_r0_2 = arg0 + 0xC;
    if (var_r0_2 != temp_r1_2) {
        do {
            var_r0_2 += 8;
        } while (var_r0_2 != temp_r1_2);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
