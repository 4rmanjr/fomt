#include "common.h"
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 __12RucksackItem(void *);                         /* extern */
s32 func_0802B908();                                  /* extern */
s32 func_0802C2DC(void *);                            /* extern */
u16 func_0802D158(void *);                          /* extern */
extern ? gUnk_080F0E80;
extern ? vtable_unk_080E6658;

void *func_08024974(void *arg0, s32 arg2) {
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r6;

    func_0802B908();
    arg0->unk14 = &vtable_unk_080E6658;
    arg0->unk34 = arg2;
    arg0->unk38 = (s32) (arg2 + 0x1BD8);
    temp_r0 = arg0 + 0x3C;
    arg0->unk3C = 0;
    temp_r0->unk1 = 0;
    (temp_r0 + 1)->unk1 = 0;
    arg0->unk3F = 0xF;
    temp_r0_2 = arg0 + 0x40;
    arg0->unk40 = 0;
    temp_r0_3 = temp_r0_2 + 1;
    temp_r0_2->unk1 = 0;
    temp_r0_3->unk1 = 0;
    (temp_r0_3 + 1)->unk2 = 0;
    temp_r6 = arg0 + 0x60;
    arg0->unk60 = &gUnk_080F0E80;
    temp_r6->unk4 = 0;
    __12RucksackItem(arg0 + 0x68);
    temp_r6->unkC = 0;
    temp_r6->unkD = 0;
    temp_r6->unk10 = 0x3B;
    temp_r6->unk14 = 0;
    temp_r0_4 = arg0 + 0x78;
    arg0->unk78 = 0;
    temp_r0_4->unk1 = 0;
    (temp_r0_4 + 1)->unk1 = 0;
    arg0->unk7C = 0xFFFF;
    temp_r0_5 = arg0 + 0x80;
    arg0->unk80 = 0;
    temp_r0_6 = temp_r0_5 + 8;
    temp_r0_5->unk8 = 0;
    temp_r0_6->unk1 = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk8 = 0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk14 = 0;
    temp_r0_6->unk18 = 0;
    (arg0 + 0x7C)->unk28 = 1;
    temp_r0_7 = arg0 + 0xA6;
    arg0->unkA6 = 0;
    temp_r0_8 = temp_r0_7 + 2;
    temp_r0_7->unk2 = -1;
    temp_r0_9 = temp_r0_8 + 4;
    temp_r0_8->unk4 = -1;
    temp_r0_9->unk4 = 0;
    (temp_r0_9 + 4)->unk1 = 0;
    arg0->unkB2 = 0x64;
    temp_r0_10 = arg0 + 0xB3;
    arg0->unkB3 = 0;
    temp_r0_11 = temp_r0_10 + 1;
    temp_r0_10->unk1 = 0;
    temp_r0_12 = temp_r0_11 + 0xC;
    temp_r0_11->unkC = 0;
    temp_r0_13 = temp_r0_12 + 1;
    temp_r0_12->unk1 = 0;
    temp_r0_14 = temp_r0_13 + 1;
    temp_r0_13->unk1 = 0;
    temp_r0_15 = temp_r0_14 + 1;
    temp_r0_14->unk1 = 0;
    temp_r0_15->unk1 = 0;
    (temp_r0_15 + 1)->unk1 = 0;
    func_0802C2DC(arg0);
    if (arg0->unk22 != func_0802D158(arg0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    return arg0;
}

