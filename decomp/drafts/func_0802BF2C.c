s32 func_08032560(void *, void ***, s32, s32 *, s32, s32);
s32 func_080A4A00(void *, s32, s32, void **, s32, s32);
extern s32 gUnk_080F1224;
extern s32 vtable_unk_080E6644;

typedef struct Vt64 { u8 _pad[0x64]; void *unk64; } Vt64;
typedef struct H64 { Vt64 *vt; } H64;
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[0xC4];
    u16 unkCC;
} GenObj;
void *func_0802BF2C(GenObj *arg0, void ***arg1) {
    register GenObj *a8 __asm__("r8");
    register void ***a4 __asm__("r4");
    register s32 c1 __asm__("r5");
    register s32 c0 __asm__("r6");
    struct { s32 w8; s32 wC; u8 b10; } st;
    s32 temp_r1;
    void *obj;

    a8 = arg0;
    a4 = arg1;
    c1 = 1;
    c0 = 0;
    st.w8 = c0;
    st.wC = c0;
    st.b10 = c1;
    func_08032560(a8, a4, 6, &gUnk_080F1224, 3, 1);
    a8->unk4 = &vtable_unk_080E6644;
    obj = **a4;
    temp_r1 = ((s32 (*)(void *))(((H64 *)obj)->vt->unk64))(obj);
    *(u8 *)&st.w8 = c0;
    func_080A4A00((u8 *)a8 + 0x8C, temp_r1, 0, *a4, 2, 1);
    a8->unkCC = 0xFFFF;
    return a8;
}
