s32 func_080D6F3C(void *);                            /* extern */
s32 func_080D7634(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
} GenObj;
void func_080D7678(GenObj *arg0, s32 arg1, u32 arg2) {
    u32 var_r1;
    GenObj *temp_r5;
    void *var_r3;

    if (arg2 <= 7U) {
        temp_r5 = (GenObj *)((u8 *)arg0 + 4);
        var_r3 = temp_r5;
        if (0x80 & arg1) {
            var_r3 = (GenObj *)((u8 *)arg0 + 0x20);
        }
        func_080D7634(var_r3);
        arg0->unk0 = 0;
        var_r1 = 0;
        if (temp_r5->unk1 != 0) {
            var_r1 = (u32) (0 - ((GenObj *)((u8 *)arg0 + 0x20))->unk1) >> 0x1F;
        }
        arg0->unk1 = (s8) var_r1;
        return;
    }
    if (arg2 == 8) {
        func_080D6F3C(arg0);
    }
}
