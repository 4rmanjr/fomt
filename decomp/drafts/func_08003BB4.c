s32 func_080087C8(s32);                             /* extern */
void *func_08008918(s32);                           /* extern */
void *func_08008940(s32);                           /* extern */
s32 func_08009300(s32 *, void *);                   /* extern */
s32 func_08009378(s32 *, s32, s32, s32);            /* extern */
s32 func_080094B8(s32 *, s32);                      /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct Obj3BB4 {
    u8 _pad0[0x50];
    u16 unk50;
} Obj3BB4;

typedef struct Vt3BB4 {
    u8 _pad0[0x10];
    void (*unk10)(void *, void *);
} Vt3BB4;

typedef struct Obj8_3BB4 {
    u8 _pad0[8];
    Vt3BB4 *unk8;
} Obj8_3BB4;

typedef struct St3BB4 {
    s16 unk0;
    s16 _pad2;
    s32 unk4;
    s32 unk8;
    s32 *unkC;
    s32 unk10;
} St3BB4;

void func_08003BB4(s32 arg0) {
    St3BB4 st;
    register s32 *p __asm__("r4");
    Obj3BB4 *temp_r0;
    void *temp_r1;
    Obj8_3BB4 *temp_r0_2;
    void (*fn)(void *, void *);

    temp_r0 = func_08008918(arg0);
    st.unk0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = func_08008918(arg0);
    p = &st.unk4;
    st.unk4 = 0;
    p[1] = 0;
    st.unkC = &vtable_unk_080E5B80;
    func_08009300(&st.unk10, temp_r1);
    func_08009378((s32 *) ((u8 *) &st + 0x10), 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    fn = temp_r0_2->unk8->unk10;
    fn(temp_r0_2, p);
    while (((0 - p[0]) | p[0]) < 0) {
        func_080087C8(arg0);
    }
    func_080094B8(p, 2);
}
