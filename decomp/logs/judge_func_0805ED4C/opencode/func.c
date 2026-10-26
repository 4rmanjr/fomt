#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_080084DC(void *);                            /* extern */
s32 func_08008B54(void *, s32);                       /* extern */
s32 func_0800E4E0(s32);                             /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *); /* extern */
s32 func_08050E98(s32, s32);                          /* extern */
extern s32 vtable_unk_080E79DC;
extern s32 vtable_unk_080E79E8;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    void *unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[25612];
    s32 unk6420;
    s32 unk6422;
    s32 unk6424;
    s32 unk6426;
    void *unk6428;
    s32 unk642C;
} GenObj;
void *func_0805ED4C(GenObj *arg0, s32 arg1) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 temp_r6;

    sp14 = 0x1E;
    sp14.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E79DC;
    arg0->unk8 = arg1;
    arg0->unkC = 0;
    temp_r6 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk10 = func_08050CC0(temp_r6, 0, 0x1F, 0xF, arg0->unkC, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54(arg0 + 0x14, 1);
    func_08008B54(arg0 + 0x18, 0);
    func_08008B54(arg0 + 0x1C, 2);
    arg0->unk6428 = &vtable_unk_080E79E8;
    (arg0 + 0x6428)->unk4 = 0;
    func_08050E98(arg0->unk10, 0xB);
    arg0->unk6420 = 0;
    arg0->unk6422 = 0;
    arg0->unk6426 = 2;
    arg0->unk6424 = 0;
    arg0->unk642C = func_0800E4E0(arg0->unk8 + 0x1BD8);
    return arg0;
}

