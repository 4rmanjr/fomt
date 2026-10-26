#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08008A68(s32, s32);                          /* extern */
s32 func_080098DC(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5B00;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
    u8 _pad8[28];
    struct GenObj *unk24;
} GenObj;
void func_080086BC(GenObj *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;
    GenObj *temp_r0;

    arg0->unk4 = &vtable_unk_080E5B00;
    temp_r0 = arg0->unk0;
    if (temp_r0 != 0) {
        func_080098DC((GenObj *)((u8 *)temp_r0 + 0x494), 2);
        func_08008A68((GenObj *)((u8 *)temp_r0 + 0x490), 2);
        temp_r2 = ((GenObj *)((u8 *)temp_r0 + 0x24))->unk4;
        var_r1 = temp_r0->unk24;
        if (var_r1 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0->unk24 != 0) {
            free();
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

