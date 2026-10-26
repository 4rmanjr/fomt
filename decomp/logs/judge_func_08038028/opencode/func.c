#include "common.h"
s32 __7AEntityP10GameObjectRC8Location();             /* extern */
s32 func_08020460(void *);                          /* extern */
s32 func_08038374(void *, s32, s32, u16, s32);        /* extern */
extern s32 vtable_unk_080E73B4;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[4];
    void *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    s32 unk25;
    s32 unk28;
} GenObj;
void *func_08038028(GenObj *arg0, void **arg1, s32 arg2) {
    void *temp_r0;

    __7AEntityP10GameObjectRC8Location();
    arg0->unk14 = &vtable_unk_080E73B4;
    arg0->unk18 = arg2;
    arg0->unk1C = 0;
    arg0->unk25 = 0;
    (arg0 + 0x25)->unk1 = 0;
    arg0->unk28 = 0x31;
    temp_r0 = (*arg1)->unk40(arg1, 0x2B);
    if ((temp_r0 != 0) && (temp_r0->unk4 == arg0->unk4) && ((func_08020460(temp_r0) << 0x18) != 0)) {
        func_08038374(arg0, temp_r0->unk8, temp_r0->unkC, temp_r0->unk22, (s32) temp_r0->unk20);
    }
    return arg0;
}

