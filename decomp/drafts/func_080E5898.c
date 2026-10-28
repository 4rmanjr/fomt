s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080CADF0(void *, s32);                         /* extern */
extern s32 vtable_unk_080E85AC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[520];
    void *unk210;
    s32 unk214;
} GenObj;
void func_080E5898(GenObj *arg0, ? arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r2;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    void *var_r0;
    GenObj *var_r4;
    GenObj *var_r4_2;

    arg0->unk210 = &vtable_unk_080E85AC;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x2EC);
    if (temp_r0 != 0) {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x32C);
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 8;
                func_080073E0(var_r4, var_r4->unk4);
                func_08007184(var_r4, 2);
            } while (((GenObj *)((u8 *)arg0 + 0x2EC)) != var_r4);
        }
    }
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x2AC);
    if (temp_r0_2 != 0) {
        var_r4_2 = (GenObj *)((u8 *)arg0 + 0x2EC);
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 8;
                func_08007C28(var_r4_2, var_r4_2->unk4);
                func_080079E8(var_r4_2, 2);
            } while (((GenObj *)((u8 *)arg0 + 0x2AC)) != var_r4_2);
        }
    }
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x2A4);
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x29C);
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r2 = (GenObj *)((u8 *)arg0 + 0x214) + ((arg0->unk214 * 0xC) + 4);
    var_r0 = (GenObj *)((u8 *)arg0 + 0x218);
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 0xC;
        } while (var_r0 != temp_r2);
    }
    func_080CADF0(arg0, arg1);
}
