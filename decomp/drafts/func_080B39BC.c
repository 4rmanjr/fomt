extern s32 gUnk_0810788A;

u16 func_080B39BC(s32 arg0, s32 arg1) {
    u8 *base = (u8 *)&gUnk_0810788A;
    s32 idx = arg1 * 4;
    s32 addr = arg0 + 0x870;
    s32 t;

    addr += idx;
    t = *(s32 *)addr;
    return *(u16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE hermes6: pola D9D8 (idx dulu, akumulasi addr); offset
   inline 0x870 agar movs#0x87+lsls#4 spt ref. */
