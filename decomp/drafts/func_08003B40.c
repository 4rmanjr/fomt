s32 func_080087C8(s32);                               /* extern */
void *func_08008918();                            /* extern */
void *func_08008940(s32);                            /* extern */
s32 func_08009300(s32 *, void *);                       /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);                /* extern */
s32 func_080094B8(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct {
    u8 (*unk8)[8];
} ObjInnerB40;
typedef struct {
    s32 unk0;
    s32 unk4;
    ObjInnerB40 *unk8;
    s32 unkC;
    void (*unk10)(void *, void *);
} VtblB40b;
typedef struct ObjB40 {
    u8 _pad0[8];
    VtblB40b *unk8;
} ObjB40;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    VtblB40b *unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[60];
    s32 unk50;
} GenObj;
typedef struct {
    u16 f0;
    u8 _pad2[2];
    ObjB40 *unk0;
    s32 unk4;
    s32 *unk8;
    s32 tail;
} Sp4;
void func_08003B40(s32 arg0) {
    Sp4 sp4;
    GenObj *temp_r0;
    ObjB40 *temp_r0_2;
    void *temp_r1;

    temp_r0 = func_08008918();
    sp4.f0 = 0x3F;
    *(u16 *)((u8 *)temp_r0 + 0x50) = 0x3F;
    temp_r1 = func_08008918(arg0);
    sp4.unk0 = 0;
    sp4.unk4 = 0;
    sp4.unk8 = &vtable_unk_080E5B80;
    func_08009300(&sp4.tail, temp_r1);
    func_0800934C(&sp4.tail, 0x889, 1, 1);
    temp_r0_2 = (ObjB40 *)func_08008940(arg0);
    ((void (*)(void *, ...))temp_r0_2->unk8->unk10)(temp_r0_2, &sp4.unk0);
    goto loop_check;
loop_2:
    func_080087C8(arg0);
loop_check:
    if ((s32) ((0 - (s32)sp4.unk0) | (s32)sp4.unk0) < 0) {
        goto loop_2;
    }
    func_080094B8(&sp4.unk0, 2);
}
