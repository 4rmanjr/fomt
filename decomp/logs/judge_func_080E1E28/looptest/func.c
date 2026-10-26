#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                         /* extern */
s32 func_08050D0C(void *, s32);                       /* extern */
s32 func_08075DEC(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;

void func_080E1E28(void *arg0, ? arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    void **temp_r1_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *var_r4;
    void *var_r4_2;

    temp_r0 = arg0 + 0x4120;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x4170;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 8;
                func_080073E0(var_r4, var_r4->unk4);
                func_08007184(var_r4, 2);
            } while ((arg0 + 0x4120) != var_r4);
        }
    }
    temp_r0_2 = arg0 + 0x40D0;
    if (temp_r0_2 != 0) {
        var_r4_2 = arg0 + 0x4120;
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 8;
                func_08007C28(var_r4_2, var_r4_2->unk4);
                func_080079E8(var_r4_2, 2);
            } while ((arg0 + 0x40D0) != var_r4_2);
        }
    }
    temp_r4 = arg0 + 0x40C8;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = arg0 + 0x40C0;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = arg0 + 0x40B8;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    func_08007184(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x40B0;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r2 = arg0 + 0x3FA4 + ((arg0->unk3FA4 * 0xC) + 4);
    var_r0 = arg0 + 0x3FA8;
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 0xC;
        } while (var_r0 != temp_r2);
    }
    temp_r1 = arg0 + 0x3EA0 + ((arg0->unk3EA0 * 0x10) + 4);
    var_r0_2 = arg0 + 0x3EA4;
    if (var_r0_2 != temp_r1) {
        do {
            var_r0_2 += 0x10;
        } while (var_r0_2 != temp_r1);
    }
    func_08050D0C(arg0 + 0x134, 2);
    arg0->unk54 = &vtable_unk_080E5A28;
    arg0->unk24 = &vtable_unk_080E5A28;
    temp_r0_3 = arg0->unk1C;
    if (temp_r0_3 != 0) {
        func_08075DEC(temp_r0_3 + 0x28, 2);
        temp_r2_2 = (temp_r0_3 + 0x18)->unk4;
        var_r1 = temp_r0_3->unk18;
        if (var_r1 != temp_r2_2) {
            do {
                var_r1 += 0x40;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_3->unk18 != 0) {
            free();
        }
        __builtin_delete(temp_r0_3);
    }
    temp_r1_2 = arg0->unk8;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    func_080086BC(arg0, arg1);
}

