#include "common.h"
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0803C7C8(void *, s32, s32, s32, s32);        /* extern */
s32 func_08075AE8(void *, s32, s32 *, s32, s32);        /* extern */
s32 func_08077DD8();                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[436];
    s32 unk1CC;
    u8 _pad1D0[8256];
    s32 unk2210;
} GenObj;
void func_080785C8(GenObj *arg0) {
s32 sp4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r7;
    void **temp_r1;
    GenObj *var_r5;

    func_08077DD8();
    var_r5 = arg0->unk1CC;
    temp_r7 = ((GenObj *)((u8 *)arg0 + 0x1CC))->unk4;
    if (var_r5 != temp_r7) {
        do {
            temp_r4 = func_08008920(arg0);
            temp_r1 = var_r5->unk8;
            (*temp_r1)->unk10(&sp4, temp_r1, *(var_r5->unkC + (var_r5->unk14 * 4)));
            memcpy(&sp4, &sp4, 0x20);
            func_08075AE8((GenObj *)((u8 *)arg0 + 0x20), temp_r4, &sp4, var_r5->unk0, var_r5->unk4);
            var_r5 += 0x1C;
        } while (var_r5 != temp_r7);
    }
    if ((s32) (arg0->unk8->unk2210 << 0x1E) < 0) {
        temp_r4_2 = func_08008920(arg0);
        func_0803C7C8((GenObj *)((u8 *)arg0 + 0x1C), 0x98, 0x50, temp_r4_2, func_08008940(arg0));
    }
}

