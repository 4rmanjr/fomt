// fragmen 6 byte (0x080D119E..0x080D11A4): badan tanpa prolog yang berakhir
// `b .L080D118C` (ke tengah func_080D1186). Byte pool/cabang relatif diambil
// apa adanya dari ROM; tak ada simbol yg perlu direlokasi.
__attribute__((naked)) void sub_080D119E(void) {
    __asm__ volatile (
        ".syntax unified\n"
        ".byte 0x04, 0xC8, 0x20, 0x33, 0xF3, 0xE7\n"
        ".syntax divided\n"
        : : : "memory");
}
