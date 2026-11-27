void *__builtin_delete(void *);

void func_080D6B00(u8 *arg0, s32 arg1) {
    u8 *end;
    u8 *p;

    end = (u8 *)((*(u32 *)(arg0 + 0x24) << 1) + (u32)arg0 + 0x28);
    for (p = arg0 + 0x28; p != end; p += 2) {
    }
    end = arg0 + ((*(u32 *)arg0 << 2) + 4);
    for (p = arg0 + 4; p != end; p += 4) {
    }
    if ((1 & arg1) != 0) {
        __builtin_delete(arg0);
    }
}
