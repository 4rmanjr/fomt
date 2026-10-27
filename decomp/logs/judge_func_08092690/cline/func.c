#include "common.h"
extern s32 memakai;
s32 func_080E3504(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7DD8;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_08092690(GenObj *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E7DD8;
    func_080E3504(arg0, arg1);
}
/* ATTEMPT-NOTE cline: forward (arg0,arg1) ke func_080E3504 agar literal memakai r2 spt ref. */

