// old_agbcc (CC1 lama) tidak bisa mem-parse <stdint.h> modern, jadi tipe dasar
// dideklarasikan lokal (padanan prelude.h/types.h).
typedef unsigned char u8;
typedef short i16;
typedef int i32;

// Keluarga `pop {r2}`: ref mengembalikan nilai 64-bit (long long) lewat r0/r1
// tanpa `return` di sumber, epilog `pop {r2}; bx r2`. Hanya old_agbcc yang
// memproduksi bentuk itu, jadi TU ini dikompilasi dgn CC1 lama (lihat Makefile,
// preseden src/m4a.o). Kedua fungsi identik byte-per-byte.
typedef struct Out {
    i16 unk0;
    i16 unk2;
    i16 unk4;
    i16 unk6;
} Out;

typedef struct In {
    u8 _pad0[0xA];
    i16 unkA;
    u8 _padC[2];
    i16 unkE;
} In;

// DECOMP-MATCHED func_080202A0 (dari code_entities.s; jalur build kedua CC1=OLD_CC1)
__attribute__((section(".text.code_entities.080202A0")))
long long func_080202A0(Out *arg0, In *arg1) {
    i32 a = arg1->unkA;
    i32 b = arg1->unkE;

    arg0->unk0 = a - 7;
    arg0->unk2 = b - 9;
    arg0->unk4 = a + 7;
    arg0->unk6 = b + 5;
}

// DECOMP-MATCHED func_08037470 (dari code_entities_08034CEC.s; jalur build kedua CC1=OLD_CC1)
__attribute__((section(".text.code_entities_08034CEC.08037470")))
long long func_08037470(Out *arg0, In *arg1) {
    i32 a = arg1->unkA;
    i32 b = arg1->unkE;

    arg0->unk0 = a - 7;
    arg0->unk2 = b - 9;
    arg0->unk4 = a + 7;
    arg0->unk6 = b + 5;
}

// DECOMP-MATCHED func_08037ED0 (dari code_entities_08034CEC.s; jalur build kedua CC1=OLD_CC1)
__attribute__((section(".text.code_entities_08034CEC.08037ED0")))
long long func_08037ED0(Out *arg0, In *arg1) {
    i32 a = arg1->unkA;
    i32 b = arg1->unkE;

    arg0->unk0 = a - 7;
    arg0->unk2 = b - 4;
    arg0->unk4 = a + 7;
    arg0->unk6 = b + 5;
}

// DECOMP-MATCHED func_0803834C (dari code_entities_08034CEC.s; jalur build kedua CC1=OLD_CC1)
__attribute__((section(".text.code_entities_08034CEC.0803834C")))
long long func_0803834C(Out *arg0, In *arg1) {
    i32 a = arg1->unkA;
    i32 b = arg1->unkE;

    arg0->unk0 = a - 4;
    arg0->unk2 = b - 4;
    arg0->unk4 = a + 4;
    arg0->unk6 = b + 4;
}
