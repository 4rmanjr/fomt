/* Ref mengemas konstanta 5 lewat literal pool lalu memotongnya ke 8 bit
   (`ldr r1,=5; lsls #0x18; lsrs #0x18`) sebelum meneruskannya ke
   func_08008B54 sebagai argumen u8. Literal `5` selalu dilipat agbcc jadi
   `movs r1,#5`, jadi konstantanya diambil dari simbol absolut linker
   `_M4aNumMusicPlayers` (fomt.lds = 5) persis seperti func_08008B24 di modul
   yang sama; cast u8 memaksa potongan 8 bit yang terlihat di ref. */
__asm__(".equ _M4aNumMusicPlayers, 5");
extern char _M4aNumMusicPlayers[];
#define NUM_MUSIC_PLAYERS ((u8)_M4aNumMusicPlayers)

/* Tanda tangan mengikuti konvensi `src/hardware_migrated.cc` (callee itu sudah
   dimigrasi dengan tipe balik int, bukan pointer); nilai baliknya dibuang ref
   (`bl` lalu `ldr r0,[sp]`), jadi pointer vs s32 tidak mengubah byte. */
s32 func_08008B54(s32 *, u8);

s32 func_08008D10(void) {
    s32 sp0;

    func_08008B54(&sp0, NUM_MUSIC_PLAYERS);
    return sp0;
}
