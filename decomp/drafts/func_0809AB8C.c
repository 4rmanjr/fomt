s32 func_0809AE6C(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 unk4;
    u8 _pad5[3];
    s32 unk8;
} GenObj;
void *func_0809AB8C(GenObj *arg0) {
    s32 neg2 = 2;
    s32 neg3 = 3;
    s32 off;

    arg0->unk0 = 0xFA << 1;
    neg2 = 0 - neg2;
    neg2 &= arg0->unk4;
    neg3 = 0 - neg3;
    neg3 &= neg2;
    arg0->unk4 = neg3;
    arg0->unk8 = 0;
    *((s32 *)((u8 *)arg0 + 0xFC)) = 0;
    off = 0x90 << 1;
    *((s32 *)((u8 *)arg0 + off)) = 0;
    off += 4;
    *((s32 *)((u8 *)arg0 + off)) = 0;
    off += 4;
    *((s32 *)((u8 *)arg0 + off)) = 0;
    off += 4;
    *((s32 *)((u8 *)arg0 + off)) = 0;
    func_0809AE6C(arg0);
    return arg0;
}

/* ATTEMPT-NOTE opencode: konstanta via shift; bit-clear via neg-var+rsbs; offset rantai via off-var. */

/* ATTEMPT-NOTE opencode: urutan+struktur pas (push r4, off akhir, neg via var); sisa dst-and (ands r0,r1 vs ands r1,r0 dst; 2x). t-var di-load duluan merusak alokasi. */
