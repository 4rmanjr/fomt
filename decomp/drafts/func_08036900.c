s32 func_08034C64(void *, s32);                     /* extern */
s32 func_08035908(void *, s32);                       /* extern */
s32 func_08035940(void *, s32);                       /* extern */
s32 func_08035AE0(void *);                          /* extern */
u32 func_0809EAD8();                                /* extern */
s32 func_080A0384(s32);                             /* extern */
s32 func_080A0490(s32);                             /* extern */

typedef struct Vtbl6900 {
    s32 unk0;
    u8 _pad4[320];
    s32 (*unk144)();
} Vtbl6900;
typedef struct GenObj {
    Vtbl6900 **unk0;
    s32 unk4;
    u8 _pad8[44];
    u8 *unk34;
    u8 _pad38[8499];
    u8 unk216B;
    u8 unk216C;
} GenObj;
void func_08036900(GenObj *arg0) {
    u8 *temp_r6;
    s32 var_r7;
    s32 var_r8;
    u8 *temp_r5;

    var_r7 = 0x7BE;
    var_r8 = 0x7C2;
    temp_r5 = arg0->unk34;
    temp_r6 = temp_r5 + 0x1CD4;
    if ((func_080A0490((s32)temp_r6) == 0x19) && (arg0->unk4 == 0x1D)) {
        if (((func_08035AE0(arg0) << 0x18) != 0) || ((((temp_r5[0x216C] & 1) * 2) | (temp_r5[0x216B] >> 7)) == 1)) {
            var_r7 = 0x7D2;
        } else if ((func_080A0384((s32)temp_r6) != 0) && (func_0809EAD8() <= 0x3BU) && ((func_08034C64(temp_r5, (*arg0->unk0)->unk144() + 0xA) << 0x18) != 0)) {
            var_r7 = 0x7CA;
            var_r8 = 0x7CE;
        }
    }
    func_08035908(arg0, var_r7);
    func_08035940(arg0, var_r8);
}
