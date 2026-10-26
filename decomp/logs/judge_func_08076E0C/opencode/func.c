#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08075DEC(s32, s32);                          /* extern */
extern s32 vtable_unk_080E7B88;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[16];
    struct GenObj *unk18;
    u8 _pad1C[1400];
    s32 unk594;
    u8 _pad598[12];
    s32 unk5A4;
    u8 _pad5A8[12];
    void *unk5B4;
} GenObj;
void func_08076E0C(GenObj *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    GenObj *temp_r0;

    arg0->unk5B4 = &vtable_unk_080E7B88;
    temp_r2 = ((GenObj *)((u8 *)arg0 + 0x5A4))->unk4;
    var_r1 = arg0->unk5A4;
    if (var_r1 != temp_r2) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r2);
    }
    if (arg0->unk5A4 != 0) {
        free();
    }
    temp_r2_2 = ((GenObj *)((u8 *)arg0 + 0x594))->unk4;
    var_r1_2 = arg0->unk594;
    if (var_r1_2 != temp_r2_2) {
        do {
            var_r1_2 += 0x10;
        } while (var_r1_2 != temp_r2_2);
    }
    if (arg0->unk594 != 0) {
        free();
    }
    temp_r0 = arg0->unk4;
    if (temp_r0 != 0) {
        func_08075DEC((GenObj *)((u8 *)temp_r0 + 0x28), 2);
        temp_r2_3 = ((GenObj *)((u8 *)temp_r0 + 0x18))->unk4;
        var_r1_3 = temp_r0->unk18;
        if (var_r1_3 != temp_r2_3) {
            do {
                var_r1_3 += 0x40;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0->unk18 != 0) {
            free();
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

