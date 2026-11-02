#include "prelude.h"
// DECOMP-MATCHED func_08037F74 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_08037F74 {
    u8 _pad0[84];
    u8 unk54;
} GenObj__func_08037F74;

__attribute__((section(".text.code_entities_08034CEC.08037F74")))
void func_08037F74(GenObj__func_08037F74 *arg0) {
    arg0->unk54 = 0xA;
}
// DECOMP-MATCHED func_08038E90 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_08038E90 {
    u8 _pad0[12];
    i32 unkC;
    u8 _pad10[60];
    i32 unk4C;
    u8 unk50;
} GenObj__func_08038E90;

__attribute__((section(".text.code_entities_08034CEC.08038E90")))
void func_08038E90(GenObj__func_08038E90 *arg0) {
    GenObj__func_08038E90 *temp_r0;

    temp_r0 = (GenObj__func_08038E90 *)arg0->unkC;
    temp_r0->unk4C = 0x01200000;
    temp_r0->unk50 = 1;
}
