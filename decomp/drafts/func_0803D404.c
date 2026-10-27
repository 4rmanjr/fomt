void func_0803D404(void **arg0, s32 arg1) {
    void *temp_r2;
    s32 off1 = 0x2F1;
    s32 off2 = 0x2F2;

    temp_r2 = *arg0;
    if ((*(u8 *)((u8 *)temp_r2 + off1) == 0) || (arg1 != *(u16 *)((u8 *)temp_r2 + off2))) {
        *(u8 *)((u8 *)temp_r2 + off1) = 1;
        *(u16 *)((u8 *)temp_r2 + 0x2F2) = arg1;
        *((u8 *)temp_r2 + (0xCD << 2)) = 1;
    }
}

/* ATTEMPT-NOTE opencode: off2 literal di store agar ldr-pool 2x (reuse var hanya 1x load); arg1 s32 (tanpa zero-extend). */
