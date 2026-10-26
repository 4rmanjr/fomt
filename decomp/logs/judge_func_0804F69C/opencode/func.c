#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080098AC(void *, s32);                       /* extern */
s32 func_080098DC(void *, s32);                       /* extern */
s32 func_080ADC84(void *, s32);                       /* extern */
s32 func_080E105C(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[52];
    s32 unk3C;
    u8 _pad40[288];
    void *unk160;
    u8 _pad164[44];
    void *unk190;
    u8 _pad194[880];
    void *unk504;
} GenObj;
void func_0804F69C(GenObj *arg0, s32 arg1) {
    void *temp_r1;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    void *temp_r4_5;
    void *var_r0;

    temp_r4 = (GenObj *)((u8 *)arg0 + 0x548);
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    arg0->unk504 = &vtable_unk_080E5A28;
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x1E8);
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    func_080ADC84((GenObj *)((u8 *)arg0 + 0x1E4), 2);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x1D4);
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    arg0->unk190 = &vtable_unk_080E5A28;
    arg0->unk160 = &vtable_unk_080E5A28;
    func_080098AC((GenObj *)((u8 *)arg0 + 0x148), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x130), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x120), 2);
    func_080E105C((GenObj *)((u8 *)arg0 + 0xD0), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0xC0), 2);
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x3C) + ((arg0->unk3C * 0x10) + 4);
    var_r0 = (GenObj *)((u8 *)arg0 + 0x40);
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1);
    }
    func_080098DC((GenObj *)((u8 *)arg0 + 0x20), 2);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x18);
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = temp_r4_4 - 8;
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

