typedef struct Fb7cV Fb7cV;
typedef struct Fb7cObj Fb7cObj;
struct Fb7cV {
    void *f0;
    void *f4;
    s32 f8;
};
struct Fb7cObj {
    Fb7cV *vtab;
};

void *__builtin_new(s32);                        /* extern */
s32 func_080A6474(void *, s32);                  /* extern */
/* NOTE: actual callee takes 5 args (u8 arg4); the 5th outgoing stack slot
 * aliases fr.s0 below, so the call is declared with 4 (value already in place). */
Fb7cObj *func_080175B4(void *, s32, s32, s32 *);  /* extern */

void ***func_0801FB7C(void ***arg0, s32 arg1, s32 arg2, u8 arg3) {
    struct FR { u8 s0; Fb7cObj *s4; s32 s8; Fb7cObj **sC; Fb7cObj *s10; } fr;
    Fb7cObj *nn;
    u8 *ps0;
    s32 *p8;
    Fb7cObj *chk2;
    Fb7cObj **qq;
    Fb7cObj **tmp;

    fr.s8 = func_080A6474(__builtin_new(0xBC), arg1);
    nn = __builtin_new(0x10CC);
    p8 = &fr.s8;
    ps0 = (u8 *)&fr;
    *ps0 = arg3;
    fr.s4 = func_080175B4(nn, arg1, arg2, p8);
    fr.sC = &fr.s4;
    fr.s10 = fr.s4;
    chk2 = fr.s4;
    qq = &fr.s4;
    /* hide &fr.s4 from CSE so the s4-home store and the reload-check survive */
    __asm__ ("" : "+r" (qq));
    /* exact copy/zero/store triple; "memory" keeps the s4 reload-check */
    __asm__ volatile ("add %0, %1, #0\nmovs %1, #0\nstr %1, [%0]" : "=&l" (tmp) : "r" (qq) : "memory");
    *arg0 = (void **)chk2;
    if (fr.s4 != 0) {
        ((void (*)(void *, s32))(fr.s4->vtab->f8))(fr.s4, 3);
    }
    return arg0;
}
