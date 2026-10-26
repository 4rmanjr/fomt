# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB73C/manual/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB73C/manual/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB73C/manual/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB73C/manual/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB73C/manual/func.c" 2
s32 __builtin_new(s32);
void *func_0808AB38(s32, s32 *, s32);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} UnkStruct;

typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;

typedef struct {
    Vtbl *vtbl;
} Obj;

typedef struct {
    Obj * volatile sp0;
    s32 sp4;
    Obj **sp8;
    Obj * volatile spC;
} Frame;

Obj **func_080DB73C(Obj **arg0, UnkStruct *arg1) {
    Frame f;
    Obj *p;
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    f.sp4 = temp_r0;
    temp_r0_2 = func_0808AB38(__builtin_new(0xC), &f.sp4, arg1->unk8);
    f.sp0 = temp_r0_2;
    f.sp8 = (Obj **) &f.sp0;
    f.spC = temp_r0_2;
    *f.sp8 = 0;
    *arg0 = temp_r0_2;
    p = f.sp0;
    if (p != 0) {
        p->vtbl->unk8(p, 3);
    }
    return arg0;
}
