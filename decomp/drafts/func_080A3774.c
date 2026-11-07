s32 func_080A25B0(void ***, s32);                     /* extern */

typedef struct Vt774 { u8 _pad[8]; void (*unk8)(void *, s32); } Vt774;
typedef struct H774 { Vt774 *vt; } H774;
typedef struct GenObj774 {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj774;
s32 *func_080A3774(s32 *arg0, GenObj774 *arg1) {
    register s32 *dst __asm__("r5") = arg0;
    register GenObj774 *src __asm__("r4") = arg1;
    void **slot;
    s32 t;

    func_080A25B0(&slot, src->unk4);
    __asm__ volatile("" : "+r"(dst), "+r"(src));
    if (slot != 0) {
        ((H774 *)slot)->vt->unk8(slot, 3);
    }
    t = src->unk8;
    src->unk8 = 0;
    *dst = t;
    return dst;
}
