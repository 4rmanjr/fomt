#include "common.h"
void func_0800082C(void ***arg0) {
    void **sp0;
    void **sp4;
    void **sp8;
    void ***spC;
    void **sp10;
    void ***sp14;
    void **sp18;
    void **temp_r0;
    void **temp_r1;
    void **temp_r1_2;
    void **temp_r1_3;

    if (*arg0 != 0) {
loop_2:
        (**arg0)->unkC(&sp4);
        spC = &sp4;
        sp10 = sp4;
        sp4 = 0;
        sp0 = sp4;
        if (sp4 != 0) {
            (*sp4)->unk8(sp4, 3);
        }
        temp_r1 = *arg0;
        if ((temp_r1 != 0) && (temp_r1 != 0)) {
            (*temp_r1)->unk8(temp_r1, 3);
        }
        *arg0 = 0;
        if (sp0 != 0) {
            (*sp0)->unkC(&sp8, sp0);
            sp14 = &sp8;
            sp18 = sp8;
            sp8 = 0;
            sp4 = sp8;
            if (sp8 != 0) {
                (*sp8)->unk8(sp8, 3);
            }
            temp_r0 = sp4;
            sp4 = 0;
            temp_r1_2 = *arg0;
            if ((temp_r0 != temp_r1_2) && (temp_r1_2 != 0)) {
                (*temp_r1_2)->unk8(temp_r1_2, 3);
            }
            *arg0 = temp_r0;
            if (sp4 != 0) {
                (*sp4)->unk8(sp4, 3);
            }
            if (sp0 != 0) {
                (*sp0)->unk8(sp0, 3);
            }
            if (*arg0 != 0) {
                goto loop_2;
            }
        }
    }
    temp_r1_3 = *arg0;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
}

