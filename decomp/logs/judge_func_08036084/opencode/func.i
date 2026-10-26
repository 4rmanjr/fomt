# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036084/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036084/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036084/opencode/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036084/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036084/opencode/func.c" 2
s32 func_08034C64(void *, s32);
s32 func_08035908(void *, s32);
s32 func_08035940(void *, s32);
s32 func_08035AE0(void *);
u32 func_0809EAD8();
s32 func_080A0384(s32);
s32 func_080A0490(s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[44];
    s32 unk34;
    u8 _pad38[8500];
    struct GenObj *unk216C;
} GenObj;
void func_08036084(GenObj *arg0) {
    s32 temp_r6;
    s32 var_r7;
    s32 var_r8;
    GenObj *temp_r5;

    var_r7 = 0x813;
    var_r8 = 0x817;
    temp_r5 = arg0->unk34;
    temp_r6 = (GenObj *)((u8 *)temp_r5 + 0x1CD4);
    if ((func_080A0490(temp_r6) == 0xC) && (arg0->unk4 == 0x1D)) {
        if (((func_08035AE0(arg0) << 0x18) != 0) || (((u32) (temp_r5->unk216C << 0x19) >> 0x1E) == 1)) {
            var_r7 = 0x827;
        } else if ((func_080A0384(temp_r6) != 0) && (func_0809EAD8() <= 0x3BU) && ((func_08034C64(temp_r5, (*arg0->unk0)->unk144() + 0xA) << 0x18) != 0)) {
            var_r7 = 0x82F;
            var_r8 = 0x833;
        }
    }
    func_08035908(arg0, var_r7);
    func_08035940(arg0, var_r8);
}
