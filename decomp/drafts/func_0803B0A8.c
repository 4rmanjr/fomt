s32 __builtin_delete(void *);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);

void func_0803B0A8(s32 arg0, s32 arg1) {
    s32 o;
    s32 t2;
    s32 t6;
    s32 r0;
    s32 r5;

    o = *(s32 *)arg0;
    ((s32(*)(s32, u8))(*(s32 **)o)[0x13])(o, *(u8 *)(arg0 + 0xD4));
    t2 = arg0 + 0xE8;
    t2 = t2 + ((*(s32 *)t2 * 0x1C) + 4);
    r0 = arg0 + 0xEC;
    if (r0 != t2) {
        do {
            r0 += 0x1C;
        } while (r0 != t2);
    }
    t2 = arg0 + 4;
    t6 = t2 + ((*(s32 *)t2 * 0x28) + 4);
    r5 = t2 + 4;
    if (r5 != t6) {
        do {
            func_08007C28((void *)(r5 + 0x20), *(s32 *)(r5 + 0x24));
            func_080079E8((void *)(r5 + 0x20), 2);
            r5 += 0x28;
        } while (r5 != t6);
    }
    if (arg1 & 1) {
        __builtin_delete((void *)arg0);
    }
}
