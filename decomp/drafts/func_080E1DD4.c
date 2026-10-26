s32 func_080086BC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    void *unkC;
    u8 _pad10[276];
    s32 unk124;
    u8 _pad128[1164];
    struct GenObj *unk5B4;
} GenObj;
void func_080E1DD4(GenObj *arg0, s32 arg1) {
    s32 temp_r1;
    GenObj *temp_r1_2;
    void *var_r0;

    temp_r1 = (GenObj *)((u8 *)arg0 + 0x124) + ((arg0->unk124 * 8) + 4);
    var_r0 = (GenObj *)((u8 *)arg0 + 0x128);
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 8;
        } while (var_r0 != temp_r1);
    }
    arg0->unkC = &vtable_unk_080E5A28;
    temp_r1_2 = arg0->unk8;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk5B4->unk8))(temp_r1_2, 3);
    }
    func_080086BC(arg0, arg1);
}
