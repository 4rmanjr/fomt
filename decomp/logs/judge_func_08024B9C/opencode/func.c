#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0802B260(s32, void *);                       /* extern */
s32 func_0809C694(void *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[25];
    s32 unk21;
    u8 _pad25[15];
    s32 unk34;
    u8 _pad38[8505];
    struct GenObj *unk2171;
} GenObj;
void func_08024B9C(GenObj *arg0) {
    s8 var_r5;
    GenObj *temp_r1;

    var_r5 = 2;
    if ((arg0->unk4 == 0x13) && ((temp_r1 = arg0->unk34, (((u32) (temp_r1->unk2171 << 0x1B) >> 0x1E) == 1)) || ((func_0809C694((GenObj *)((u8 *)temp_r1 + 0x214C), 0x4A) << 0x18) != 0))) {
        var_r5 = 1;
    }
    arg0->unk21 = var_r5;
    func_0802B260(__builtin_new(0x284), arg0);
}

