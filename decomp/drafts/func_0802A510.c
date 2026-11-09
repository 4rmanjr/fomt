u16 GetIconId__C4Tool(s8 *);
s32 GetTool__C9ToolStack(s32);
s8 func_0800E550(s32, s32);
s32 func_0805E850(void *, s32, u16);

typedef struct Vt10 { u8 _pad[0x64]; void *unk64; } Vt10;
typedef struct H10 { Vt10 *vt; } H10;
typedef struct S88 {
    u8 b0;
    u8 b1;
    u8 _pad2[2];
    s32 w4;
    s32 w8;
    u8 _padC[8];
    s32 w14;
} S88;
typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[12];
    s32 unk10;
    u8 _pad14[36];
    s32 unk38;
    u8 _pad3C[76];
} GenObj;
void func_0802A510(GenObj *arg0) {
    register GenObj *a0 __asm__("r3") = arg0;
    register u8 *b __asm__("r0");
    s8 sp0;
    s32 temp38;
    u16 icon;
    GenObj *temp_r5;
    u8 *t0;
    void *obj;
    s32 rv;
    s32 v0;
    s32 v1;
    s32 c1;
    s32 c2;
    S88 *bs;

    b = (u8 *)arg0 + 0x88;
    __asm__ volatile("" : "+r"(b));
    v0 = 0;
    v1 = 1;
    bs = (S88 *)b;
    bs->b0 = v1;
    bs->b1 = v0;
    c1 = 0xFFF80000;
    c2 = 0x110000;
    bs->w4 = c1;
    bs->w8 = v0;
    bs->w14 = c2;
    temp_r5 = a0->unk10;
    if (temp_r5 != 0) {
        temp38 = a0->unk38;
        sp0 = func_0800E550(temp38, GetTool__C9ToolStack(temp38 + 0x5C));
        icon = GetIconId__C4Tool(&sp0);
        obj = *(void **)temp_r5->unk0;
        rv = ((s32 (*)(void *))(((H10 *)obj)->vt->unk64))(obj);
        func_0805E850((void *)((u8 *)temp_r5 + 0xB4), rv, icon);
        t0 = (u8 *)temp_r5 + 0xC8;
        *t0 = v1;
        t0 += 2;
        *t0 = v0;
        t0 += 1;
        *t0 = v1;
        __asm__ volatile("" : "+r"(t0));
    }
}
