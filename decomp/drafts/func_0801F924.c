s32 GetId__C7Product(s32);                          /* extern */
s32 IsDisplayEnabled__C11ShippingBini(s32, s32);    /* extern */
u32 GetAmountShipped__C11ShippingBini(s32, s32);    /* extern */
s32 Ship__11ShippingBinRC7Product(s32, s32);        /* extern */
s32 HasShippedOneOfEachProduct__C11ShippingBin(s32); /* extern */

typedef struct Msg {
    u32 code;
    u32 arg;
} Msg;

typedef s32 (*DispatchFn)(void *, Msg *, s32);

typedef struct GsObj {
    u8 *unk0;
    u8 _pad4[0x1034];
    u8 *unk1038;
} GsObj;

void func_0801F924(GsObj *arg0, s32 arg1) {
    u8 *bin;
    register s32 id __asm__("r5");
    s32 before;
    u32 after;
    u32 flags;

    bin = arg0->unk1038 + 0x54;
    id = GetId__C7Product(arg1);
    if ((u8) IsDisplayEnabled__C11ShippingBini((s32) bin, id) != 0) {
        before = GetAmountShipped__C11ShippingBini((s32) bin, id);
    } else {
        before = 0;
    }
    Ship__11ShippingBinRC7Product((s32) bin, arg1);
    after = GetAmountShipped__C11ShippingBini((s32) bin, id);
    if ((u32) before < after) {
        switch (after) {
        case 10000: {
            void *p = arg0->unk0 + 0x140;
            Msg m;
            Msg *pm = &m;

            pm->code = 0x33C;
            pm->arg = id;
            ((DispatchFn) *(void **) p)(arg0, pm, 1);
            break;
        }
        case 100000: {
            void *p = arg0->unk0 + 0x140;
            Msg m;
            Msg *pm = &m;

            pm->code = 0x33D;
            pm->arg = id;
            ((DispatchFn) *(void **) p)(arg0, pm, 1);
            break;
        }
        case 1000000: {
            void *p = arg0->unk0 + 0x140;
            Msg m;
            Msg *pm = &m;

            pm->code = 0x33E;
            pm->arg = id;
            ((DispatchFn) *(void **) p)(arg0, pm, 1);
            break;
        }
        case 10000000: {
            void *p = arg0->unk0 + 0x140;
            Msg m;
            Msg *pm = &m;

            pm->code = 0x33F;
            pm->arg = id;
            ((DispatchFn) *(void **) p)(arg0, pm, 1);
            break;
        }
        case 100000000: {
            void *p = arg0->unk0 + 0x140;
            Msg m;
            Msg *pm = &m;

            pm->code = 0x340;
            pm->arg = id;
            ((DispatchFn) *(void **) p)(arg0, pm, 1);
            break;
        }
        case 1000000000: {
            void *p = arg0->unk0 + 0x140;
            Msg m;
            Msg *pm = &m;

            pm->code = 0x341;
            pm->arg = id;
            ((DispatchFn) *(void **) p)(arg0, pm, 1);
            break;
        }
        }
    }
    flags = 3 & *(u8 *) (arg0->unk1038 + 0x2192);
    if (flags == 0 && (u8) HasShippedOneOfEachProduct__C11ShippingBin((s32) bin) != 0) {
        void *p = arg0->unk0 + 0x140;
        Msg m;
        Msg *pm = &m;

        pm->code = 0x342;
        pm->arg = flags;
        ((DispatchFn) *(void **) p)(arg0, pm, 1);
    }
}
