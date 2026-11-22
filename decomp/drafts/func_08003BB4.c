s32 func_080087C8(s32);                             /* extern */
s32 func_08008918(s32);                             /* extern */
s32 func_08008940(s32);                             /* extern */
s32 func_08009300(void *, ...);                     /* extern */
void func_08009378(void *, s16, s32, s32);          /* extern */
typedef struct GenObj__func_080098AC GenObj__func_080098AC;
void func_080094B8(GenObj__func_080098AC *, void *); /* extern */
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
    register s32 a5 __asm__("r5");
    s32 *buf;
    register s32 zero __asm__("r0");
    register s32 c889 __asm__("r1");
    Obj3BB4 *temp_r0;
    void *temp_r1;
    Obj8_3BB4 *temp_r0_2;
    void (*fn)(void *, void *);

    a5 = arg0;
    temp_r0 = (Obj3BB4 *) func_08008918(arg0);
    st.unk0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = (void *) func_08008918(a5);
    p = &st.unk4;
    zero = 0;
    st.unk4 = zero;
    p[1] = zero;
    st.unkC = &vtable_unk_080E5B80;
    __asm__ volatile ("add %0, sp, #0x10" : "=r" (buf));
    func_08009300(buf, temp_r1);
    c889 = 0x889;
    __asm__ volatile ("add %0, sp, #0x10" : "=r" (buf));
    func_08009378(buf, (s16) c889, 1, 1);
    temp_r0_2 = (Obj8_3BB4 *) func_08008940(a5);
    fn = temp_r0_2->unk8->unk10;
    fn(temp_r0_2, p);
    while (((0 - st.unk4) | st.unk4) < 0) {
        func_080087C8(a5);
    }
    func_080094B8((GenObj__func_080098AC *) p, (void *) 2);
}
