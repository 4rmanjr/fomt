void *__builtin_new(s32);                           /* extern */

typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    s32 unk8;
    u8 unkC;
    u16 unkE;
} GenObj;
void **func_08009300(void **arg0, s32 arg1) {
    GenObj *temp_r0;

    temp_r0 = __builtin_new(0x10);
    temp_r0->unk0 = arg1;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unkE = 0;
    *arg0 = temp_r0;
    return arg0;
}

/* ATTEMPT-NOTE opencode: member campuran s32/u16/s32/u8/u16 sesuai str/strh/strb. */
