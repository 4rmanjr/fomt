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
