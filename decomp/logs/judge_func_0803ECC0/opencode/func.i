# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803ECC0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803ECC0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803ECC0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803ECC0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803ECC0/opencode/func.c" 2
u32 GetUpgradeLevel__C9FarmHouse(void *);
s32 func_0803D52C(s32 *, s32);
s32 func_0803D644(u8, u8);
u32 func_0809EB68(void *);
s32 func_0809EB70(void *);
s32 func_0809EB8C(void *);

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[1];
    s32 unk8;
} GenObj;
s32 func_0803ECC0(GenObj *arg0) {
GenObj sp0;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r0_2;
    u8 temp_r6;
    void *temp_r4;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r6 = sp0.unk3;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 5;
    }
    temp_r7 = arg0->unk8;
    temp_r4 = arg0 + 0x1F64;
    if ((func_0809EB68(temp_r4) != 0) && ((func_0809EB70(temp_r4) << 0x18) == 0) && ((func_0809EB8C(temp_r4) << 0x18) == 0) && ((u32) (temp_r7 - 3) > 1U)) {
        temp_r0 = func_0809EB68(temp_r4);
        switch (temp_r0) {
        case 1:
            temp_r0_2 = GetUpgradeLevel__C9FarmHouse(arg0 + 0x1F4);
            if (temp_r0_2 != 1) {
                if (temp_r0_2 >= 1U) {
                    if (temp_r0_2 != 2) {
                        goto block_21;
                    }
                    return 0xD;
                }
                return 6;
            }
            return 7;
        case 2:
            return 8;
        case 3:
            return 9;
        case 4:
            return 0xE;
        case 5:
        case 6:
        case 7:
            return 0xA;
        case 8:
        case 9:
        case 10:
            return 0xB;
        case 11:
        case 12:
        case 13:
            return 0xC;
        }
    } else {
    default:
block_21:
        if ((s32) temp_r6 <= 5) {
            if ((s32) temp_r6 < 4) {
                if (temp_r6 != 0) {
                    goto block_26;
                }
                return 4;
            }
            return 2;
        }
        if (temp_r6 != 6) {
block_26:
            return 1;
        }
        return 3;
    }
}
