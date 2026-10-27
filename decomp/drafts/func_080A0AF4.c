s32 func_080A0AF4(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    default:
        return arg0 + 0x48;
    case 1:
        return arg0 + 0x50;
    case 2:
        return arg0 + 0x58;
    }
}

/* ATTEMPT-NOTE hermes2: switch dgn case 0 eksplisit gabung default (sama A0AD8). */
