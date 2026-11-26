typedef struct Body_D78E0 Body_D78E0;
typedef struct Handler_D78E0 {
    u8 _pad0[8];
    void (*unk8)(Body_D78E0 *);
} Handler_D78E0;
struct Body_D78E0 {
    u8 _pad0[8];
    Handler_D78E0 *unk8;
};
typedef struct Root_D78E0 {
    Body_D78E0 *unk0;
} Root_D78E0;

extern Root_D78E0 **gUnk_03000410;

void func_080D78E0(void) {
    Root_D78E0 *a;
    Body_D78E0 *b;

    a = *gUnk_03000410;
    b = a->unk0;
    b->unk8->unk8(b);
}
