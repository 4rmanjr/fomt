s32 func_08094F6C(void ***, s32);                     /* extern */

typedef struct Vt9558 { u8 _pad[8]; void (*unk8)(void *, s32); } Vt9558;
typedef struct H9558 { Vt9558 *vt; } H9558;
typedef struct GenObj9558 {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj9558;
s32 *func_0809A558(s32 *arg0, GenObj9558 *arg1) {
    register s32 *dst __asm__("r5") = arg0;
    register GenObj9558 *src __asm__("r4") = arg1;
    void **slot;
    s32 t;

    func_08094F6C(&slot, src->unk4);
    __asm__ volatile("" : "+r"(dst), "+r"(src));
    if (slot != 0) {
        ((H9558 *)slot)->vt->unk8(slot, 3);
    }
    t = src->unk8;
    src->unk8 = 0;
    *dst = t;
    return dst;
}
