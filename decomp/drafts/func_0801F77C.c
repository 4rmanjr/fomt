void *__builtin_new(s32);                            /* extern */
s32 func_0800E324(void *);                           /* extern */
void *func_080A4A00(void *, void *, s32, void *, s32, s32, u8); /* extern */
s32 IsFireplaceLighted__C9FarmHouse(void *);         /* extern */

typedef struct F77CChild {
    u8 _pad0[8];
    s32 (*unk8)(void *, s32);
} F77CChild;

typedef struct F77CNode {
    u8 _pad0[0x24];
    F77CChild *unk24;
} F77CNode;

typedef struct F77CState {
    u8 _pad0[0x14];
    s32 (*unk14)(void *);
} F77CState;

typedef struct F77CObj {
    F77CState *unk0;
    u8 _pad4[0x1034];
    u8 *unk1038;
    u8 _pad103C[0x38];
    F77CNode *unk1074;
    F77CNode *unk1078;
} F77CObj;

void func_0801F77C(F77CObj *arg0) {
    register s32 zero __asm__("r6");
    register F77CNode **slot __asm__("r4");
    F77CNode *p;

    slot = &arg0->unk1074;
    zero = 0;
    p = *slot;
    if ((F77CNode *) zero != p && p != 0) {
        p->unk24->unk8(p, 3);
    }
    *slot = (F77CNode *) zero;
    slot = &arg0->unk1078;
    p = *slot;
    if ((F77CNode *) zero != p && p != 0) {
        p->unk24->unk8(p, 3);
    }
    *slot = (F77CNode *) zero;
    switch (arg0->unk0->unk14(arg0)) {
    case 7: {
        void *fresh;

        if ((arg0->unk1038[4] << 0x1F) != 0) {
            fresh = func_080A4A00(__builtin_new(0x40), (u8 *) arg0 + 0xF04, 2, arg0, 2, 0x1F, 0);
            if (fresh != arg0->unk1078 && arg0->unk1078 != 0) {
                arg0->unk1078->unk24->unk8(arg0->unk1078, 3);
            }
            arg0->unk1078 = fresh;
        }
        if (func_0800E324(arg0->unk1038 + 0x10) == 3) {
            fresh = func_080A4A00(__builtin_new(0x40), (u8 *) arg0 + 0xF04, 2, arg0, 2, 0x1F, 0);
            if (fresh != arg0->unk1074 && arg0->unk1074 != 0) {
                arg0->unk1074->unk24->unk8(arg0->unk1074, 3);
            }
            arg0->unk1074 = fresh;
        }
        return;
    }
    case 3: {
        void *fresh;

        if (func_0800E324(arg0->unk1038 + 0x10) == 3) {
            fresh = func_080A4A00(__builtin_new(0x40), (u8 *) arg0 + 0xF04, 2, arg0, 2, 0x1F, 0);
            if (fresh != arg0->unk1074 && arg0->unk1074 != 0) {
                arg0->unk1074->unk24->unk8(arg0->unk1074, 3);
            }
            arg0->unk1074 = fresh;
        }
        break;
    }
    case 0: {
        void *fresh;

        if (arg0->unk1038[3] >> 7) {
            fresh = func_080A4A00(__builtin_new(0x40), (u8 *) arg0 + 0xF04, 2, arg0, 2, 0x1F, 0);
            if (fresh != arg0->unk1074 && arg0->unk1074 != 0) {
                arg0->unk1074->unk24->unk8(arg0->unk1074, 3);
            }
            arg0->unk1074 = fresh;
        }
        break;
    }
    case 2: {
        void *fresh;

        if ((u8) IsFireplaceLighted__C9FarmHouse(arg0->unk1038 + 0x1F4) != 0) {
            fresh = func_080A4A00(__builtin_new(0x40), (u8 *) arg0 + 0xF04, 2, arg0, 2, 0x1F, 0);
            if (fresh != arg0->unk1074 && arg0->unk1074 != 0) {
                arg0->unk1074->unk24->unk8(arg0->unk1074, 3);
            }
            arg0->unk1074 = fresh;
        }
        break;
    }
}
}
