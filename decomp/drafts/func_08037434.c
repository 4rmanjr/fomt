s32 vfunc_10__7AEntity(void *);                       /* extern */

typedef struct S3E { u8 _pb[2]; u16 unk3E; } S3E;
typedef union U3C { s32 unk3C; S3E s; } U3C;
typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[36];
    U3C u;
    u8 unk40;
} GenObj;
void func_08037434(GenObj *arg0) {
    if (arg0->unk40 == 0) {
        ((void (*)(void *))(arg0->unk14->u.unk3C))(arg0);
    }
    arg0->u.s.unk3E = 0;
    vfunc_10__7AEntity(arg0);
}

/* ATTEMPT-NOTE opencode: named union U3C/S3E (agbcc29 tolak anon); unk40 u8@0x40, unk3E u16@0x3E, unk3C funcptr@0x3C. */
