s32 func_08034C64(void *, s32);                     /* extern */
s32 func_08035908(void *, s32);                       /* extern */
s32 func_08035940(void *, s32);                       /* extern */
s32 func_08035AE0(void *);                          /* extern */
u32 func_0809EAD8();                                /* extern */
s32 func_080A0384(void *);                             /* extern */
s32 func_080A0490(void *);                             /* extern */

typedef struct Vtbl144 {
    u8 _pad0[0x144];
    s32 (*unk144)(void);
} Vtbl144;
typedef struct GenObj {
    Vtbl144 **unk0;
    u16 unk4;
    u8 _pad6[46];
    struct GenObj *unk34;
    u8 _pad38[0x2133];
    u8 unk216B;
} GenObj;
void func_08035C04(GenObj *arg0) {
    u8 *temp_r6;
    s32 var_r7;
    s32 var_r8;
    GenObj *temp_r5;

    var_r7 = 0x22F;
    var_r8 = 0x233;
    temp_r5 = arg0->unk34;
    temp_r6 = (u8 *)temp_r5 + 0x1CD4;
    if ((func_080A0490(temp_r6) == 3) && (arg0->unk4 == 0x1D)) {
        if (((func_08035AE0(arg0) << 0x18) != 0) || (((u32) (temp_r5->unk216B << 0x19) >> 0x1E) == 1)) {
            var_r7 = 0x23F;
        } else if ((func_080A0384(temp_r6) != 0) && (func_0809EAD8() <= 0x3BU)) {
            Vtbl144 **pp = arg0->unk0;
            if ((func_08034C64(temp_r5, (*pp)->unk144() + 0xA) << 0x18) != 0) {
                var_r7 = 0x247;
                var_r8 = 0x24B;
            }
        }
    }
    func_08035908(arg0, var_r7);
    func_08035940(arg0, var_r8);
}
