#include "common.h"
s32 func_08076BFC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7B2C;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u8 _pad8[28];
    struct GenObj *unk24;
    struct GenObj *unk28;
    u8 _pad2C[1416];
    void *unk5B4;
} GenObj;
void *func_08070C24(GenObj *arg0, s32 arg4) {
    s32 var_r0;
    s32 var_r3;
    GenObj *var_r1;

    func_08076BFC(arg0, arg4);
    arg0->unk5B4 = &vtable_unk_080E7B2C;
    var_r1 = (GenObj *)((u8 *)arg0 + 0x5B8);
    var_r3 = 0x77;
    do {
        var_r1->unk0 = (u16) (var_r1->unk0 | 0xFFFF);
        var_r1->unk4 = 0;
        var_r1->unk24 = 0;
        var_r1->unk28 = 0;
        var_r1 += 0x2C;
        var_r3 -= 1;
    } while (var_r3 != -1);
    var_r0 = 7;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    return arg0;
}

