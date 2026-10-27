#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[40];
    void *unk30;
} GenObj;
void func_080E0D70(GenObj *arg0, s32 arg1) {
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r4_7;

    func_080098AC((GenObj *)((u8 *)arg0 + 0x340), 2);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x338);
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x31C), 2);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x314);
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x2FC), 2);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x2F4);
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    func_08007184(temp_r4_3, 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x2D8), 2);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x2D0);
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x2B4), 2);
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x2A8);
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x190), 2);
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x184);
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x68), 2);
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x60);
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    arg0->unk30 = &vtable_unk_080E5A28;
    arg0->unk0 = &vtable_unk_080E5A28;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

