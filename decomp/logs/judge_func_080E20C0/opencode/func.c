#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[12];
    s32 unk10;
    u8 _pad14[12];
    s32 unk20;
} GenObj;
void func_080E20C0(GenObj *arg0, s32 arg1) {
    if (arg0->unk20 != 0) {
        free();
    }
    if (arg0->unk10 != 0) {
        free();
    }
    if (arg0->unk0 != 0) {
        free();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

