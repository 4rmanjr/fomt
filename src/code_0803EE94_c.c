#include "prelude.h"
// DECOMP-MATCHED func_08050D0C (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 __builtin_delete(i32 *);                          /* extern */
i32 func_0804F69C(i32, i32);                          /* extern */

__attribute__((section(".text.code_0803EE94.08050D0C")))
void func_08050D0C(i32 *arg0, i32 arg1) {
    i32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_0804F69C(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}


// DECOMP-MATCHED func_08050D5C (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 func_0805039C();

__attribute__((section(".text.code_0803EE94.08050D5C")))
void func_08050D5C(i32 *arg0) {
    func_0805039C(*arg0);
}
