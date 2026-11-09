s32 func_0805E850(void *, s32, s32);                  /* extern */

typedef struct VtA4 { u8 _pad[0x64]; void *unk64; } VtA4;
typedef struct HA4 { VtA4 *vt; } HA4;
typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[12];
    s32 unk10;
    u8 _pad14[116];
    u8 unk88;
    u8 _pad89[0x3F];
    u8 unkC8;
} GenObj;
void func_0802A4C0(GenObj *arg0, s32 arg1, s32 arg2) {
    register GenObj *a0 __asm__("r3") = arg0;
    register s32 a1 __asm__("r5") = arg1;
    register u8 *t0 __asm__("r0");
    GenObj *temp_r4;
    u8 *b;
    void *obj;
    s32 rv;

    b = (u8 *)a0 + 0x88;
    *b = 1;
    if (arg2 != 1) {
        if (arg2 != 0)
            goto skip;
    }
    b[1] = arg2;
skip:
    temp_r4 = a0->unk10;
    if (temp_r4 != 0) {
        s32 v1;
        s32 v0;
        obj = *(void **)temp_r4->unk0;
        rv = ((s32 (*)(void *))(((HA4 *)obj)->vt->unk64))(obj);
        func_0805E850((void *)((u8 *)temp_r4 + 0xB4), rv, a1);
        t0 = (u8 *)temp_r4 + 0xC8;
        v0 = 0;
        v1 = 1;
        *t0 = v1;
        t0 += 2;
        *t0 = v0;
        t0 += 1;
        *t0 = v1;
        __asm__ volatile("" : "+r"(t0));
    }
}
