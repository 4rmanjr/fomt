void func_080D4130(u8 *arg0) {
    *(u8 *)(arg0 + 0) = *(u8 *)(arg0 + 0) & ~3;
    *(u16 *)(arg0 + 2) = (*(u16 *)(arg0 + 2) & 0xFFFFFC00) | 0x234;
    *(u8 *)(arg0 + 3) = *(u8 *)(arg0 + 3) & 3;
    *(u16 *)(arg0 + 4) = *(u16 *)(arg0 + 4) & 0xFFFFFC00;
    *(u8 *)(arg0 + 5) = *(u8 *)(arg0 + 5) & 3;
    *(u16 *)(arg0 + 6) = *(u16 *)(arg0 + 6) & 0xFFFFFC00;
}
