void IntrWait(s32, s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Wrapper IntrWait(1, flags). */
void func_08000568(s32 arg0) {
    IntrWait(1, (u16)arg0);
}
