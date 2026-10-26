# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035978/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035978/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035978/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035978/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035978/opencode/func.c" 2
typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[16];
    s32 unk28;
    u8 _pad2C[12];
    s32 unk38;
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk40;
} GenObj;
s32 func_08035978(GenObj *arg0) {
    s32 var_r2;
    s32 var_r2_2;
    u16 temp_r1_3;
    u16 temp_r2;
    u8 temp_r1_2;
    GenObj *temp_r1;
    void *temp_r5;
    void *temp_r6;
    GenObj *temp_r7;

    if ((((void (*)(void *,...))(arg0->unk14->unk28))(arg0) << 0x18) == 0) {
        temp_r1 = arg0->unk38;
        if (temp_r1 != 0) {
            temp_r6 = *((arg0->unk3C * 4) + temp_r1->unk8);
            if (temp_r6 != 0) {
                temp_r1_2 = arg0->unk3D;
                if ((u32) temp_r1_2 < (u32) temp_r6->unk0) {
                    temp_r7 = temp_r6->unk4 + (temp_r1_2 * 8);
                    temp_r5 = temp_r7->unk4;
                    if (temp_r5 != 0) {
                        temp_r1_3 = (*arg0->unk0)->unk144()->unkA;
                        var_r2_2 = ((u32) (temp_r1_3 << 0x1B) >> 0x1B) - 6;
                        if (var_r2_2 < 0) {
                            var_r2_2 += 0x18;
                        }
                        if (temp_r5->unk0 != 0) {
                            temp_r2 = temp_r5->unk4;
                            if (temp_r2 != 0) {
                                if ((u32) arg0->unk3E < (u32) temp_r2) {
                                    if ((s32) (temp_r5->unkB << 0x1B) >= 0) {
                                        var_r2 = 0;
                                        if ((s32) arg0->unk40 >= 0x2EE) {
                                            goto block_15;
                                        }
                                    } else {
                                        goto block_13;
                                    }
                                    goto block_16;
                                }
                                goto block_17;
                            }
                        }
block_13:
                        var_r2 = 0;
                        if (((s32) (arg0->unk3D + 1) < (s32) temp_r6->unk0) && ((u32) ((var_r2_2 * 0x3C) + ((u32) (temp_r1_3 << 0x15) >> 0x1A)) >= (u32) temp_r7->unk8)) {
block_15:
                            var_r2 = 1;
                        }
block_16:
                        return var_r2;
                    }
                }
            }
        }
    }
block_17:
    return 0;
}
