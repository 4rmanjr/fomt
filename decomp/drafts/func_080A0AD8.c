s32 func_080A0AD8(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    default:
        return arg0 + 0x30;
    case 1:
        return arg0 + 0x38;
    case 2:
        return arg0 + 0x40;
    }
}

/* ATTEMPT-NOTE hermes2: switch dgn case 0 eksplisit gabung default. */
