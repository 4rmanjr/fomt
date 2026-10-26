#include "common.h"
s32 func_08008B6C(s32, u16);                          /* extern */
s32 func_08008B88(s32, u16);                          /* extern */
s32 func_08008BB0(s32, u16);                          /* extern */
s32 func_08008C28(s32, u16);                          /* extern */
s32 func_08008C38(s32, u16, s32);                     /* extern */
s32 func_08008C54(s32, s16, s32);                     /* extern */
s32 func_08008C70(s32, s8, s32);                      /* extern */
s32 func_08008C8C(s32, u8, s32);                      /* extern */
s32 func_08008CA8(s32, u8, s32);                      /* extern */
s32 func_08008CC4(s32);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk7;
    s32 unk8;
} GenObj;
void func_080123CC(GenObj *arg0, s32 arg1, u16 arg2, GenObj *arg3) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    u16 temp_r2;

    temp_r4 = arg0->unk4;
    temp_r2 = arg2;
    temp_r0 = temp_r4 + 0xBC;
    switch (arg1) {                                 /* irregular */
    case 0:
        func_08008B6C(temp_r0, temp_r2);
        break;
    case 1:
        func_08008B88(temp_r0, temp_r2);
        break;
    case 2:
        func_08008BB0(temp_r0, temp_r2);
        break;
    }
    temp_r4_2 = temp_r4 + 0xBC;
    func_08008CC4(temp_r4_2);
    func_08008C28(temp_r4_2, arg3->unk0);
    func_08008C38(temp_r4_2, arg3->unk2, 0xFFFF);
    func_08008C54(temp_r4_2, arg3->unk4, 0xFFFF);
    func_08008C70(temp_r4_2, arg3->unk6, 0xFFFF);
    func_08008C8C(temp_r4_2, arg3->unk7, 0xFFFF);
    func_08008CA8(temp_r4_2, arg3->unk8, 0xFFFF);
}

