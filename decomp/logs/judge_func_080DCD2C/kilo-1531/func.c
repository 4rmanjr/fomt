#include "common.h"
s32 func_080DC840();                                  /* extern */
extern ? vtable_unk_080E681C;

void *func_080DCD2C(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    func_080DC840();
    arg0->unk24 = &vtable_unk_080E681C;
    temp_r1 = arg0 + 0x28;
    temp_r0 = arg1 + 0x28;
    arg0->unk28 = (s32) arg1->unk28;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    (temp_r1 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    arg0->unk3C = (u8) arg1->unk3C;
    temp_r1_2 = arg0 + 0x3D;
    arg0->unk3D = (u8) arg1->unk3D;
    temp_r1_2->unk1 = (u8) arg1->unk3E;
    (temp_r1_2 + 1)->unk1 = (u8) arg1->unk3F;
    arg0->unk40 = (s32) arg1->unk40;
    arg0->unk44 = (u16) arg1->unk44;
    arg0->unk48 = (s32) arg1->unk48;
    arg0->unk4C = (u8) arg1->unk4C;
    arg0->unk4D = (u8) arg1->unk4D;
    return arg0;
}

