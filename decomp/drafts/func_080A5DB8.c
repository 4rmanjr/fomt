void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080A5DB8(GenObj *arg0, s32 arg1, s32 arg2) {
    GenObj *t;
    s32 v;
    s32 off;
    u8 *b;
    s32 *p;

    t = GetMapData(arg0->unk4);
    v = t->unk4;
    off = arg2 * 4;
    b = (u8 *)arg0 + 0x1C;
    p = (s32 *)(b + off);
    Unpack(v, *p);
    if (arg1 >= 0) {
        switch (arg1) {
        case 0:
        case 1:
        case 2:
            Unpack(t->unk4, *p);
            break;
        case 3:
            Unpack(t->unk8, *p);
            break;
        }
    }
}

/* ATTEMPT-NOTE worker-a5db MATCH-candidate: hoist v=t->unk4 (ldr sblm lsl); u8 *b + s32 off (r4=arg0/r5=arg2 ✓); switch 0/1/2+3 (ble/beq/b ✓). */
