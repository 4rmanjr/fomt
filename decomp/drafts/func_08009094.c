typedef struct GenObj { s32 unk0; s32 *unk4; s32 *unk8; s32 unkC; } GenObj;
s32 CpuFastSet(s32 *, s32 *, s32);
s32 CpuSet(s32 *, s32 *, s32);

void func_08009094(GenObj *arg0, GenObj *arg1) {
    GenObj *p;
    s32 *src;
    s32 *dst;
    s32 ctrl;
    s32 a;
    s32 n;
    s32 sp0;
    s32 sp4;

    for (p = arg0; p != arg1; p++) {
        src = p->unk4;
        if (p->unk0 == 1) {
            sp0 = (s32) src;
            src = &sp0;
        }
        ctrl = p->unkC;
        dst = p->unk8;
        if (ctrl & 0x04000000) {
            n = ctrl & 0xFFFF;
            a = n & 7;
            n -= a;
            if ((n != 0) || (a == 0)) {
                sp4 = (s32) dst;
                CpuFastSet(src, dst, ctrl - a);
                dst = (s32 *) ((s32) dst + n * 4);
                if (!(ctrl & 0x01000000)) {
                    src = (s32 *) ((s32) src + n * 4);
                }
                if (a == 0) continue;
            }
            CpuSet(src, dst, ctrl - n);
        } else {
            CpuSet(src, dst, ctrl);
        }
    }
}
