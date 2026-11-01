#include "prelude.h"
// DECOMP-MATCHED func_0803C7A0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
i32 __builtin_delete(void *);                          /* extern */
i32 func_080E0D70(i32, i32);                          /* extern */

__attribute__((section(".text.code_0803A8A4.0803C7A0")))
void func_0803C7A0(i32 *arg0, i32 arg1) {
    i32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_080E0D70(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}


