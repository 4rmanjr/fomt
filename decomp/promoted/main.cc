
// DECOMP-MATCHED func_08000240 (dari main.s; cek manusia sebelum ke src/)
s32 func_08000528(s32);
s32 SoftReset(s32);

/* ATTEMPT-NOTE hermes: tulis manual dr asm (draf m2c rusak: void*->unk).
   Init hardware: reg 04000000, poll KEYCNT, matikan 4 channel DMA (pola
   volatile RMW + dead-load tiap grup), lalu SoftReset + loop selamanya. */
void func_08000240(void) {
    volatile u8 *base;
    volatile u16 *r;
    u16 v;

    func_08000528(0xFFFF);
    *(volatile u16 *)0x04000000 = 0x80;
    *(volatile u8 *)0x04000084 = 0;
    while (0xF & ~*(volatile u16 *)0x04000130) {
    }
    base = (volatile u8 *)0x040000B0;
    r = (volatile u16 *)(base + 0xA);
    v = *r;
    *r = 0xC5FF & v;
    *r = 0x7FFF & *r;
    v = *r;
    base += 0xC;
    r = (volatile u16 *)(base + 0xA);
    v = *r;
    *r = 0xC5FF & v;
    *r = 0x7FFF & *r;
    v = *r;
    base += 0xC;
    r = (volatile u16 *)(base + 0xA);
    v = *r;
    *r = 0xC5FF & v;
    *r = 0x7FFF & *r;
    v = *r;
    {
        volatile u8 *b2 = (volatile u8 *)0x040000D4;
        volatile u16 *r2 = (volatile u16 *)(b2 + 0xA);
        v = *r2;
        *r2 = 0xC5FF & v;
        *r2 = 0x7FFF & *r2;
        v = *r2;
    }
    (void)v;
    SoftReset(0xFF);
    while (1) {
    }
}

// DECOMP-MATCHED AgbMain (dari main.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                               /* extern */
s32 func_080002E0(s32);                             /* extern */
s32 func_08000358(s32 *);                               /* extern */
void func_080004C4(void);                                  /* extern */
u16 func_0800050C(u16);                               /* extern */
s32 func_08000640(s32);                               /* extern */
s32 func_0800082C(volatile s32 *);                    /* extern */
s32 func_080036F8();                                /* extern */
s32 func_08008980(s32 *);                               /* extern */
s32 func_08008A68(s32 *, s32);                          /* extern */
s32 func_08008AFC();                                  /* extern */
s32 func_080D100C(s32, s32);                          /* extern */
extern s32 func_03000490;
extern void func_08000240(void);

typedef struct Vtbl {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct Obj {
    Vtbl *unk0;
} Obj;

void AgbMain(void) {
    struct {
        s32 sp0;
        volatile s32 sp4;
        volatile Obj *sp8;
        s32 spC;
        s32 sp10;
        volatile Obj **sp14;
        volatile s32 sp18;
    } fr;
    s32 temp_r0;

    *(s16 *)0x04000204 = 0x4014;
    func_080004C4();
    func_080D100C(0xD, (s32)&func_03000490);
    func_0800050C(0x2000);
    func_08000640((s32)&fr.spC);
    if ((func_080002E0((s32)&fr.spC) << 0x18) == 0) {
        func_08000358(&fr.spC);
    }
    func_080D100C(0xC, (s32)&func_08000240);
    *(u16 *)0x04000132 = 0xC00F;
    func_0800050C(0x1000);
    func_08008AFC();
    func_08008980(&fr.sp0);
    __builtin_new(8);
    temp_r0 = func_080036F8();
    fr.sp14 = &fr.sp8;
    fr.sp18 = temp_r0;
    fr.sp8 = 0;
    fr.sp4 = temp_r0;
    func_0800082C(&fr.sp4);
    if (fr.sp8 != 0) {
        fr.sp8->unk0->unk8((void *)fr.sp8, 3);
    }
    func_08008A68(&fr.sp0, 2);
}
