s32 GetLocation__C3Npc(u16 *, void *);                /* extern */

typedef struct GenObj {
    u8 _pad0[21];
    u8 unk15;
} GenObj;
void func_0809EC48(GenObj *arg0) {
    struct { u16 v; u8 _f[6]; } loc;
    s32 a;
    s32 b;
    register s32 v asm("r0");
    register s32 w asm("r1");

    GetLocation__C3Npc(&loc.v, arg0);
    a = (s32)(((u32)loc.v << 0x16) >> 0x16);
    b = a;
    if (a == 0x11) {
        goto set;
    }
    if (a > 0x11) {
        goto big;
    }
    if (a == 7) {
        goto set;
    }
    goto clear;
big:
    if (b == 0x1D) {
        goto set;
    }
    if (b == 0x25) {
        goto set;
    }
clear:
    w = arg0->unk15;
    v = (0 - 2) & w;
    goto store;
set:
    v = arg0->unk15 | 1;
store:
    arg0->unk15 = v;
}

/* ATTEMPT-NOTE worker-ec48: MATCH-candidate; struct 8B paksa sub sp,#8; mask unsigned (lsr); a/b pisah utk copy adds r1,r0; v/w dipin r0/r1 utk regalloc clear/set. */
