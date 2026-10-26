# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803F8DC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803F8DC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803F8DC/opencode/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803F8DC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803F8DC/opencode/func.c" 2
s32 AddAffection__6Animali(void *, s32);
void *AddAmountOfArticle__8RucksackUiUi(void *, s32, s32);
void *AddAmountOfFood__8RucksackUiUi(s32, s32, s32);
void *AddAmountOfTool__8RucksackUiUi(void *, s32, s32);
s32 AddAmountOf__5ShelfUiUi(s32, s32, s32);
s32 AddAmountOf__9ToolChestUiUi(void *, s32, s32);
s32 AddAmount__9ToolStackUi(void *, s32);
s32 AddCarpet__9FarmHouse(void *);
s32 AddClock__9FarmHouse(void *);
s32 AddFridge__9FarmHouse(void *);
s32 AddFriendship__3Npci(s32, s32);
s32 AddKitchenFryingPan__9FarmHouse(void *);
s32 AddKitchenKnife__9FarmHouse(void *);
s32 AddKitchenMixer__9FarmHouse(void *);
s32 AddKitchenOven__9FarmHouse(void *);
s32 AddKitchenPot__9FarmHouse(void *);
s32 AddKitchenSeasoningSet__9FarmHouse(void *);
s32 AddKitchenWhisk__9FarmHouse(void *);
s32 AddKitchen__9FarmHouse(void *);
s32 AddLargeBed__9FarmHouse(void *);
s32 AddLove__12Bachelorettei(s32, s32);
s32 AddMirror__9FarmHouse(void *);
s32 AddShelf__9FarmHouse(void *);
s32 AttemptBirth__4BarnUi(void *, s32);
s32 AttemptHatch__4CoopUi(void *, s32);
s32 CanBeDiscarded__C7Article();
u32 CountChickens__C4Coop(void *);
u32 CountCows__C4Barn(void *);
u32 CountSheeps__C4Barn(void *);
void *GetAffection__C6Animal();
void *GetAge__C6Animal();
void *GetAmountShipped__C11ShippingBini(void *, s32);
u32 GetAmount__C9ToolStack(void *);
void *GetArticleStackAt__5ShelfUi(s32, u32);
s8 GetArticle__C12ArticleStack(void *);
s8 GetArticle__C12RucksackItem(s32 *);
void *GetBarnAnimal__4BarnUi(void *, u32);
u32 GetCapacity__C4Barn(void *);
u32 GetCapacity__C4Coop(void *);
void *GetChicken__4CoopUi(void *, u32);
s32 GetCow__4BarnUi(void *, u32);
void *GetCurrentTask__C13HarvestSprite();
void *GetDaysPregnantHealthy__C10BarnAnimal();
void *GetDaysSinceLastSpoken__C3Npc();
s32 GetFatigueGain__C4Food(s32 *);
u32 GetFirstFreeItemSlot__C8Rucksack(s32);
u32 GetFirstFreeToolSlot__C8Rucksack(s32);
void *GetFirstSlotWithArticle__C8RucksackUi(s32, s32);
void *GetFirstSlotWithFood__C8RucksackUi(s32, s32);
void *GetFriendship__C3Npc();
s32 GetGrowthStage__C3Cow();
s32 GetGrowthStage__C3Dog(void *);
s32 GetGrowthStage__C5Horse();
s32 GetGrowthStage__C5Sheep();
s32 GetGrowthStage__C7Chicken();
void *GetHorse__4Farm(void *);
u16 GetIconId__C4Food(s32 *);
u16 GetIconId__C4Tool(u8 *);
u16 GetIconId__C7Article(void *);
s32 GetId__C4Food(s32 *);
s32 GetId__C4Tool();
u32 GetId__C7Article(s8 *);
u32 GetIncubatorCapacity__C4Coop(void *);
s32 *GetItemAt__8RucksackUi(void *, u32);
s32 GetKind__C12RucksackItem(s32 *);
s16 GetLove__C12Bachelorette(void *);
s32 GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32);
s32 GetName__C6Animal(void *);
s32 GetName__C7Product(void *);
u32 GetPregnancyStallCapacity__C4Barn(void *);
s32 GetRecordPlayer__9FarmHouse(void *);
u32 GetRivalEventCount__C12Bachelorette(void *);
void *GetSheep__4BarnUi(void *, u32);
s32 GetShelf__9FarmHouse(void *);
u32 GetSize__C8Rucksack(void *);
s32 GetStaminaGain__C4Food(s32 *);
void *GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32);
s8 GetTool__C9ToolStack(void *);
u32 GetUpgradeLevel__C8Rucksack(void *);
s32 GetUpgradeLevel__C9FarmHouse(void *);
u32 GetVaseArticleId__C9FarmHouse(void *);
void *GetWorkDaysLeft__C13HarvestSprite();
u8 HasAlbum__C12RecordPlayer();
u8 HasBeenGiftedToday__C3Npc();
u8 HasBeenMet__C3Npc();
u8 HasBeenSpokenToJustNow__C3Npc();
u8 HasBeenSpokenToToday__C3Npc();
u8 HasBeenTalkedTo__C6Animal();
u8 HasBushelForEnt__C4CoopUi(void *, s32);
u8 HasBushelForPregnancyStall__C4BarnUi(void *, s32);
u8 HasBushelForStall__C4BarnUi(void *);
u8 HasPlayedMinigameToday__C13HarvestSprite();
u8 HasShippedOneOfEachCrop__C11ShippingBin(void *);
u8 HasShippedOneOfEachMineral__C11ShippingBin(void *);
u8 HasShippedOneOfEachProduct__C11ShippingBin(void *);
u8 IsDisplayEnabled__C11ShippingBini(void *, s32);
s32 IsEmpty__C12ArticleStack();
s32 IsEmpty__C12RucksackItem();
s32 IsEmpty__C9ToolStack(void *);
u8 IsFireplaceLighted__C9FarmHouse(void *);
u8 IsIncubatorOccupied__C4CoopUi(void *, s32);
u8 IsPregnant__C10BarnAnimal();
u8 IsReadyToGiveBirth__C4BarnUi(void *, s32);
u8 IsSheared__C5Sheep();
u8 IsSick__C9Livestock();
u8 IsUnhappy__C9Livestock();
s32 KitchenRollingPin__9FarmHouse(void *);
s32 SetBushelForPregnancyStall__4BarnUi(void *, s32);
s32 SetBushelForStall__4BarnUi(void *, s32);
s32 SetEntBushel__4CoopUi(void *, s32);
s32 SetFriendship__3Npci(s32, s32);
s32 SetGifted__3Npc();
s32 SetLove__12Bachelorettei(s32, s32);
s32 SetSpokenTo__3Npc();
s32 SetTalkedTo__6Animal();
u8 ShouldHatch__4CoopUi(void *, s32);
s32 StartTask__13HarvestSpriteQ213HarvestSprite4Taski(s32, s32, s32);
s32 Upgrade__8Rucksack(void *);
s32 __12ArticleStack(s32 *);
s32 __12RucksackItem(s32 *);
s32 __12RucksackItemG4Food(s32 *, s32);
s32 __12RucksackItemG7Article(s32 *, u8);
s32 __4FoodUi(s32 *, s32);
s32 __4ToolUi(u8 *, s32);
s32 __7ArticleUi(void *, s32);
s32 __7ProductUi(void *, s32);
s32 __9ToolStack(s32 *);
s32 __9ToolStackG4ToolUi(s32 *, u8, s32);
s32 func_0800BCB0(void *, s32);
s32 func_0800BCD0(void *, s32);
u8 func_0800BD14(void *, s32);
u8 func_0800BD40(void *, s32);
u32 func_0800BD6C(void *);
u32 func_0800BDEC(void *);
void *func_0800E4E0(void *);
s8 func_0800E4E8(void *);
u8 func_0800E934(void *);
s32 func_0800E9A8(void *, void *);
s32 func_0800EB2C(void *, s32);
s32 func_0800EC4C(s32);
s32 func_0800ED14(void *);
s32 func_0800EFD8();
u8 func_0800F190(void *);
u32 func_0800F204(void *);
s32 func_0800F20C(s32 *, void *);
s8 func_0800F258(void *);
u32 func_0800F344(void *);
u8 func_0800F388(void *);
s32 func_0800F390(void *);
s32 func_0800F3E8(void *, u8);
u8 func_08010E60(void *);
u8 func_08010E68(void *);
s32 func_08010F24(void *);
s32 func_08010F3C(void *);
s32 func_08010F48(void *);
u32 func_0801151C(void *);
u32 func_08011520(void *);
u8 func_08011524(void *);
s32 func_08011540(void *, s32);
s32 func_08011544(void *);
s32 func_08011550(void *);
s32 func_08012064(s32, s32, s32, s32);
void *func_080120A4(s32, s32);
void *func_080120C4(s32, s32);
s32 func_080120E4(s32, s32, s32);
void *func_08012114(s32, s32);
void *func_08012134(s32, s32);
s32 func_08012154(s32, s32, s32);
s32 func_08012174(s32, s32, s32, s32);
s32 func_0801219C(s32, s32, s32, s32);
s32 func_080121C4(s32, s32);
s32 func_080121EC(s32, s32, s32);
s32 func_08012218(s32, s32);
s32 func_0801221C(s32, s32);
s32 func_0801223C(s32, s32, s32, s32);
s32 func_08012274(s32, s32, s32, s32);
s32 func_080122A0(s32, s32);
s32 func_080122BC(s32, s32, s32);
s32 func_080122E0(s32, s32, s32, s32);
s32 func_0801238C(s32, s32, s32, s32);
s32 func_080123A4();
s32 func_080123CC(s32, s32, s32, s32 *);
s32 func_08012454();
s32 func_08012464(s32, s32, s32);
s32 func_080124C4();
s32 func_080124D0();
s32 func_080125EC();
s32 func_08012658();
s32 func_0801268C(s32, s32, s32);
s32 func_080126BC(s32, s32);
s32 func_080126E4(s32, s32);
s32 func_08012720(s32, s32);
s32 func_0801274C();
s32 func_08012760(s32, s32);
s32 func_0801278C();
s32 func_080127A0(s32, s32);
s32 func_0801284C();
s32 func_08012860(s32, s32, s32, s32);
s32 func_080128D0(s32, s32, s32, s32);
s32 func_0801297C(s32, s32, s32, s32);
s32 func_08012AA4(s32, s32, s32);
s32 func_08012ACC(s32, s32, s32);
s32 func_08012ADC(s32, s32, s32, s32);
s32 func_08012B04(s32, s32, s32);
s32 func_08012BAC(s32, s32);
s32 func_08012BBC();
s32 func_08012C50(s32, s32);
s32 func_08012CF4();
s32 func_08012D88();
s32 func_08012E1C();
s32 func_08012EC0();
s32 func_08012F54();
s32 func_08012FE8();
s32 func_08013080();
s32 func_08013114();
s32 func_080131A8();
s32 func_0801323C();
s32 func_080132D0();
s32 func_08013364(s32, s32);
s32 func_08013408();
s32 func_080134A4();
s32 func_08013544();
s32 func_080135D8();
s32 func_0801366C();
s32 func_08013700();
s32 func_08013794();
s32 func_08013828();
s32 func_080138C0();
s32 func_0801395C();
s32 func_080139F0(s32, s32);
s32 func_08013A94(s32, s32);
s32 func_08013B38(s32, s32);
s32 func_08013BDC();
s32 func_08013C70();
s32 func_08013D04(s32, u32);
s32 func_08013DC8(s32, s32);
s32 func_08013E6C();
s32 func_08013EF8(s32, s32);
s32 func_08013F88(s32, s32, s32);
s32 func_08014034();
s32 func_0801404C();
s32 func_08014064();
s32 func_0801407C();
s32 func_08014094();
s32 func_080140AC();
s32 func_080140C4(s32, s32);
s32 func_080140DC(s32, s32);
s32 func_080140F4();
u8 func_0801410C();
u8 func_0801412C();
s32 func_08014164(s32, s32 *, s32);
s32 func_08014198();
s32 func_080141C4();
s32 func_080141EC();
s32 func_08014214();
u32 func_08014234();
u32 func_0801424C();
s32 func_08014264(s32, s32, s32);
s32 func_08014290(s32, s32);
s32 func_080142B8(s32, s32);
s32 func_080142D4();
s32 func_080142F0();
s32 func_08014304();
s32 func_08014318(s32);
s32 func_0801437C();
s32 func_08014410(s32, s32);
s32 func_080144BC();
s32 func_08014550(s32, u32);
s32 func_080145F8();
s32 func_08014694(s32, s32);
s32 func_080146B0(s32, s32);
s32 func_080146CC(s32, s32);
s32 func_080146FC(s32, s32);
s32 func_08014AF8();
s32 func_08014BD8();
s32 func_08014C0C(s32, s32, s32);
s32 func_08014C34(s32, s32, s32, s32);
s32 func_08014D30(s32, s32, s32);
u32 func_08014D5C();
u8 func_08014D7C(s32);
s32 func_08014D9C();
s32 func_08015210();
s32 func_0801531C();
s32 func_08015790();
s32 func_0801589C(s32, u16);
s32 func_080158CC();
s32 func_080158F8();
u8 func_08015920(s32, s32);
u32 func_08015950();
u32 func_08015970();
u32 func_08015990();
s32 func_080159B0(s32, s32, s32);
s32 func_08015E30();
s32 func_08016784();
s32 *func_080167AC(s32);
s32 func_080167DC();
s32 func_08016834(s32, s32, s32);
s32 func_080168D4(s32, s32);
void *func_08016AFC(s32, s32);
s32 func_08016BA4(s32, s32);
s32 func_08016BC0(s32, s32);
s32 func_08016BDC();
s32 func_08016BF4();
s32 func_08016C2C();
s32 func_08016C48();
s32 func_08016C6C();
s32 func_08016C88();
s32 func_08016CAC();
s32 func_08016CCC();
s32 func_08016CEC(s32, s32);
s32 func_08016D48();
s32 func_08016D80();
u32 func_08016D9C();
s32 func_08016DB0();
s32 func_08016E7C();
s32 func_08016E9C();
s32 func_08016EC4(s32, s32, s32, s32);
s32 func_08016EF0(s32, s32);
s32 func_08016F0C(s32, u32);
s32 func_08016F34(s32, s32);
s32 func_08016F60();
s32 func_08016FA4(s32, s32, s32, s32);
void *func_0804590C(void *, s32);
s32 func_08048FFC(void *, s32, s32);
u8 func_0804E0F8(void *, s32);
u8 func_0804E17C(void *, s32);
u8 func_0804E1D4(void *, s32);
u8 func_0804E22C(void *, s32);
u8 func_0804E2C0(void *, s32);
u8 func_0804E354(void *, s32);
void *func_0804E3D8(void *, s32, s32);
s32 func_08052230(void *, u32);
s32 func_08057E90(void *, u32, u32);
u32 func_0809AA28(void *);
s32 func_0809ABD8(void *, s32);
s32 func_0809ACC0(void *, s32);
u8 func_0809C304(void *, s32);
u8 func_0809C444(void *, s32);
u8 func_0809C474(void *, s32);
s32 func_0809C5EC(s32);
u8 func_0809CDCC(void *);
u32 func_0809CDEC(void *);
u32 func_0809ECD8(void *);
u8 func_0809ECE0(void *);
s32 func_0809ED64(void *);
s32 func_0809EEA4(void *, u32);
u8 func_0809EED0(void *);
s32 func_0809FE74(void *, s32);
s16 func_080A0490(void *);
u8 func_080A0518(void *);
s32 func_080A06B0(void *, s32);
s32 func_080A0878(void *, s32);
s32 func_080A0930(void *, s32);
s32 memcpy(void *, s32 *, s32);
u8 method_08009B20__C4Farm(void *);
s32 method_0809B514__C9Livestock();
s32 method_0809E6EC__13HarvestSprite();
s32 rand();
u32 strlen(void *);
extern void *gUnk_0300040C;
extern s32 gUnk_080F9EC5;
extern s32 gUnk_080F9ED9;
extern s32 gUnk_080F9EE0;
extern s32 gUnk_080F9EF4;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    s32 unk7;
    s32 unk8;
    u8 _padC[4];
    struct GenObj *unk10;
    struct GenObj *unk11;
    s32 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk19;
    s32 unk1A;
    s32 unk1B;
    s32 unk1D;
    s32 unk1E;
    s32 unk1F;
    s32 unk21;
    s32 unk22;
    s32 unk23;
    u8 _pad27[10];
    s32 unk31;
    s32 unk32;
    u8 _pad36[3];
    s32 unk39;
    s32 unk3A;
    u8 _pad3E[374];
    s32 unk1B4;
    u8 _pad1B8[408];
    void *unk350;
    s32 unk354;
    s32 unk358;
    u8 _pad35C[5964];
    s32 unk1AA8;
    u8 _pad1AAC[496];
    struct GenObj *unk1C9C;
    u8 _pad1CA0[1275];
    struct GenObj *unk219B;
    u8 _pad219F[4902];
    s32 unk34C5;
} GenObj;
s32 func_0803F8DC(GenObj *arg0, u32 arg1) {
    GenObj *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s8 sp18;
    s8 sp1C;
    s8 sp20;
    s8 sp24;
    u32 sp28;
    u32 sp2C;
    u8 sp30;
    u8 sp34;
    s8 sp38;
    u32 sp3C;
    s32 *var_r2_18;
    s16 temp_r0_76;
    s16 var_r0_10;
    s16 var_r0_7;
    s16 var_r0_8;
    s16 var_r0_9;
    s32 *temp_r4_34;
    s32 *temp_r4_44;
    s32 *temp_r4_58;
    s32 *var_r0_3;
    s32 *var_r1;
    s32 *var_r2_12;
    s32 *var_r5;
    s32 temp_r0;
    s32 temp_r0_101;
    s32 temp_r0_102;
    s32 temp_r0_103;
    s32 temp_r0_104;
    s32 temp_r0_105;
    s32 temp_r0_108;
    s32 temp_r0_109;
    s32 temp_r0_10;
    s32 temp_r0_110;
    s32 temp_r0_111;
    s32 temp_r0_113;
    s32 temp_r0_114;
    s32 temp_r0_115;
    s32 temp_r0_116;
    s32 temp_r0_117;
    s32 temp_r0_118;
    s32 temp_r0_11;
    s32 temp_r0_121;
    s32 temp_r0_122;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_23;
    s32 temp_r0_24;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_40;
    s32 temp_r0_41;
    s32 temp_r0_42;
    s32 temp_r0_43;
    s32 temp_r0_44;
    s32 temp_r0_45;
    s32 temp_r0_46;
    s32 temp_r0_48;
    s32 temp_r0_4;
    s32 temp_r0_50;
    s32 temp_r0_51;
    s32 temp_r0_52;
    s32 temp_r0_53;
    s32 temp_r0_54;
    s32 temp_r0_55;
    s32 temp_r0_56;
    s32 temp_r0_57;
    s32 temp_r0_58;
    s32 temp_r0_59;
    s32 temp_r0_5;
    s32 temp_r0_60;
    s32 temp_r0_61;
    s32 temp_r0_62;
    s32 temp_r0_63;
    s32 temp_r0_64;
    s32 temp_r0_65;
    s32 temp_r0_66;
    s32 temp_r0_67;
    s32 temp_r0_68;
    s32 temp_r0_69;
    s32 temp_r0_6;
    s32 temp_r0_70;
    s32 temp_r0_71;
    s32 temp_r0_72;
    s32 temp_r0_74;
    s32 temp_r0_7;
    s32 temp_r0_80;
    s32 temp_r0_82;
    s32 temp_r0_83;
    s32 temp_r0_84;
    s32 temp_r0_87;
    s32 temp_r0_88;
    s32 temp_r0_89;
    s32 temp_r0_8;
    s32 temp_r0_90;
    s32 temp_r0_99;
    s32 temp_r0_9;
    s32 temp_r1_10;
    s32 temp_r1_123;
    s32 temp_r1_125;
    s32 temp_r1_126;
    s32 temp_r1_132;
    s32 temp_r1_138;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_66;
    s32 temp_r1_68;
    s32 temp_r1_70;
    s32 temp_r1_77;
    s32 temp_r1_83;
    s32 temp_r1_89;
    s32 temp_r1_95;
    s32 temp_r2_29;
    s32 temp_r2_31;
    s32 temp_r2_98;
    s32 temp_r3_32;
    s32 temp_r3_43;
    s32 temp_r3_44;
    s32 temp_r3_45;
    s32 temp_r3_46;
    s32 temp_r3_48;
    s32 temp_r3_49;
    s32 temp_r3_50;
    s32 temp_r3_74;
    s32 temp_r4_11;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_48;
    s32 temp_r4_53;
    s32 temp_r5;
    s32 temp_r5_10;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_8;
    s32 temp_r6;
    s32 temp_r6_19;
    s32 temp_r6_23;
    s32 temp_r6_41;
    s32 temp_r7_13;
    s32 temp_r7_14;
    s32 temp_r7_15;
    s32 temp_r7_16;
    s32 temp_r7_17;
    s32 temp_r7_18;
    s32 temp_r7_23;
    s32 temp_r7_24;
    s32 temp_r7_26;
    s32 temp_r7_27;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r0_11;
    s32 var_r0_6;
    s32 var_r1_10;
    s32 var_r1_11;
    s32 var_r1_15;
    s32 var_r1_16;
    s32 var_r1_18;
    s32 var_r1_21;
    s32 var_r1_22;
    s32 var_r1_23;
    s32 var_r1_24;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_7;
    s32 var_r1_8;
    s32 var_r1_9;
    s32 var_r2_10;
    s32 var_r2_13;
    s32 var_r2_14;
    s32 var_r2_19;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r2_7;
    s32 var_r2_8;
    s32 var_r2_9;
    s32 var_r3;
    s32 var_r3_11;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r3_6;
    s32 var_r3_7;
    s32 var_r3_8;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r4_8;
    s32 var_r6_11;
    s32 var_r6_12;
    s32 var_r6_13;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    s32 var_r6_5;
    s32 var_r6_6;
    s32 var_r6_8;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_r7_5;
    s32 var_r7_6;
    s32 var_r7_7;
    s32 var_r7_8;
    s32 var_r8;
    s32 var_r8_3;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    u16 temp_r0_78;
    u16 temp_r4_49;
    u16 var_r0_12;
    u32 *var_r0;
    u32 *var_r0_2;
    u32 *var_r1_12;
    u32 *var_r2_15;
    u32 *var_r4;
    u32 *var_r5_2;
    u32 *var_r6_7;
    u32 temp_r0_100;
    u32 temp_r0_112;
    u32 temp_r0_25;
    u32 temp_r0_26;
    u32 temp_r0_27;
    u32 temp_r0_28;
    u32 temp_r0_29;
    u32 temp_r0_30;
    u32 temp_r0_31;
    u32 temp_r0_32;
    u32 temp_r0_33;
    u32 temp_r0_34;
    u32 temp_r0_35;
    u32 temp_r0_36;
    u32 temp_r0_37;
    u32 temp_r0_38;
    u32 temp_r0_39;
    u32 temp_r0_47;
    u32 temp_r0_75;
    u32 temp_r0_77;
    u32 temp_r0_79;
    u32 temp_r0_81;
    u32 temp_r0_91;
    u32 temp_r0_92;
    u32 temp_r0_93;
    u32 temp_r0_94;
    u32 temp_r0_95;
    u32 temp_r0_96;
    u32 temp_r0_97;
    u32 temp_r0_98;
    u32 temp_r1;
    u32 temp_r1_100;
    u32 temp_r1_101;
    u32 temp_r1_102;
    u32 temp_r1_103;
    u32 temp_r1_104;
    u32 temp_r1_105;
    u32 temp_r1_106;
    u32 temp_r1_107;
    u32 temp_r1_108;
    u32 temp_r1_109;
    u32 temp_r1_110;
    u32 temp_r1_111;
    u32 temp_r1_112;
    u32 temp_r1_113;
    u32 temp_r1_114;
    u32 temp_r1_115;
    u32 temp_r1_116;
    u32 temp_r1_117;
    u32 temp_r1_118;
    u32 temp_r1_119;
    u32 temp_r1_11;
    u32 temp_r1_120;
    u32 temp_r1_121;
    u32 temp_r1_122;
    u32 temp_r1_124;
    u32 temp_r1_127;
    u32 temp_r1_128;
    u32 temp_r1_129;
    u32 temp_r1_12;
    u32 temp_r1_130;
    u32 temp_r1_131;
    u32 temp_r1_133;
    u32 temp_r1_134;
    u32 temp_r1_135;
    u32 temp_r1_136;
    u32 temp_r1_137;
    u32 temp_r1_13;
    u32 temp_r1_14;
    u32 temp_r1_15;
    u32 temp_r1_16;
    u32 temp_r1_17;
    u32 temp_r1_18;
    u32 temp_r1_19;
    u32 temp_r1_20;
    u32 temp_r1_21;
    u32 temp_r1_22;
    u32 temp_r1_23;
    u32 temp_r1_24;
    u32 temp_r1_25;
    u32 temp_r1_26;
    u32 temp_r1_27;
    u32 temp_r1_28;
    u32 temp_r1_29;
    u32 temp_r1_2;
    u32 temp_r1_30;
    u32 temp_r1_31;
    u32 temp_r1_32;
    u32 temp_r1_33;
    u32 temp_r1_34;
    u32 temp_r1_35;
    u32 temp_r1_36;
    u32 temp_r1_37;
    u32 temp_r1_38;
    u32 temp_r1_39;
    u32 temp_r1_3;
    u32 temp_r1_40;
    u32 temp_r1_41;
    u32 temp_r1_42;
    u32 temp_r1_43;
    u32 temp_r1_44;
    u32 temp_r1_45;
    u32 temp_r1_46;
    u32 temp_r1_47;
    u32 temp_r1_48;
    u32 temp_r1_49;
    u32 temp_r1_50;
    u32 temp_r1_51;
    u32 temp_r1_52;
    u32 temp_r1_53;
    u32 temp_r1_54;
    u32 temp_r1_55;
    u32 temp_r1_56;
    u32 temp_r1_57;
    u32 temp_r1_58;
    u32 temp_r1_59;
    u32 temp_r1_60;
    u32 temp_r1_61;
    u32 temp_r1_62;
    u32 temp_r1_63;
    u32 temp_r1_64;
    u32 temp_r1_65;
    u32 temp_r1_67;
    u32 temp_r1_69;
    u32 temp_r1_6;
    u32 temp_r1_71;
    u32 temp_r1_72;
    u32 temp_r1_73;
    u32 temp_r1_74;
    u32 temp_r1_75;
    u32 temp_r1_76;
    u32 temp_r1_78;
    u32 temp_r1_79;
    u32 temp_r1_7;
    u32 temp_r1_80;
    u32 temp_r1_81;
    u32 temp_r1_82;
    u32 temp_r1_88;
    u32 temp_r1_8;
    u32 temp_r1_90;
    u32 temp_r1_91;
    u32 temp_r1_93;
    u32 temp_r1_96;
    u32 temp_r1_97;
    u32 temp_r1_98;
    u32 temp_r1_99;
    u32 temp_r1_9;
    u32 temp_r2;
    u32 temp_r2_100;
    u32 temp_r2_101;
    u32 temp_r2_102;
    u32 temp_r2_103;
    u32 temp_r2_104;
    u32 temp_r2_105;
    u32 temp_r2_106;
    u32 temp_r2_107;
    u32 temp_r2_109;
    u32 temp_r2_10;
    u32 temp_r2_110;
    u32 temp_r2_111;
    u32 temp_r2_113;
    u32 temp_r2_114;
    u32 temp_r2_115;
    u32 temp_r2_116;
    u32 temp_r2_117;
    u32 temp_r2_118;
    u32 temp_r2_119;
    u32 temp_r2_11;
    u32 temp_r2_120;
    u32 temp_r2_121;
    u32 temp_r2_122;
    u32 temp_r2_123;
    u32 temp_r2_124;
    u32 temp_r2_125;
    u32 temp_r2_126;
    u32 temp_r2_127;
    u32 temp_r2_128;
    u32 temp_r2_129;
    u32 temp_r2_12;
    u32 temp_r2_130;
    u32 temp_r2_131;
    u32 temp_r2_132;
    u32 temp_r2_133;
    u32 temp_r2_134;
    u32 temp_r2_135;
    u32 temp_r2_136;
    u32 temp_r2_137;
    u32 temp_r2_13;
    u32 temp_r2_14;
    u32 temp_r2_15;
    u32 temp_r2_16;
    u32 temp_r2_17;
    u32 temp_r2_19;
    u32 temp_r2_20;
    u32 temp_r2_21;
    u32 temp_r2_22;
    u32 temp_r2_23;
    u32 temp_r2_24;
    u32 temp_r2_25;
    u32 temp_r2_26;
    u32 temp_r2_27;
    u32 temp_r2_28;
    u32 temp_r2_2;
    u32 temp_r2_30;
    u32 temp_r2_32;
    u32 temp_r2_35;
    u32 temp_r2_36;
    u32 temp_r2_37;
    u32 temp_r2_38;
    u32 temp_r2_39;
    u32 temp_r2_3;
    u32 temp_r2_40;
    u32 temp_r2_41;
    u32 temp_r2_42;
    u32 temp_r2_43;
    u32 temp_r2_44;
    u32 temp_r2_45;
    u32 temp_r2_46;
    u32 temp_r2_47;
    u32 temp_r2_48;
    u32 temp_r2_49;
    u32 temp_r2_4;
    u32 temp_r2_50;
    u32 temp_r2_51;
    u32 temp_r2_52;
    u32 temp_r2_53;
    u32 temp_r2_54;
    u32 temp_r2_55;
    u32 temp_r2_56;
    u32 temp_r2_57;
    u32 temp_r2_58;
    u32 temp_r2_59;
    u32 temp_r2_5;
    u32 temp_r2_60;
    u32 temp_r2_61;
    u32 temp_r2_62;
    u32 temp_r2_63;
    u32 temp_r2_64;
    u32 temp_r2_65;
    u32 temp_r2_66;
    u32 temp_r2_67;
    u32 temp_r2_68;
    u32 temp_r2_69;
    u32 temp_r2_6;
    u32 temp_r2_70;
    u32 temp_r2_71;
    u32 temp_r2_72;
    u32 temp_r2_73;
    u32 temp_r2_74;
    u32 temp_r2_75;
    u32 temp_r2_76;
    u32 temp_r2_77;
    u32 temp_r2_78;
    u32 temp_r2_79;
    u32 temp_r2_7;
    u32 temp_r2_80;
    u32 temp_r2_81;
    u32 temp_r2_82;
    u32 temp_r2_83;
    u32 temp_r2_84;
    u32 temp_r2_85;
    u32 temp_r2_86;
    u32 temp_r2_87;
    u32 temp_r2_8;
    u32 temp_r2_90;
    u32 temp_r2_91;
    u32 temp_r2_92;
    u32 temp_r2_93;
    u32 temp_r2_94;
    u32 temp_r2_95;
    u32 temp_r2_96;
    u32 temp_r2_97;
    u32 temp_r2_99;
    u32 temp_r2_9;
    u32 temp_r3;
    u32 temp_r3_10;
    u32 temp_r3_12;
    u32 temp_r3_14;
    u32 temp_r3_16;
    u32 temp_r3_18;
    u32 temp_r3_20;
    u32 temp_r3_22;
    u32 temp_r3_24;
    u32 temp_r3_26;
    u32 temp_r3_27;
    u32 temp_r3_28;
    u32 temp_r3_29;
    u32 temp_r3_2;
    u32 temp_r3_30;
    u32 temp_r3_31;
    u32 temp_r3_33;
    u32 temp_r3_34;
    u32 temp_r3_35;
    u32 temp_r3_36;
    u32 temp_r3_37;
    u32 temp_r3_38;
    u32 temp_r3_39;
    u32 temp_r3_3;
    u32 temp_r3_40;
    u32 temp_r3_41;
    u32 temp_r3_42;
    u32 temp_r3_47;
    u32 temp_r3_4;
    u32 temp_r3_51;
    u32 temp_r3_52;
    u32 temp_r3_53;
    u32 temp_r3_55;
    u32 temp_r3_56;
    u32 temp_r3_57;
    u32 temp_r3_58;
    u32 temp_r3_59;
    u32 temp_r3_5;
    u32 temp_r3_60;
    u32 temp_r3_61;
    u32 temp_r3_62;
    u32 temp_r3_63;
    u32 temp_r3_64;
    u32 temp_r3_65;
    u32 temp_r3_66;
    u32 temp_r3_67;
    u32 temp_r3_68;
    u32 temp_r3_69;
    u32 temp_r3_6;
    u32 temp_r3_70;
    u32 temp_r3_71;
    u32 temp_r3_72;
    u32 temp_r3_73;
    u32 temp_r3_75;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u32 temp_r3_9;
    u32 temp_r4;
    u32 temp_r4_12;
    u32 temp_r4_13;
    u32 temp_r4_14;
    u32 temp_r4_15;
    u32 temp_r4_16;
    u32 temp_r4_17;
    u32 temp_r4_18;
    u32 temp_r4_19;
    u32 temp_r4_20;
    u32 temp_r4_22;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r4_51;
    u32 temp_r4_52;
    u32 temp_r4_54;
    u32 temp_r4_5;
    u32 temp_r4_60;
    u32 temp_r4_6;
    u32 temp_r4_7;
    u32 temp_r4_8;
    u32 temp_r4_9;
    u32 temp_r6_10;
    u32 temp_r6_11;
    u32 temp_r6_12;
    u32 temp_r6_17;
    u32 temp_r6_7;
    u32 temp_r6_8;
    u32 temp_r6_9;
    u32 temp_r7_10;
    u32 temp_r7_11;
    u32 temp_r7_20;
    u32 temp_r7_9;
    u32 var_r0_5;
    u32 var_r1_13;
    u32 var_r1_14;
    u32 var_r1_17;
    u32 var_r1_2;
    u32 var_r2_16;
    u32 var_r2_17;
    u32 var_r3_10;
    u32 var_r3_12;
    u32 var_r3_9;
    u32 var_r4_10;
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_13;
    u32 var_r4_6;
    u32 var_r4_9;
    u32 var_r5_3;
    u32 var_r6_10;
    u32 var_r6_15;
    u32 var_r6_9;
    u8 *temp_r2_33;
    u8 *temp_r2_34;
    u8 *temp_r4_55;
    u8 temp_r0_73;
    u8 temp_r0_85;
    u8 temp_r0_86;
    u8 temp_r2_89;
    u8 temp_r5_7;
    u8 var_r1_19;
    u8 var_r1_20;
    u8 var_r4_2;
    u8 var_r4_3;
    void *temp_r0_106;
    void *temp_r0_107;
    void *temp_r0_119;
    void *temp_r0_120;
    GenObj *temp_r0_49;
    void *temp_r1_84;
    void *temp_r1_85;
    void *temp_r1_86;
    void *temp_r1_87;
    GenObj *temp_r1_92;
    GenObj *temp_r1_94;
    void *temp_r2_108;
    void *temp_r2_112;
    void *temp_r2_18;
    void *temp_r2_88;
    void *temp_r3_11;
    void *temp_r3_13;
    void *temp_r3_15;
    void *temp_r3_17;
    void *temp_r3_19;
    void *temp_r3_21;
    void *temp_r3_23;
    void *temp_r3_25;
    void *temp_r3_54;
    void *temp_r4_10;
    void *temp_r4_21;
    void *temp_r4_23;
    void *temp_r4_24;
    void *temp_r4_25;
    void *temp_r4_26;
    void *temp_r4_27;
    void *temp_r4_28;
    void *temp_r4_29;
    void *temp_r4_30;
    void *temp_r4_31;
    void *temp_r4_32;
    void *temp_r4_33;
    void *temp_r4_35;
    void *temp_r4_42;
    void *temp_r4_43;
    void *temp_r4_47;
    void *temp_r4_50;
    void *temp_r4_56;
    void *temp_r4_57;
    void *temp_r4_59;
    void *temp_r4_61;
    void *temp_r4_62;
    void *temp_r5_6;
    void *temp_r5_9;
    void *temp_r6_13;
    void *temp_r6_14;
    void *temp_r6_15;
    void *temp_r6_16;
    void *temp_r6_18;
    void *temp_r6_20;
    void *temp_r6_21;
    void *temp_r6_22;
    void *temp_r6_24;
    void *temp_r6_25;
    void *temp_r6_26;
    void *temp_r6_27;
    void *temp_r6_28;
    void *temp_r6_29;
    void *temp_r6_2;
    void *temp_r6_30;
    void *temp_r6_31;
    void *temp_r6_32;
    void *temp_r6_33;
    void *temp_r6_34;
    void *temp_r6_35;
    void *temp_r6_36;
    void *temp_r6_37;
    void *temp_r6_38;
    void *temp_r6_39;
    void *temp_r6_3;
    void *temp_r6_40;
    void *temp_r6_4;
    void *temp_r6_5;
    void *temp_r6_6;
    void *temp_r7;
    void *temp_r7_12;
    GenObj *temp_r7_19;
    void *temp_r7_21;
    void *temp_r7_22;
    void *temp_r7_25;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r7_4;
    void *temp_r7_5;
    void *temp_r7_6;
    void *temp_r7_7;
    void *temp_r7_8;
    void *var_r0_4;
    void *var_r2;
    void *var_r2_11;
    GenObj *var_r4_7;
    void *var_r6;
    void *var_r6_14;
    void *var_r8_2;
    void *var_r8_4;

    switch (arg1) {
    case 0x0:
        var_r1 = (GenObj *)((u8 *)arg0 + 0x1B4);
block_4:
        temp_r0 = *var_r1;
        if (temp_r0 != 0) {
            *var_r1 = temp_r0 - 1;
        }
    default:
block_1708:
        return 0;
    case 0x1:
        var_r1 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_4;
    case 0x2:
        temp_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1 = arg0->unk1B4;
        if (temp_r1 != 0) {
            arg0->unk1B4 = (u32) (temp_r1 - 1);
        }
        temp_r1_2 = arg0->unk1B4;
        if (temp_r1_2 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_2 - 1);
        }
        temp_r1_3 = arg0->unk1B4;
        if (temp_r1_3 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_3 - 1);
        }
        temp_r4 = arg0->unk1B4;
        if (temp_r4 != 0) {
            arg0->unk1B4 = (u32) (temp_r4 - 1);
        }
        temp_r0_2 = arg0->unk354;
        if (temp_r0_2 != 0) {
            sp0 = *(temp_r6 + ((temp_r1 * 4) - 4));
            func_08012064(temp_r0_2, *(temp_r6 + ((temp_r4 * 4) - 4)), *(temp_r6 + ((temp_r1_3 * 4) - 4)), *(temp_r6 + ((temp_r1_2 * 4) - 4)));
        }
        goto block_1708;
    case 0x3:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2 = arg0->unk1B4;
        if (temp_r2 != 0) {
            arg0->unk1B4 = (u32) (temp_r2 - 1);
        }
        temp_r1_4 = arg0->unk354;
        if (temp_r1_4 != 0) {
            var_r2 = func_080120A4(temp_r1_4, *(var_r6 + ((temp_r2 * 4) - 4)));
block_1612:
            var_r1_2 = *var_r4;
            if (var_r1_2 > 0x63U) {

            } else {
                *((u8 *)var_r6 + (var_r1_2 * 4)) = var_r2;
block_1615:
                *var_r4 = var_r1_2 + 1;
            }
        } else {
block_1425:
            temp_r3 = *var_r4;
            if (temp_r3 <= 0x63U) {
                *((u8 *)var_r6 + (temp_r3 * 4)) = arg0->unk354;
                *var_r4 = temp_r3 + 1;
            }
        }
        goto block_1708;
    case 0x4:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_2 = arg0->unk1B4;
        if (temp_r2_2 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_2 - 1);
        }
        temp_r1_5 = arg0->unk354;
        if (temp_r1_5 != 0) {
            var_r2 = func_080120C4(temp_r1_5, *(var_r6 + ((temp_r2_2 * 4) - 4)));
            goto block_1612;
        }
        goto block_1425;
        goto block_1708;
    case 0x5:
        temp_r6_2 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_6 = arg0->unk1B4;
        if (temp_r1_6 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_6 - 1);
        }
        temp_r3_2 = arg0->unk1B4;
        if (temp_r3_2 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_2 - 1);
        }
        temp_r0_3 = arg0->unk354;
        if (temp_r0_3 != 0) {
            func_080120E4(temp_r0_3, *(temp_r6_2 + ((temp_r3_2 * 4) - 4)), *(temp_r6_2 + ((temp_r1_6 * 4) - 4)));
        }
        goto block_1708;
    case 0x15:
        temp_r7 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_7 = arg0->unk1B4;
        if (temp_r1_7 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_7 - 1);
        }
        temp_r1_8 = arg0->unk1B4;
        if (temp_r1_8 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_8 - 1);
        }
        temp_r4_2 = arg0->unk1B4;
        if (temp_r4_2 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_2 - 1);
        }
        temp_r0_4 = arg0->unk354;
        if (temp_r0_4 != 0) {
            func_0801223C(temp_r0_4, *(temp_r7 + ((temp_r4_2 * 4) - 4)), *(temp_r7 + ((temp_r1_8 * 4) - 4)), *(temp_r7 + ((temp_r1_7 * 4) - 4)));
        }
        goto block_1708;
    case 0x7:
        temp_r6_3 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_9 = arg0->unk1B4;
        if (temp_r1_9 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_9 - 1);
        }
        temp_r3_3 = arg0->unk1B4;
        if (temp_r3_3 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_3 - 1);
        }
        temp_r0_5 = arg0->unk354;
        if (temp_r0_5 != 0) {
            func_08012154(temp_r0_5, *(temp_r6_3 + ((temp_r3_3 * 4) - 4)), *(temp_r6_3 + ((temp_r1_9 * 4) - 4)));
        }
        goto block_1708;
    case 0x6:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_3 = arg0->unk1B4;
        if (temp_r2_3 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_3 - 1);
        }
        temp_r1_10 = arg0->unk354;
        if (temp_r1_10 != 0) {
            var_r2 = func_08012114(temp_r1_10, *(var_r6 + ((temp_r2_3 * 4) - 4)));
            goto block_1612;
        }
        goto block_1425;
        goto block_1708;
    case 0x8:
        temp_r7_2 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_11 = arg0->unk1B4;
        if (temp_r1_11 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_11 - 1);
        }
        temp_r1_12 = arg0->unk1B4;
        if (temp_r1_12 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_12 - 1);
        }
        temp_r4_3 = arg0->unk1B4;
        if (temp_r4_3 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_3 - 1);
        }
        temp_r0_6 = arg0->unk354;
        if (temp_r0_6 != 0) {
            func_08012174(temp_r0_6, *(temp_r7_2 + ((temp_r4_3 * 4) - 4)), *(temp_r7_2 + ((temp_r1_12 * 4) - 4)), *(temp_r7_2 + ((temp_r1_11 * 4) - 4)) << 0x10);
        }
        goto block_1708;
    case 0x9:
        temp_r7_3 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_13 = arg0->unk1B4;
        if (temp_r1_13 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_13 - 1);
        }
        temp_r1_14 = arg0->unk1B4;
        if (temp_r1_14 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_14 - 1);
        }
        temp_r4_4 = arg0->unk1B4;
        if (temp_r4_4 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_4 - 1);
        }
        temp_r0_7 = arg0->unk354;
        if (temp_r0_7 != 0) {
            func_08012174(temp_r0_7, *(temp_r7_3 + ((temp_r4_4 * 4) - 4)), *(temp_r7_3 + ((temp_r1_14 * 4) - 4)), *(temp_r7_3 + ((temp_r1_13 * 4) - 4)));
        }
        goto block_1708;
    case 0xA:
        temp_r7_4 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_15 = arg0->unk1B4;
        if (temp_r1_15 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_15 - 1);
        }
        temp_r1_16 = arg0->unk1B4;
        if (temp_r1_16 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_16 - 1);
        }
        temp_r4_5 = arg0->unk1B4;
        if (temp_r4_5 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_5 - 1);
        }
        temp_r0_8 = arg0->unk354;
        if (temp_r0_8 != 0) {
            func_0801219C(temp_r0_8, *(temp_r7_4 + ((temp_r4_5 * 4) - 4)), *(temp_r7_4 + ((temp_r1_16 * 4) - 4)), *(temp_r7_4 + ((temp_r1_15 * 4) - 4)) << 0x10);
        }
        goto block_1708;
    case 0xB:
        temp_r7_5 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_17 = arg0->unk1B4;
        if (temp_r1_17 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_17 - 1);
        }
        temp_r1_18 = arg0->unk1B4;
        if (temp_r1_18 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_18 - 1);
        }
        temp_r4_6 = arg0->unk1B4;
        if (temp_r4_6 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_6 - 1);
        }
        temp_r0_9 = arg0->unk354;
        if (temp_r0_9 != 0) {
            func_0801219C(temp_r0_9, *(temp_r7_5 + ((temp_r4_6 * 4) - 4)), *(temp_r7_5 + ((temp_r1_18 * 4) - 4)), *(temp_r7_5 + ((temp_r1_17 * 4) - 4)));
        }
        goto block_1708;
    case 0xC:
        temp_r2_4 = arg0->unk1B4;
        if (temp_r2_4 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_4 - 1);
        }
        temp_r0_10 = arg0->unk354;
        if (temp_r0_10 != 0) {
            func_080121C4(temp_r0_10, ((temp_r2_4 * 4) + arg0)->unk20);
        }
block_530:
        return 1;
    case 0xD:
        temp_r6_4 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_19 = arg0->unk1B4;
        if (temp_r1_19 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_19 - 1);
        }
        temp_r3_4 = arg0->unk1B4;
        if (temp_r3_4 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_4 - 1);
        }
        temp_r0_11 = arg0->unk354;
        if (temp_r0_11 != 0) {
            func_080121EC(temp_r0_11, *(temp_r6_4 + ((temp_r3_4 * 4) - 4)), *(temp_r6_4 + ((temp_r1_19 * 4) - 4)));
        }
        goto block_1708;
    case 0xE:
        temp_r2_5 = arg0->unk1B4;
        if (temp_r2_5 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_5 - 1);
        }
        temp_r0_12 = arg0->unk354;
        if (temp_r0_12 != 0) {
            func_08012218(temp_r0_12, ((temp_r2_5 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0xF:
        temp_r2_6 = arg0->unk1B4;
        if (temp_r2_6 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_6 - 1);
        }
        temp_r0_13 = arg0->unk354;
        if (temp_r0_13 != 0) {
            func_0801221C(temp_r0_13, ((temp_r2_6 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x11:
        temp_r7_6 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_20 = arg0->unk1B4;
        if (temp_r1_20 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_20 - 1);
        }
        temp_r1_21 = arg0->unk1B4;
        if (temp_r1_21 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_21 - 1);
        }
        temp_r4_7 = arg0->unk1B4;
        if (temp_r4_7 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_7 - 1);
        }
        temp_r0_14 = arg0->unk354;
        if (temp_r0_14 != 0) {
            func_08012274(temp_r0_14, *(temp_r7_6 + ((temp_r4_7 * 4) - 4)), *(temp_r7_6 + ((temp_r1_21 * 4) - 4)), *(temp_r7_6 + ((temp_r1_20 * 4) - 4)));
        }
        goto block_1708;
    case 0x12:
        temp_r2_7 = arg0->unk1B4;
        if (temp_r2_7 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_7 - 1);
        }
        temp_r0_15 = arg0->unk354;
        if (temp_r0_15 != 0) {
            func_080122A0(temp_r0_15, ((temp_r2_7 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x10:
        temp_r6_5 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_22 = arg0->unk1B4;
        if (temp_r1_22 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_22 - 1);
        }
        temp_r3_5 = arg0->unk1B4;
        if (temp_r3_5 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_5 - 1);
        }
        temp_r0_16 = arg0->unk354;
        if (temp_r0_16 != 0) {
            func_080122BC(temp_r0_16, *(temp_r6_5 + ((temp_r3_5 * 4) - 4)), *(temp_r6_5 + ((temp_r1_22 * 4) - 4)));
        }
        goto block_1708;
    case 0x16:
        temp_r7_7 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_23 = arg0->unk1B4;
        if (temp_r1_23 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_23 - 1);
        }
        temp_r1_24 = arg0->unk1B4;
        if (temp_r1_24 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_24 - 1);
        }
        temp_r4_8 = arg0->unk1B4;
        if (temp_r4_8 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_8 - 1);
        }
        temp_r0_17 = arg0->unk354;
        if (temp_r0_17 != 0) {
            func_080122E0(temp_r0_17, *(temp_r7_7 + ((temp_r4_8 * 4) - 4)), *(temp_r7_7 + ((temp_r1_24 * 4) - 4)), *(temp_r7_7 + ((temp_r1_23 * 4) - 4)));
        }
        func_0809C5EC(arg0->unk350 + 0x34D8);
        goto block_1708;
    case 0x17:
        temp_r7_8 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_25 = arg0->unk1B4;
        if (temp_r1_25 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_25 - 1);
        }
        temp_r1_26 = arg0->unk1B4;
        if (temp_r1_26 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_26 - 1);
        }
        temp_r4_9 = arg0->unk1B4;
        if (temp_r4_9 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_9 - 1);
        }
        temp_r0_18 = arg0->unk354;
        if (temp_r0_18 != 0) {
            func_0801238C(temp_r0_18, *(temp_r7_8 + ((temp_r4_9 * 4) - 4)), *(temp_r7_8 + ((temp_r1_26 * 4) - 4)), *(temp_r7_8 + ((temp_r1_25 * 4) - 4)));
        }
        goto block_1708;
    case 0x18:
        if (arg0->unk354 != 0) {
            func_080123A4();
        }
        goto block_530;
    case 0x19:
        temp_r4_10 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_27 = arg0->unk1B4;
        if (temp_r1_27 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_27 - 1);
        }
        temp_r2_8 = arg0->unk1B4;
        if (temp_r2_8 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_8 - 1);
        }
        temp_r4_11 = arg0->unk354;
        if (temp_r4_11 != 0) {
            spC = 0x100;
            spC.unk2 = 0x100;
            spC.unk4 = 0;
            spC.unk6 = 0;
            spC.unk7 = 0;
            spC.unk8 = 0;
            func_080123CC(temp_r4_11, *(temp_r4_10 + ((temp_r2_8 * 4) - 4)), *(temp_r4_10 + ((temp_r1_27 * 4) - 4)), &spC);
        }
        goto block_1708;
    case 0x1A:
        if (arg0->unk354 != 0) {
            func_08012454();
        }
        goto block_1708;
    case 0x1B:
        temp_r6_6 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_28 = arg0->unk1B4;
        if (temp_r1_28 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_28 - 1);
        }
        temp_r3_6 = arg0->unk1B4;
        if (temp_r3_6 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_6 - 1);
        }
        temp_r0_19 = arg0->unk354;
        if (temp_r0_19 != 0) {
            func_08012464(temp_r0_19, *(temp_r6_6 + ((temp_r3_6 * 4) - 4)), *(temp_r6_6 + ((temp_r1_28 * 4) - 4)));
        }
        goto block_1708;
    case 0x1C:
        if (arg0->unk354 != 0) {
            func_080124C4();
        }
        goto block_1708;
    case 0x1E:
        if (arg0->unk354 != 0) {
            func_080125EC();
        }
        goto block_1708;
    case 0x1F:
        if (arg0->unk354 != 0) {
            func_080124D0();
        }
        goto block_530;
    case 0x20:
        if (arg0->unk354 != 0) {
            func_08012658();
        }
        goto block_530;
    case 0x22:
        temp_r1_29 = arg0->unk1B4;
        temp_r3_7 = ((temp_r1_29 * 4) + arg0)->unk20;
        if (temp_r1_29 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_29 - 1);
        }
        temp_r0_20 = arg0->unk354;
        if (temp_r0_20 != 0) {
            if (temp_r3_7 <= (u32) arg0->unk10) {
                var_r1_3 = arg0->unk18 + *((temp_r3_7 * 4) + arg0->unk14);
            } else {
                var_r1_3 = 0x080F9EB8;
            }
            func_0801268C(temp_r0_20, var_r1_3, 0x40);
        }
        goto block_530;
    case 0x23:
        temp_r1_30 = arg0->unk1B4;
        temp_r3_8 = ((temp_r1_30 * 4) + arg0)->unk20;
        if (temp_r1_30 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_30 - 1);
        }
        temp_r0_21 = arg0->unk354;
        if (temp_r0_21 != 0) {
            if (temp_r3_8 <= (u32) arg0->unk10) {
                var_r1_4 = arg0->unk18 + *((temp_r3_8 * 4) + arg0->unk14);
            } else {
                var_r1_4 = 0x080F9EB8;
            }
            func_0801268C(temp_r0_21, var_r1_4, 0);
        }
        goto block_530;
    case 0x21:
        temp_r1_31 = arg0->unk1B4;
        temp_r3_9 = ((temp_r1_31 * 4) + arg0)->unk20;
        if (temp_r1_31 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_31 - 1);
        }
        temp_r0_22 = arg0->unk354;
        if (temp_r0_22 != 0) {
            if (temp_r3_9 <= (u32) arg0->unk10) {
                var_r1_5 = arg0->unk18 + *((temp_r3_9 * 4) + arg0->unk14);
            } else {
                var_r1_5 = 0x080F9EB8;
            }
            func_0801268C(temp_r0_22, var_r1_5, 0x100);
        }
        goto block_530;
    case 0x2C:
        temp_r2_9 = arg0->unk1B4;
        if (temp_r2_9 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_9 - 1);
        }
        temp_r0_23 = arg0->unk354;
        if (temp_r0_23 != 0) {
            func_080126E4(temp_r0_23, ((temp_r2_9 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x2D:
        temp_r1_32 = arg0->unk1B4;
        temp_r3_10 = ((temp_r1_32 * 4) + arg0)->unk20;
        if (temp_r1_32 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_32 - 1);
        }
        temp_r0_24 = arg0->unk354;
        if (temp_r0_24 != 0) {
            if (temp_r3_10 <= (u32) arg0->unk10) {
                var_r1_6 = arg0->unk18 + *((temp_r3_10 * 4) + arg0->unk14);
            } else {
                var_r1_6 = 0x080F9EB8;
            }
            func_08012720(temp_r0_24, var_r1_6);
        }
        goto block_1708;
    case 0x2E:
        if (arg0->unk354 != 0) {
            func_0801274C();
        }
        goto block_1708;
    case 0x24:
        temp_r3_11 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_33 = arg0->unk1B4;
        temp_r0_25 = *(temp_r3_11 + ((temp_r1_33 * 4) - 4));
        if (temp_r1_33 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_33 - 1);
        }
        temp_r1_34 = arg0->unk1B4;
        temp_r7_9 = *(temp_r3_11 + ((temp_r1_34 * 4) - 4));
        if (temp_r1_34 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_34 - 1);
        }
        temp_r1_35 = arg0->unk1B4;
        temp_r3_12 = *(temp_r3_11 + ((temp_r1_35 * 4) - 4));
        if (temp_r1_35 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_35 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_12 = arg0->unk10;
            if (temp_r3_12 <= temp_r4_12) {
                var_r6_2 = arg0->unk18 + *((temp_r3_12 * 4) + arg0->unk14);
            } else {
                var_r6_2 = 0x080F9EB8;
            }
            if (temp_r7_9 <= temp_r4_12) {
                var_r2_2 = arg0->unk18 + *((temp_r7_9 * 4) + arg0->unk14);
            } else {
                var_r2_2 = 0x080F9EB8;
            }
            if (temp_r0_25 <= temp_r4_12) {
                var_r3 = arg0->unk18 + *((temp_r0_25 * 4) + arg0->unk14);
            } else {
                var_r3 = 0x080F9EB8;
            }
            sp0 = 0;
            sp4 = 0;
            func_08012860(arg0->unk354, var_r6_2, var_r2_2, var_r3);
        }
        goto block_530;
    case 0x25:
        temp_r3_13 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_36 = arg0->unk1B4;
        temp_r0_26 = *(temp_r3_13 + ((temp_r1_36 * 4) - 4));
        if (temp_r1_36 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_36 - 1);
        }
        temp_r1_37 = arg0->unk1B4;
        temp_r0_27 = *(temp_r3_13 + ((temp_r1_37 * 4) - 4));
        if (temp_r1_37 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_37 - 1);
        }
        temp_r1_38 = arg0->unk1B4;
        temp_r6_7 = *(temp_r3_13 + ((temp_r1_38 * 4) - 4));
        if (temp_r1_38 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_38 - 1);
        }
        temp_r1_39 = arg0->unk1B4;
        temp_r3_14 = *(temp_r3_13 + ((temp_r1_39 * 4) - 4));
        if (temp_r1_39 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_39 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_13 = arg0->unk10;
            if (temp_r3_14 <= temp_r4_13) {
                var_r7 = arg0->unk18 + *((temp_r3_14 * 4) + arg0->unk14);
            } else {
                var_r7 = 0x080F9EB8;
            }
            if (temp_r6_7 <= temp_r4_13) {
                var_r2_3 = arg0->unk18 + *((temp_r6_7 * 4) + arg0->unk14);
            } else {
                var_r2_3 = 0x080F9EB8;
            }
            if (temp_r0_27 <= temp_r4_13) {
                var_r3_2 = arg0->unk18 + *((temp_r0_27 * 4) + arg0->unk14);
            } else {
                var_r3_2 = 0x080F9EB8;
            }
            if (temp_r0_26 <= temp_r4_13) {
                var_r1_7 = arg0->unk18 + *((temp_r0_26 * 4) + arg0->unk14);
            } else {
                var_r1_7 = 0x080F9EB8;
            }
            sp0 = var_r1_7;
            sp4 = 0;
            func_08012860(arg0->unk354, var_r7, var_r2_3, var_r3_2);
        }
        goto block_530;
    case 0x26:
        temp_r3_15 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_40 = arg0->unk1B4;
        temp_r0_28 = *(temp_r3_15 + ((temp_r1_40 * 4) - 4));
        if (temp_r1_40 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_40 - 1);
        }
        temp_r1_41 = arg0->unk1B4;
        temp_r0_29 = *(temp_r3_15 + ((temp_r1_41 * 4) - 4));
        if (temp_r1_41 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_41 - 1);
        }
        temp_r1_42 = arg0->unk1B4;
        temp_r0_30 = *(temp_r3_15 + ((temp_r1_42 * 4) - 4));
        if (temp_r1_42 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_42 - 1);
        }
        temp_r1_43 = arg0->unk1B4;
        temp_r6_8 = *(temp_r3_15 + ((temp_r1_43 * 4) - 4));
        if (temp_r1_43 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_43 - 1);
        }
        temp_r1_44 = arg0->unk1B4;
        temp_r3_16 = *(temp_r3_15 + ((temp_r1_44 * 4) - 4));
        if (temp_r1_44 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_44 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_14 = arg0->unk10;
            if (temp_r3_16 <= temp_r4_14) {
                var_r7_2 = arg0->unk18 + *((temp_r3_16 * 4) + arg0->unk14);
            } else {
                var_r7_2 = 0x080F9EB8;
            }
            if (temp_r6_8 <= temp_r4_14) {
                var_r2_4 = arg0->unk18 + *((temp_r6_8 * 4) + arg0->unk14);
            } else {
                var_r2_4 = 0x080F9EB8;
            }
            if (temp_r0_30 <= temp_r4_14) {
                var_r3_3 = arg0->unk18 + *((temp_r0_30 * 4) + arg0->unk14);
            } else {
                var_r3_3 = 0x080F9EB8;
            }
            if (temp_r0_29 <= temp_r4_14) {
                var_r6_3 = arg0->unk18 + *((temp_r0_29 * 4) + arg0->unk14);
            } else {
                var_r6_3 = 0x080F9EB8;
            }
            if (temp_r0_28 <= temp_r4_14) {
                var_r1_8 = arg0->unk18 + *((temp_r0_28 * 4) + arg0->unk14);
            } else {
                var_r1_8 = 0x080F9EB8;
            }
            sp0 = var_r6_3;
            sp4 = var_r1_8;
            func_08012860(arg0->unk354, var_r7_2, var_r2_4, var_r3_3);
        }
        goto block_530;
    case 0x27:
        temp_r3_17 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_45 = arg0->unk1B4;
        temp_r6_9 = *(temp_r3_17 + ((temp_r1_45 * 4) - 4));
        if (temp_r1_45 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_45 - 1);
        }
        temp_r1_46 = arg0->unk1B4;
        temp_r3_18 = *(temp_r3_17 + ((temp_r1_46 * 4) - 4));
        if (temp_r1_46 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_46 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_15 = arg0->unk10;
            if (temp_r3_18 <= temp_r4_15) {
                var_r3_4 = arg0->unk18 + *((temp_r3_18 * 4) + arg0->unk14);
            } else {
                var_r3_4 = 0x080F9EB8;
            }
            if (temp_r6_9 <= temp_r4_15) {
                var_r2_5 = arg0->unk18 + *((temp_r6_9 * 4) + arg0->unk14);
            } else {
                var_r2_5 = 0x080F9EB8;
            }
            sp0 = 0;
            sp4 = 0;
            sp8 = 0;
            func_080128D0(arg0->unk354, var_r3_4, var_r2_5, 0);
        }
        goto block_530;
    case 0x28:
        temp_r3_19 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_47 = arg0->unk1B4;
        temp_r0_31 = *(temp_r3_19 + ((temp_r1_47 * 4) - 4));
        if (temp_r1_47 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_47 - 1);
        }
        temp_r1_48 = arg0->unk1B4;
        temp_r7_10 = *(temp_r3_19 + ((temp_r1_48 * 4) - 4));
        if (temp_r1_48 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_48 - 1);
        }
        temp_r1_49 = arg0->unk1B4;
        temp_r3_20 = *(temp_r3_19 + ((temp_r1_49 * 4) - 4));
        if (temp_r1_49 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_49 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_16 = arg0->unk10;
            if (temp_r3_20 <= temp_r4_16) {
                var_r6_4 = arg0->unk18 + *((temp_r3_20 * 4) + arg0->unk14);
            } else {
                var_r6_4 = 0x080F9EB8;
            }
            if (temp_r7_10 <= temp_r4_16) {
                var_r2_6 = arg0->unk18 + *((temp_r7_10 * 4) + arg0->unk14);
            } else {
                var_r2_6 = 0x080F9EB8;
            }
            if (temp_r0_31 <= temp_r4_16) {
                var_r3_5 = arg0->unk18 + *((temp_r0_31 * 4) + arg0->unk14);
            } else {
                var_r3_5 = 0x080F9EB8;
            }
            sp0 = 0;
            sp4 = 0;
            sp8 = 0;
            func_080128D0(arg0->unk354, var_r6_4, var_r2_6, var_r3_5);
        }
        goto block_530;
    case 0x29:
        temp_r3_21 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_50 = arg0->unk1B4;
        temp_r0_32 = *(temp_r3_21 + ((temp_r1_50 * 4) - 4));
        if (temp_r1_50 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_50 - 1);
        }
        temp_r1_51 = arg0->unk1B4;
        temp_r0_33 = *(temp_r3_21 + ((temp_r1_51 * 4) - 4));
        if (temp_r1_51 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_51 - 1);
        }
        temp_r1_52 = arg0->unk1B4;
        temp_r6_10 = *(temp_r3_21 + ((temp_r1_52 * 4) - 4));
        if (temp_r1_52 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_52 - 1);
        }
        temp_r1_53 = arg0->unk1B4;
        temp_r3_22 = *(temp_r3_21 + ((temp_r1_53 * 4) - 4));
        if (temp_r1_53 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_53 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_17 = arg0->unk10;
            if (temp_r3_22 <= temp_r4_17) {
                var_r7_3 = arg0->unk18 + *((temp_r3_22 * 4) + arg0->unk14);
            } else {
                var_r7_3 = 0x080F9EB8;
            }
            if (temp_r6_10 <= temp_r4_17) {
                var_r2_7 = arg0->unk18 + *((temp_r6_10 * 4) + arg0->unk14);
            } else {
                var_r2_7 = 0x080F9EB8;
            }
            if (temp_r0_33 <= temp_r4_17) {
                var_r3_6 = arg0->unk18 + *((temp_r0_33 * 4) + arg0->unk14);
            } else {
                var_r3_6 = 0x080F9EB8;
            }
            if (temp_r0_32 <= temp_r4_17) {
                var_r1_9 = arg0->unk18 + *((temp_r0_32 * 4) + arg0->unk14);
            } else {
                var_r1_9 = 0x080F9EB8;
            }
            sp0 = var_r1_9;
            sp4 = 0;
            sp8 = 0;
            func_080128D0(arg0->unk354, var_r7_3, var_r2_7, var_r3_6);
        }
        goto block_530;
    case 0x2A:
        temp_r3_23 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_54 = arg0->unk1B4;
        temp_r0_34 = *(temp_r3_23 + ((temp_r1_54 * 4) - 4));
        if (temp_r1_54 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_54 - 1);
        }
        temp_r1_55 = arg0->unk1B4;
        temp_r0_35 = *(temp_r3_23 + ((temp_r1_55 * 4) - 4));
        if (temp_r1_55 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_55 - 1);
        }
        temp_r1_56 = arg0->unk1B4;
        temp_r0_36 = *(temp_r3_23 + ((temp_r1_56 * 4) - 4));
        if (temp_r1_56 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_56 - 1);
        }
        temp_r1_57 = arg0->unk1B4;
        temp_r6_11 = *(temp_r3_23 + ((temp_r1_57 * 4) - 4));
        if (temp_r1_57 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_57 - 1);
        }
        temp_r1_58 = arg0->unk1B4;
        temp_r3_24 = *(temp_r3_23 + ((temp_r1_58 * 4) - 4));
        if (temp_r1_58 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_58 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_18 = arg0->unk10;
            if (temp_r3_24 <= temp_r4_18) {
                var_r7_4 = arg0->unk18 + *((temp_r3_24 * 4) + arg0->unk14);
            } else {
                var_r7_4 = 0x080F9EB8;
            }
            if (temp_r6_11 <= temp_r4_18) {
                var_r2_8 = arg0->unk18 + *((temp_r6_11 * 4) + arg0->unk14);
            } else {
                var_r2_8 = 0x080F9EB8;
            }
            if (temp_r0_36 <= temp_r4_18) {
                var_r3_7 = arg0->unk18 + *((temp_r0_36 * 4) + arg0->unk14);
            } else {
                var_r3_7 = 0x080F9EB8;
            }
            if (temp_r0_35 <= temp_r4_18) {
                var_r6_5 = arg0->unk18 + *((temp_r0_35 * 4) + arg0->unk14);
            } else {
                var_r6_5 = 0x080F9EB8;
            }
            if (temp_r0_34 <= temp_r4_18) {
                var_r1_10 = arg0->unk18 + *((temp_r0_34 * 4) + arg0->unk14);
            } else {
                var_r1_10 = 0x080F9EB8;
            }
            sp0 = var_r6_5;
            sp4 = var_r1_10;
            sp8 = 0;
            func_080128D0(arg0->unk354, var_r7_4, var_r2_8, var_r3_7);
        }
        goto block_530;
    case 0x2B:
        temp_r3_25 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_59 = arg0->unk1B4;
        temp_r0_37 = *(temp_r3_25 + ((temp_r1_59 * 4) - 4));
        if (temp_r1_59 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_59 - 1);
        }
        temp_r1_60 = arg0->unk1B4;
        temp_r0_38 = *(temp_r3_25 + ((temp_r1_60 * 4) - 4));
        if (temp_r1_60 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_60 - 1);
        }
        temp_r1_61 = arg0->unk1B4;
        temp_r0_39 = *(temp_r3_25 + ((temp_r1_61 * 4) - 4));
        if (temp_r1_61 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_61 - 1);
        }
        temp_r1_62 = arg0->unk1B4;
        temp_r7_11 = *(temp_r3_25 + ((temp_r1_62 * 4) - 4));
        if (temp_r1_62 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_62 - 1);
        }
        temp_r1_63 = arg0->unk1B4;
        temp_r6_12 = *(temp_r3_25 + ((temp_r1_63 * 4) - 4));
        if (temp_r1_63 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_63 - 1);
        }
        temp_r1_64 = arg0->unk1B4;
        temp_r3_26 = *(temp_r3_25 + ((temp_r1_64 * 4) - 4));
        if (temp_r1_64 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_64 - 1);
        }
        if (arg0->unk354 != 0) {
            temp_r4_19 = arg0->unk10;
            if (temp_r3_26 <= temp_r4_19) {
                var_r8 = arg0->unk18 + *((temp_r3_26 * 4) + arg0->unk14);
            } else {
                var_r8 = 0x080F9EB8;
            }
            if (temp_r6_12 <= temp_r4_19) {
                var_r2_9 = arg0->unk18 + *((temp_r6_12 * 4) + arg0->unk14);
            } else {
                var_r2_9 = 0x080F9EB8;
            }
            if (temp_r7_11 <= temp_r4_19) {
                var_r3_8 = arg0->unk18 + *((temp_r7_11 * 4) + arg0->unk14);
            } else {
                var_r3_8 = 0x080F9EB8;
            }
            if (temp_r0_39 <= temp_r4_19) {
                var_r7_5 = arg0->unk18 + *((temp_r0_39 * 4) + arg0->unk14);
            } else {
                var_r7_5 = 0x080F9EB8;
            }
            if (temp_r0_38 <= temp_r4_19) {
                var_r6_6 = arg0->unk18 + *((temp_r0_38 * 4) + arg0->unk14);
            } else {
                var_r6_6 = 0x080F9EB8;
            }
            if (temp_r0_37 <= temp_r4_19) {
                var_r1_11 = arg0->unk18 + *((temp_r0_37 * 4) + arg0->unk14);
            } else {
                var_r1_11 = 0x080F9EB8;
            }
            sp0 = var_r7_5;
            sp4 = var_r6_6;
            sp8 = var_r1_11;
            func_080128D0(arg0->unk354, var_r8, var_r2_9, var_r3_8);
        }
        goto block_530;
    case 0x2F:
        temp_r2_10 = arg0->unk1B4;
        if (temp_r2_10 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_10 - 1);
        }
        temp_r0_40 = arg0->unk354;
        if (temp_r0_40 != 0) {
            func_08012760(temp_r0_40, ((temp_r2_10 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x30:
        if (arg0->unk354 != 0) {
            func_0801278C();
        }
        goto block_1708;
    case 0x31:
        temp_r2_11 = arg0->unk1B4;
        if (temp_r2_11 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_11 - 1);
        }
        temp_r0_41 = arg0->unk354;
        if (temp_r0_41 != 0) {
            func_080127A0(temp_r0_41, ((temp_r2_11 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x32:
        if (arg0->unk354 != 0) {
            func_0801284C();
        }
        goto block_1708;
    case 0x33:
        temp_r6_13 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_65 = arg0->unk1B4;
        if (temp_r1_65 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_65 - 1);
        }
        temp_r3_27 = arg0->unk1B4;
        if (temp_r3_27 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_27 - 1);
        }
        temp_r1_66 = arg0->unk354;
        if (temp_r1_66 == 0) {

        } else {
            sp0.unk0 = 1;
            func_0801297C(temp_r1_66, *(temp_r6_13 + ((temp_r3_27 * 4) - 4)), *(temp_r6_13 + ((temp_r1_65 * 4) - 4)), 1);
        }
        goto block_530;
    case 0x34:
        temp_r6_14 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_67 = arg0->unk1B4;
        if (temp_r1_67 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_67 - 1);
        }
        temp_r3_28 = arg0->unk1B4;
        if (temp_r3_28 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_28 - 1);
        }
        temp_r1_68 = arg0->unk354;
        if (temp_r1_68 == 0) {

        } else {
            sp0.unk0 = 1;
            func_0801297C(temp_r1_68, *(temp_r6_14 + ((temp_r3_28 * 4) - 4)), *(temp_r6_14 + ((temp_r1_67 * 4) - 4)), 0);
        }
        goto block_530;
    case 0x35:
        temp_r6_15 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_69 = arg0->unk1B4;
        if (temp_r1_69 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_69 - 1);
        }
        temp_r3_29 = arg0->unk1B4;
        if (temp_r3_29 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_29 - 1);
        }
        temp_r1_70 = arg0->unk354;
        if (temp_r1_70 == 0) {

        } else {
            sp0.unk0 = 0;
            func_0801297C(temp_r1_70, *(temp_r6_15 + ((temp_r3_29 * 4) - 4)), *(temp_r6_15 + ((temp_r1_69 * 4) - 4)), 0);
        }
        goto block_530;
    case 0x36:
        temp_r2_12 = arg0->unk1B4;
        if (temp_r2_12 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_12 - 1);
        }
        temp_r0_42 = arg0->unk354;
        if (temp_r0_42 == 0) {

        } else {
            func_08012BAC(temp_r0_42, ((temp_r2_12 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0x37:
        temp_r2_13 = arg0->unk1B4;
        if (temp_r2_13 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_13 - 1);
        }
        temp_r0_43 = arg0->unk354;
        if (temp_r0_43 != 0) {
            func_08012B04(temp_r0_43, ((temp_r2_13 * 4) + arg0)->unk20, 0);
        }
        goto block_1708;
    case 0x38:
        temp_r6_16 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_71 = arg0->unk1B4;
        if (temp_r1_71 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_71 - 1);
        }
        temp_r3_30 = arg0->unk1B4;
        if (temp_r3_30 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_30 - 1);
        }
        temp_r0_44 = arg0->unk354;
        if (temp_r0_44 != 0) {
            func_08012AA4(temp_r0_44, *(temp_r6_16 + ((temp_r3_30 * 4) - 4)), *(temp_r6_16 + ((temp_r1_71 * 4) - 4)));
        }
        goto block_1708;
    case 0x39:
        temp_r7_12 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_72 = arg0->unk1B4;
        if (temp_r1_72 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_72 - 1);
        }
        temp_r1_73 = arg0->unk1B4;
        if (temp_r1_73 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_73 - 1);
        }
        temp_r4_20 = arg0->unk1B4;
        if (temp_r4_20 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_20 - 1);
        }
        temp_r0_45 = arg0->unk354;
        if (temp_r0_45 != 0) {
            func_08012ADC(temp_r0_45, *(temp_r7_12 + ((temp_r4_20 * 4) - 4)), *(temp_r7_12 + ((temp_r1_73 * 4) - 4)), *(temp_r7_12 + ((temp_r1_72 * 4) - 4)));
        }
        goto block_1708;
    case 0x3A:
        temp_r4_21 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_74 = arg0->unk1B4;
        temp_r6_17 = *(temp_r4_21 + ((temp_r1_74 * 4) - 4));
        if (temp_r1_74 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_74 - 1);
        }
        temp_r2_14 = arg0->unk1B4;
        if (temp_r2_14 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_14 - 1);
        }
        temp_r0_46 = arg0->unk354;
        if (temp_r0_46 != 0) {
            if (temp_r6_17 <= (u32) arg0->unk10) {
                var_r2_10 = arg0->unk18 + *((temp_r6_17 * 4) + arg0->unk14);
            } else {
                var_r2_10 = 0x080F9EB8;
            }
            func_08012ACC(temp_r0_46, *(temp_r4_21 + ((temp_r2_14 * 4) - 4)), var_r2_10);
        }
        goto block_1708;
    case 0x3B:
        var_r4_2 = rand() & 0x7FFF;
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
block_1692:
        var_r3_9 = *var_r1_12;
        if (var_r3_9 <= 0x63U) {
            *((u8 *)var_r2_11 + (var_r3_9 * 4)) = (s32) var_r4_2;
block_1694:
            *var_r1_12 = var_r3_9 + 1;
        }
        goto block_1708;
    case 0x3C:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_15 = arg0->unk1B4;
        temp_r7_13 = *(var_r6 + ((temp_r2_15 * 4) - 4));
        if (temp_r2_15 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_15 - 1);
        }
        temp_r1_75 = arg0->unk1B4;
        temp_r5 = *(var_r6 + ((temp_r1_75 * 4) - 4));
        if (temp_r1_75 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_75 - 1);
        }
        if (temp_r5 <= temp_r7_13) {
            var_r2 = (rand() % (s32) ((temp_r7_13 - temp_r5) + 1)) + temp_r5;
            goto block_1612;
        }
        temp_r2_16 = arg0->unk1B4;
        if (temp_r2_16 <= 0x63U) {
            var_r0 = var_r6 + (temp_r2_16 * 4);
            var_r1_13 = 0;
block_1505:
            *var_r0 = var_r1_13;
            *var_r4 = arg0->unk1B4 + 1;
        }
        goto block_1708;
    case 0x3D:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_17 = arg0->unk1B4;
        if (temp_r2_17 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_17 - 1);
        }
        var_r2 = func_0804590C(arg0, *(var_r6 + ((temp_r2_17 * 4) - 4)));
        goto block_1612;
    case 0x3E:
        temp_r6_18 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_76 = arg0->unk1B4;
        if (temp_r1_76 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_76 - 1);
        }
        temp_r3_31 = arg0->unk1B4;
        if (temp_r3_31 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_31 - 1);
        }
        func_08048FFC(arg0, *(temp_r6_18 + ((temp_r3_31 * 4) - 4)), *(temp_r6_18 + ((temp_r1_76 * 4) - 4)));
        goto block_1708;
    case 0x13:
        temp_r2_18 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r4_22 = arg0->unk1B4;
        temp_r3_32 = *(temp_r2_18 + ((temp_r4_22 * 4) - 4));
        var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
        if (temp_r4_22 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_22 - 1);
        }
        switch (temp_r3_32) {
        case 0:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_18;
                var_r1_14 = 1;
block_1106:
                *var_r0_2 = var_r1_14;
                *var_r6_7 = var_r3_10 + 1;
            }
            break;
        case 1:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_18;
                var_r1_14 = 0;
                goto block_1106;
            }
            break;
        case 2:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_18;
                var_r1_14 = 3;
                goto block_1106;
            }
            break;
        case 3:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_18;
                var_r1_14 = 2;
                goto block_1106;
            }
            break;
        default:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_18;
                var_r1_14 = 1;
                goto block_1106;
            }
            break;
        }
        goto block_1708;
    case 0x14:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_19 = arg0->unk1B4;
        if (temp_r2_19 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_19 - 1);
        }
        temp_r1_77 = arg0->unk354;
        if (temp_r1_77 != 0) {
            var_r2 = func_08012134(temp_r1_77, *(var_r6 + ((temp_r2_19 * 4) - 4)));
            goto block_1612;
        }
        goto block_1425;
        goto block_1708;
    case 0x3F:
        var_r4_2 = func_0800F190(arg0->unk350 + 0x1C2C);
block_1691:
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x4B:
        temp_r4_23 = arg0->unk350 + 0x1C2C;
        if (((func_0800F190(temp_r4_23) << 0x18) == 0) && (temp_r0_47 = func_0800F204(temp_r4_23), (temp_r0_47 == 1)) && (sp18 = func_0800F258(temp_r4_23), ((CanBeDiscarded__C7Article() << 0x18) != 0))) {
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            var_r3_9 = arg0->unk1B4;
            if (var_r3_9 <= 0x63U) {
                *((u8 *)(GenObj *)((u8 *)arg0 + 0x24) + (var_r3_9 * 4)) = temp_r0_47;
                goto block_1694;
            }
        } else {
            var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            temp_r3_33 = arg0->unk1B4;
            if (temp_r3_33 <= 0x63U) {
                var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_33 * 4);
                var_r1_15 = 0;
block_1701:
                *var_r0_3 = var_r1_15;
                *var_r2_12 = arg0->unk1B4 + 1;
            }
        }
        goto block_1708;
    case 0x40:
        temp_r4_24 = arg0->unk350 + 0x1C2C;
        if ((func_0800F190(temp_r4_24) << 0x18) == 0) {
            var_r4_2 = (u8) func_0800F204(temp_r4_24);
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r3_34 = arg0->unk1B4;
        if (temp_r3_34 <= 0x63U) {
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_34 * 4);
            var_r1_15 = -1;
            goto block_1701;
        }
        goto block_1708;
    case 0x41:
        temp_r4_25 = arg0->unk350 + 0x1C2C;
        if ((func_0800F190(temp_r4_25) << 0x18) == 0) {
            var_r4_2 = func_0800F388(temp_r4_25);
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r3_35 = arg0->unk1B4;
        if (temp_r3_35 <= 0x63U) {
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_35 * 4);
            var_r1_15 = 0;
            goto block_1701;
        }
        goto block_1708;
    case 0x42:
        temp_r4_26 = arg0->unk350 + 0x1C2C;
        if (((func_0800F190(temp_r4_26) << 0x18) == 0) && (func_0800F204(temp_r4_26) == 0)) {
            func_0800F20C(&spC, temp_r4_26);
            var_r4_2 = (u8) GetId__C4Food(&spC);
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r3_36 = arg0->unk1B4;
        if (temp_r3_36 <= 0x63U) {
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_36 * 4);
            var_r1_15 = -1;
            goto block_1701;
        }
        goto block_1708;
    case 0x43:
        temp_r4_27 = arg0->unk350 + 0x1C2C;
        if (((func_0800F190(temp_r4_27) << 0x18) == 0) && (func_0800F204(temp_r4_27) == 1)) {
            sp0.unk19 = func_0800F258(temp_r4_27);
            var_r4_2 = (u8) GetId__C7Article();
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r3_37 = arg0->unk1B4;
        if (temp_r3_37 <= 0x63U) {
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_37 * 4);
            var_r1_15 = -1;
            goto block_1701;
        }
        goto block_1708;
    case 0x44:
        temp_r4_28 = arg0->unk350 + 0x1C2C;
        if (((func_0800F190(temp_r4_28) << 0x18) == 0) && (func_0800F204(temp_r4_28) == 3)) {
            var_r4_2 = (u8) func_0800F344(temp_r4_28);
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r3_38 = arg0->unk1B4;
        if (temp_r3_38 <= 0x63U) {
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_38 * 4);
            var_r1_15 = -1;
            goto block_1701;
        }
        goto block_1708;
    case 0x45:
        if (arg0->unk354 == 0) {

        } else {
            func_080141EC();
        }
        goto block_530;
    case 0x46:
        if (arg0->unk354 != 0) {
            func_08014214();
        }
        goto block_1708;
    case 0x47:
        temp_r2_20 = arg0->unk1B4;
        if (temp_r2_20 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_20 - 1);
        }
        temp_r5_2 = arg0->unk354;
        if (temp_r5_2 == 0) {

        } else {
            __4FoodUi(&sp10, ((temp_r2_20 * 4) + arg0)->unk20);
            __12RucksackItemG4Food(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10));
            func_08014164(temp_r5_2, &spC, 0);
        }
        goto block_530;
    case 0x48:
        temp_r2_21 = arg0->unk1B4;
        if (temp_r2_21 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_21 - 1);
        }
        temp_r5_3 = arg0->unk354;
        if (temp_r5_3 != 0) {
            __7ArticleUi(&(GenObj *)((u8 *)sp0 + 0x1A), ((temp_r2_21 * 4) + arg0)->unk20);
            __12RucksackItemG7Article(&spC, sp0.unk1A);
            func_08014164(temp_r5_3, &spC, 0);
        }
        goto block_530;
    case 0x49:
        temp_r2_22 = arg0->unk1B4;
        if (temp_r2_22 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_22 - 1);
        }
        temp_r5_4 = arg0->unk354;
        if (temp_r5_4 != 0) {
            __4FoodUi(&sp10, ((temp_r2_22 * 4) + arg0)->unk20);
            __12RucksackItemG4Food(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10));
            func_08014164(temp_r5_4, &spC, 1);
        }
        goto block_530;
    case 0x4A:
        temp_r2_23 = arg0->unk1B4;
        if (temp_r2_23 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_23 - 1);
        }
        temp_r5_5 = arg0->unk354;
        if (temp_r5_5 != 0) {
            __7ArticleUi(&(GenObj *)((u8 *)sp0 + 0x1B), ((temp_r2_23 * 4) + arg0)->unk20);
            __12RucksackItemG7Article(&spC, sp0.unk1B);
            func_08014164(temp_r5_5, &spC, 1);
        }
        goto block_530;
    case 0x4C:
        var_r4_3 = 0;
        if (arg0->unk354 != 0) {
            var_r4_3 = func_0801412C();
        }
        temp_r3_39 = arg0->unk1B4;
        if (temp_r3_39 <= 0x63U) {
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_39 * 4)) = (s32) var_r4_3;
            arg0->unk1B4 = (u32) (temp_r3_39 + 1);
        }
        if (var_r4_3 != 0) {
            goto block_530;
        }
        goto block_1708;
    case 0x4D:
        if (arg0->unk354 != 0) {
            func_080141C4();
        }
        goto block_530;
    case 0x4E:
        temp_r4_29 = arg0->unk350 + 0x1C34;
        var_r6_8 = -1;
        if ((IsEmpty__C9ToolStack(temp_r4_29) << 0x18) == 0) {
            sp1C = GetTool__C9ToolStack(temp_r4_29);
            var_r6_8 = GetId__C4Tool();
        }
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        var_r3_9 = arg0->unk1B4;
        if (var_r3_9 <= 0x63U) {
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x24) + (var_r3_9 * 4)) = var_r6_8;
            goto block_1694;
        }
        goto block_1708;
    case 0x4F:
        temp_r4_30 = arg0->unk350 + 0x1C34;
        var_r6_9 = -1U;
        if ((IsEmpty__C9ToolStack(temp_r4_30) << 0x18) == 0) {
            var_r6_9 = GetAmount__C9ToolStack(temp_r4_30);
        }
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        var_r3_9 = arg0->unk1B4;
        if (var_r3_9 <= 0x63U) {
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x24) + (var_r3_9 * 4)) = var_r6_9;
            goto block_1694;
        }
        goto block_1708;
    case 0x50:
        temp_r4_31 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_78 = arg0->unk1B4;
        temp_r6_19 = *(temp_r4_31 + ((temp_r1_78 * 4) - 4));
        if (temp_r1_78 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_78 - 1);
        }
        temp_r2_24 = arg0->unk1B4;
        if (temp_r2_24 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_24 - 1);
        }
        temp_r5_6 = arg0->unk350 + 0x1C34;
        __4ToolUi(&(GenObj *)((u8 *)sp0 + 0x1D), *(temp_r4_31 + ((temp_r2_24 * 4) - 4)));
        __9ToolStackG4ToolUi(&spC, sp0.unk1D, temp_r6_19);
        var_r0_4 = temp_r5_6;
block_558:
        memcpy(var_r0_4, &spC, 2);
        goto block_1708;
    case 0x146:
        temp_r7_14 = arg0->unk350 + 0x1BD8;
        var_r6_10 = 0;
loop_554:
        if (var_r6_10 <= 9U) {
            func_0800EC4C(temp_r7_14);
            temp_r4_32 = arg0->unk350 + 0x1C34;
            if ((IsEmpty__C9ToolStack(temp_r4_32) << 0x18) != 0) {

            } else {
                sp0.unk1E = GetTool__C9ToolStack(temp_r4_32);
                if ((GetId__C4Tool() == 5) || (sp0.unk1F = GetTool__C9ToolStack(temp_r4_32), (GetId__C4Tool() == 0xD)) || (sp20 = GetTool__C9ToolStack(temp_r4_32), (GetId__C4Tool() == 0x15)) || (sp0.unk21 = GetTool__C9ToolStack(temp_r4_32), (GetId__C4Tool() == 0x1D)) || (sp0.unk22 = GetTool__C9ToolStack(temp_r4_32), (GetId__C4Tool() == 0x25)) || (sp0.unk23 = GetTool__C9ToolStack(temp_r4_32), (GetId__C4Tool() == 0x2D))) {
                    var_r6_10 += 1;
                    goto loop_554;
                }
            }
        }
        goto block_1708;
    case 0x51:
        temp_r4_33 = arg0->unk350 + 0x1C34;
        __9ToolStack(&spC);
        var_r0_4 = temp_r4_33;
        goto block_558;
    case 0x52:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_25 = arg0->unk1B4;
        if (temp_r2_25 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_25 - 1);
        }
        var_r2 = GetFirstSlotWithFood__C8RucksackUi(arg0->unk350 + 0x1C38, *(var_r6 + ((temp_r2_25 * 4) - 4)));
        goto block_1612;
    case 0x53:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_26 = arg0->unk1B4;
        if (temp_r2_26 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_26 - 1);
        }
        var_r2 = GetFirstSlotWithArticle__C8RucksackUi(arg0->unk350 + 0x1C38, *(var_r6 + ((temp_r2_26 * 4) - 4)));
        goto block_1612;
    case 0x54:
        temp_r2_27 = arg0->unk1B4;
        if (temp_r2_27 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_27 - 1);
        }
        temp_r4_34 = GetItemAt__8RucksackUi(arg0->unk350 + 0x1C38, ((temp_r2_27 * 4) + arg0)->unk20);
        __12RucksackItem(&spC);
        *temp_r4_34 = spC;
        goto block_1708;
    case 0x55:
        var_r0_5 = GetFirstFreeToolSlot__C8Rucksack(arg0->unk350 + 0x1C38);
block_1690:
        var_r4_2 = (u8) var_r0_5;
        goto block_1691;
    case 0x56:
        var_r4_2 = (u8) GetFirstFreeItemSlot__C8Rucksack(arg0->unk350 + 0x1C38);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x57:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_79 = arg0->unk1B4;
        if (temp_r1_79 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_79 - 1);
        }
        temp_r3_40 = arg0->unk1B4;
        if (temp_r3_40 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_40 - 1);
        }
        var_r2 = AddAmountOfArticle__8RucksackUiUi(arg0->unk350 + 0x1C38, *(var_r6 + ((temp_r3_40 * 4) - 4)), *(var_r6 + ((temp_r1_79 * 4) - 4)));
        goto block_1612;
    case 0x58:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_80 = arg0->unk1B4;
        if (temp_r1_80 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_80 - 1);
        }
        temp_r3_41 = arg0->unk1B4;
        if (temp_r3_41 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_41 - 1);
        }
        var_r2 = AddAmountOfFood__8RucksackUiUi(arg0->unk350 + 0x1C38, *(var_r6 + ((temp_r3_41 * 4) - 4)), *(var_r6 + ((temp_r1_80 * 4) - 4)));
        goto block_1612;
    case 0x59:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_81 = arg0->unk1B4;
        if (temp_r1_81 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_81 - 1);
        }
        temp_r3_42 = arg0->unk1B4;
        if (temp_r3_42 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_42 - 1);
        }
        var_r2 = AddAmountOfTool__8RucksackUiUi(arg0->unk350 + 0x1C38, *(var_r6 + ((temp_r3_42 * 4) - 4)), *(var_r6 + ((temp_r1_81 * 4) - 4)));
        goto block_1612;
    case 0x77:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_28 = arg0->unk1B4;
        temp_r3_43 = *(var_r6 + ((temp_r2_28 * 4) - 4));
        if (temp_r2_28 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_28 - 1);
        }
        var_r2_13 = temp_r3_43;
        if (temp_r3_43 < 0) {
            var_r2_13 = temp_r3_43 + 7;
        }
        temp_r2_29 = var_r2_13 >> 3;
        var_r2 = (void *) (((s32) *(arg0->unk350 + 0x21DC + temp_r2_29) >> (temp_r3_43 - (temp_r2_29 * 8))) & 1);
        goto block_1612;
    case 0x78:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_30 = arg0->unk1B4;
        temp_r3_44 = *(var_r6 + ((temp_r2_30 * 4) - 4));
        if (temp_r2_30 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_30 - 1);
        }
        var_r2_14 = temp_r3_44;
        if (temp_r3_44 < 0) {
            var_r2_14 = temp_r3_44 + 7;
        }
        temp_r2_31 = var_r2_14 >> 3;
        var_r2 = (void *) (((s32) *(arg0->unk350 + 0x21D4 + temp_r2_31) >> (temp_r3_44 - (temp_r2_31 * 8))) & 1);
        goto block_1612;
    case 0x79:
        temp_r2_32 = arg0->unk1B4;
        temp_r3_45 = ((temp_r2_32 * 4) + arg0)->unk20;
        if (temp_r2_32 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_32 - 1);
        }
        var_r0_6 = temp_r3_45;
        if (temp_r3_45 < 0) {
            var_r0_6 = temp_r3_45 + 7;
        }
        temp_r0_48 = var_r0_6 >> 3;
        temp_r2_33 = arg0->unk350 + 0x21DC + temp_r0_48;
        *temp_r2_33 |= 1 << (temp_r3_45 - (temp_r0_48 * 8));
        goto block_1708;
    case 0x7A:
        temp_r1_82 = arg0->unk1B4;
        temp_r3_46 = ((temp_r1_82 * 4) + arg0)->unk20;
        if (temp_r1_82 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_82 - 1);
        }
        var_r1_16 = temp_r3_46;
        if (temp_r3_46 < 0) {
            var_r1_16 = temp_r3_46 + 7;
        }
        temp_r1_83 = var_r1_16 >> 3;
        temp_r2_34 = arg0->unk350 + 0x21DC + temp_r1_83;
        *temp_r2_34 &= ~(1 << (temp_r3_46 - (temp_r1_83 * 8)));
        goto block_1708;
    case 0x7B:
        temp_r4_35 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_35 = arg0->unk1B4;
        temp_r7_15 = *(((temp_r2_35 * 4) - 4) + temp_r4_35);
        if (temp_r2_35 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_35 - 1);
        }
        temp_r0_49 = arg0->unk350;
        temp_r5_7 = temp_r0_49->unk11;
        sp24 = func_0800E4E8((GenObj *)((u8 *)temp_r0_49 + 0x1BD8));
        var_r3_11 = 0;
        if ((0x7F & temp_r5_7) == (0x7F & func_0809FE74((GenObj *)((u8 *)temp_r0_49 + 0x1CD4), temp_r7_15))) {
            var_r3_11 = 1;
        }
        var_r1_17 = arg0->unk1B4;
        if (var_r1_17 <= 0x63U) {
            *((var_r1_17 * 4) + temp_r4_35) = var_r3_11;
block_1455:
            *var_r6_7 = var_r1_17 + 1;
        }
        goto block_1708;
    case 0x7C:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_36 = arg0->unk1B4;
        if (temp_r2_36 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_36 - 1);
        }
        var_r2 = 0;
        if (func_080A06B0(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_36 * 4) - 4))) != 0) {
            var_r2 = GetFriendship__C3Npc();
        }
        goto block_1612;
    case 0x7D:
        temp_r1_84 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_37 = arg0->unk1B4;
        temp_r4_36 = *(temp_r1_84 + ((temp_r2_37 * 4) - 4));
        if (temp_r2_37 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_37 - 1);
        }
        temp_r2_38 = arg0->unk1B4;
        if (temp_r2_38 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_38 - 1);
        }
        temp_r0_50 = func_080A06B0(arg0->unk350 + 0x1CD4, *(temp_r1_84 + ((temp_r2_38 * 4) - 4)));
        if (temp_r0_50 != 0) {
            AddFriendship__3Npci(temp_r0_50, temp_r4_36);
        }
        goto block_1708;
    case 0x7E:
        temp_r1_85 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_39 = arg0->unk1B4;
        temp_r4_37 = *(temp_r1_85 + ((temp_r2_39 * 4) - 4));
        if (temp_r2_39 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_39 - 1);
        }
        temp_r2_40 = arg0->unk1B4;
        if (temp_r2_40 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_40 - 1);
        }
        temp_r0_51 = func_080A06B0(arg0->unk350 + 0x1CD4, *(temp_r1_85 + ((temp_r2_40 * 4) - 4)));
        if (temp_r0_51 != 0) {
            SetFriendship__3Npci(temp_r0_51, temp_r4_37);
        }
        goto block_1708;
    case 0x7F:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_41 = arg0->unk1B4;
        if (temp_r2_41 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_41 - 1);
        }
        var_r2 = 0;
        if (func_080A06B0(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_41 * 4) - 4))) != 0) {
            var_r2 = GetDaysSinceLastSpoken__C3Npc();
        }
        goto block_1612;
    case 0x80:
        temp_r2_42 = arg0->unk1B4;
        if (temp_r2_42 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_42 - 1);
        }
        if (func_080A06B0(arg0->unk350 + 0x1CD4, ((temp_r2_42 * 4) + arg0)->unk20) != 0) {
            SetSpokenTo__3Npc();
        }
        goto block_1708;
    case 0x81:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_43 = arg0->unk1B4;
        if (temp_r2_43 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_43 - 1);
        }
        var_r2 = 0;
        if (func_080A06B0(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_43 * 4) - 4))) != 0) {
            var_r2 = (void *) HasBeenSpokenToToday__C3Npc();
        }
        goto block_1612;
    case 0x82:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_44 = arg0->unk1B4;
        if (temp_r2_44 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_44 - 1);
        }
        var_r2 = 0;
        if (func_080A06B0(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_44 * 4) - 4))) != 0) {
            var_r2 = (void *) HasBeenSpokenToJustNow__C3Npc();
        }
        goto block_1612;
    case 0x83:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_45 = arg0->unk1B4;
        if (temp_r2_45 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_45 - 1);
        }
        var_r2 = 0;
        if (func_080A06B0(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_45 * 4) - 4))) != 0) {
            var_r2 = (void *) HasBeenMet__C3Npc();
        }
        goto block_1612;
    case 0x84:
        temp_r2_46 = arg0->unk1B4;
        if (temp_r2_46 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_46 - 1);
        }
        if (func_080A06B0(arg0->unk350 + 0x1CD4, ((temp_r2_46 * 4) + arg0)->unk20) != 0) {
            SetGifted__3Npc();
        }
        goto block_1708;
    case 0x85:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_47 = arg0->unk1B4;
        if (temp_r2_47 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_47 - 1);
        }
        var_r2 = 0;
        if (func_080A06B0(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_47 * 4) - 4))) != 0) {
            var_r2 = (void *) HasBeenGiftedToday__C3Npc();
        }
        goto block_1612;
    case 0x86:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_48 = arg0->unk1B4;
        if (temp_r2_48 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_48 - 1);
        }
        var_r2 = 0;
        if (func_080A0878(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_48 * 4) - 4))) != 0) {
            var_r2 = (void *) GetLove__C12Bachelorette();
        }
        goto block_1612;
    case 0x87:
        temp_r1_86 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_49 = arg0->unk1B4;
        temp_r4_38 = *(temp_r1_86 + ((temp_r2_49 * 4) - 4));
        if (temp_r2_49 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_49 - 1);
        }
        temp_r2_50 = arg0->unk1B4;
        if (temp_r2_50 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_50 - 1);
        }
        temp_r0_52 = func_080A0878(arg0->unk350 + 0x1CD4, *(temp_r1_86 + ((temp_r2_50 * 4) - 4)));
        if (temp_r0_52 != 0) {
            AddLove__12Bachelorettei(temp_r0_52, temp_r4_38);
        }
        goto block_1708;
    case 0x88:
        temp_r1_87 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_51 = arg0->unk1B4;
        temp_r4_39 = *(temp_r1_87 + ((temp_r2_51 * 4) - 4));
        if (temp_r2_51 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_51 - 1);
        }
        temp_r2_52 = arg0->unk1B4;
        if (temp_r2_52 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_52 - 1);
        }
        temp_r0_53 = func_080A0878(arg0->unk350 + 0x1CD4, *(temp_r1_87 + ((temp_r2_52 * 4) - 4)));
        if (temp_r0_53 != 0) {
            SetLove__12Bachelorettei(temp_r0_53, temp_r4_39);
        }
        goto block_1708;
    case 0x89:
        temp_r6_20 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_88 = arg0->unk1B4;
        if (temp_r1_88 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_88 - 1);
        }
        temp_r3_47 = arg0->unk1B4;
        if (temp_r3_47 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_47 - 1);
        }
        temp_r0_54 = arg0->unk354;
        if (temp_r0_54 != 0) {
            func_08014264(temp_r0_54, *(temp_r6_20 + ((temp_r3_47 * 4) - 4)), *(temp_r6_20 + ((temp_r1_88 * 4) - 4)));
        }
        goto block_1708;
    case 0x8A:
        temp_r2_53 = arg0->unk1B4;
        if (temp_r2_53 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_53 - 1);
        }
        temp_r0_55 = arg0->unk354;
        if (temp_r0_55 != 0) {
            func_08014290(temp_r0_55, ((temp_r2_53 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x8B:
        if (arg0->unk354 != 0) {
            func_08012BBC();
        }
        goto block_530;
    case 0x8C:
        temp_r2_54 = arg0->unk1B4;
        if (temp_r2_54 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_54 - 1);
        }
        temp_r0_56 = arg0->unk354;
        if (temp_r0_56 != 0) {
            func_08012C50(temp_r0_56, ((temp_r2_54 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0x96:
        if (arg0->unk354 != 0) {
            func_0801323C();
        }
        goto block_530;
    case 0x97:
        if (arg0->unk354 != 0) {
            func_080132D0();
        }
        goto block_530;
    case 0x8D:
        if (arg0->unk354 != 0) {
            func_08012CF4();
        }
        goto block_530;
    case 0x8E:
        if (arg0->unk354 != 0) {
            func_08012D88();
        }
        goto block_530;
    case 0x8F:
        if (arg0->unk354 != 0) {
            func_08012E1C();
        }
        goto block_530;
    case 0x90:
        if (arg0->unk354 != 0) {
            func_08012EC0();
        }
        goto block_530;
    case 0x91:
        if (arg0->unk354 != 0) {
            func_08012F54();
        }
        goto block_530;
    case 0x92:
        if (arg0->unk354 != 0) {
            func_08012FE8();
        }
        goto block_530;
    case 0x93:
        if (arg0->unk354 != 0) {
            func_08013080();
        }
        goto block_530;
    case 0x94:
        if (arg0->unk354 != 0) {
            func_08013114();
        }
        goto block_530;
    case 0x95:
        if (arg0->unk354 != 0) {
            func_080131A8();
        }
        goto block_530;
    case 0x98:
        temp_r2_55 = arg0->unk1B4;
        if (temp_r2_55 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_55 - 1);
        }
        temp_r0_57 = arg0->unk354;
        if (temp_r0_57 != 0) {
            func_08013364(temp_r0_57, ((temp_r2_55 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0x99:
        if (arg0->unk354 != 0) {
            func_08013408();
        }
        goto block_530;
    case 0x9A:
        if (arg0->unk354 != 0) {
            func_080134A4();
        }
        goto block_530;
    case 0x9B:
        if (arg0->unk354 != 0) {
            func_08013544();
        }
        goto block_530;
    case 0x9C:
        if (arg0->unk354 != 0) {
            func_080135D8();
        }
        goto block_530;
    case 0x9D:
        if (arg0->unk354 != 0) {
            func_0801366C();
        }
        goto block_530;
    case 0x9E:
        if (arg0->unk354 != 0) {
            func_08013700();
        }
        goto block_530;
    case 0x9F:
        if (arg0->unk354 != 0) {
            func_08013794();
        }
        goto block_530;
    case 0xAA:
        if (arg0->unk354 != 0) {
            func_08014034();
        }
        goto block_1708;
    case 0xAB:
        if (arg0->unk354 != 0) {
            func_0801404C();
        }
        goto block_1708;
    case 0xAC:
        if (arg0->unk354 != 0) {
            func_08014064();
        }
        goto block_1708;
    case 0xAD:
        if (arg0->unk354 != 0) {
            func_0801407C();
        }
        goto block_1708;
    case 0xAE:
        if (arg0->unk354 != 0) {
            func_08014094();
        }
        goto block_1708;
    case 0xAF:
        if (arg0->unk354 != 0) {
            func_080140AC();
        }
        goto block_1708;
    case 0xB7:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_56 = arg0->unk1B4;
        if (temp_r2_56 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_56 - 1);
        }
        var_r2 = (void *) HasBushelForEnt__C4CoopUi(arg0->unk350 + 0x410, *(var_r6 + ((temp_r2_56 * 4) - 4)));
        goto block_1612;
    case 0xB8:
        temp_r2_57 = arg0->unk1B4;
        temp_r4_40 = ((temp_r2_57 * 4) + arg0)->unk20;
        if (temp_r2_57 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_57 - 1);
        }
        SetEntBushel__4CoopUi(arg0->unk350 + 0x410, temp_r4_40);
        temp_r0_58 = arg0->unk354;
        if (temp_r0_58 != 0) {
            func_080140DC(temp_r0_58, temp_r4_40);
        }
        goto block_1708;
    case 0xBE:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_58 = arg0->unk1B4;
        temp_r1_89 = *(var_r6 + ((temp_r2_58 * 4) - 4));
        if (temp_r2_58 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_58 - 1);
        }
        if (temp_r1_89 > 0xF) {
            var_r2 = (void *) HasBushelForPregnancyStall__C4BarnUi(arg0->unk350 + 0x5F0, temp_r1_89 - 0x10);
        } else {
            var_r2 = (void *) HasBushelForStall__C4BarnUi(arg0->unk350 + 0x5F0);
        }
        goto block_1612;
    case 0xBF:
        temp_r2_59 = arg0->unk1B4;
        temp_r4_41 = ((temp_r2_59 * 4) + arg0)->unk20;
        if (temp_r2_59 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_59 - 1);
        }
        if (temp_r4_41 > 0xF) {
            SetBushelForPregnancyStall__4BarnUi(arg0->unk350 + 0x5F0, temp_r4_41 - 0x10);
        } else {
            SetBushelForStall__4BarnUi(arg0->unk350 + 0x5F0, temp_r4_41);
        }
        temp_r0_59 = arg0->unk354;
        if (temp_r0_59 != 0) {
            func_080140C4(temp_r0_59, temp_r4_41);
        }
        goto block_1708;
    case 0xC0:
        if (arg0->unk354 != 0) {
            func_080140F4();
        }
        goto block_1708;
    case 0xFC:
        temp_r2_60 = arg0->unk1B4;
        if (temp_r2_60 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_60 - 1);
        }
        temp_r0_60 = arg0->unk354;
        if (temp_r0_60 != 0) {
            func_080142B8(temp_r0_60, ((temp_r2_60 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0xFD:
        if (arg0->unk354 != 0) {
            func_080142D4();
        }
        goto block_1708;
    case 0xB0:
        GetRecordPlayer__9FarmHouse(arg0->unk350 + 0x1F4);
        var_r4_2 = HasAlbum__C12RecordPlayer();
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xB1:
        temp_r6_21 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_61 = arg0->unk1B4;
        var_r1_13 = *(temp_r6_21 + ((temp_r2_61 * 4) - 4));
        if (temp_r2_61 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_61 - 1);
        }
        if (arg0->unk354 != 0) {
            var_r1_13 = func_0801424C();
        }
        temp_r2_62 = arg0->unk1B4;
        if (temp_r2_62 <= 0x63U) {
            var_r0 = temp_r6_21 + (temp_r2_62 * 4);
            goto block_1505;
        }
        goto block_1708;
    case 0xC9:
        if (arg0->unk354 != 0) {
            func_08016BDC();
        }
        goto block_1708;
    case 0xCA:
        if (arg0->unk354 != 0) {
            func_08016BF4();
        }
        goto block_1708;
    case 0xB2:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = (u8) func_08014234();
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xA0:
        if (arg0->unk354 != 0) {
            func_08013828();
        }
        goto block_530;
    case 0xA1:
        if (arg0->unk354 != 0) {
            func_080138C0();
        }
        goto block_530;
    case 0xA2:
        if (arg0->unk354 != 0) {
            func_0801395C();
        }
        goto block_530;
    case 0xA4:
        if (arg0->unk354 != 0) {
            func_08013BDC();
        }
        goto block_530;
    case 0xA5:
        if (arg0->unk354 != 0) {
            func_08013C70();
        }
        goto block_530;
    case 0xA6:
        temp_r2_63 = arg0->unk1B4;
        temp_r3_48 = ((temp_r2_63 * 4) + arg0)->unk20;
        if (temp_r2_63 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_63 - 1);
        }
        temp_r0_61 = arg0->unk354;
        if (temp_r0_61 != 0) {
            func_08013D04(temp_r0_61, (u32) ((0 - temp_r3_48) | temp_r3_48) >> 0x1F);
        }
        goto block_530;
    case 0xA7:
        temp_r2_64 = arg0->unk1B4;
        if (temp_r2_64 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_64 - 1);
        }
        temp_r0_62 = arg0->unk354;
        if (temp_r0_62 != 0) {
            func_08013DC8(temp_r0_62, ((temp_r2_64 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0xA8:
        if (arg0->unk354 != 0) {
            func_08013E6C();
        }
        goto block_530;
    case 0xA9:
        temp_r2_65 = arg0->unk1B4;
        if (temp_r2_65 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_65 - 1);
        }
        temp_r0_63 = arg0->unk354;
        if (temp_r0_63 != 0) {
            func_08013EF8(temp_r0_63, ((temp_r2_65 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0xCB:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_66 = arg0->unk1B4;
        if (temp_r2_66 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_66 - 1);
        }
        var_r2 = (void *)3;
        if (func_080A0930(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_66 * 4) - 4))) != 0) {
            var_r2 = GetCurrentTask__C13HarvestSprite();
        }
        goto block_1612;
    case 0xCC:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_67 = arg0->unk1B4;
        if (temp_r2_67 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_67 - 1);
        }
        var_r2 = 0;
        if (func_080A0930(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_67 * 4) - 4))) != 0) {
            var_r2 = GetWorkDaysLeft__C13HarvestSprite();
        }
        goto block_1612;
    case 0xCD:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_68 = arg0->unk1B4;
        temp_r7_16 = *(var_r6 + ((temp_r2_68 * 4) - 4));
        if (temp_r2_68 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_68 - 1);
        }
        temp_r2_69 = arg0->unk1B4;
        if (temp_r2_69 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_69 - 1);
        }
        temp_r0_64 = func_080A0930(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_69 * 4) - 4)));
        var_r2 = 0;
        if (temp_r0_64 != 0) {
            var_r2 = GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r0_64, temp_r7_16);
        }
        goto block_1612;
    case 0xCE:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_70 = arg0->unk1B4;
        if (temp_r2_70 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_70 - 1);
        }
        var_r2 = 0;
        if (func_080A0930(arg0->unk350 + 0x1CD4, *(var_r6 + ((temp_r2_70 * 4) - 4))) != 0) {
            var_r2 = (void *) HasPlayedMinigameToday__C13HarvestSprite();
        }
        goto block_1612;
    case 0xCF:
        temp_r6_22 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_71 = arg0->unk1B4;
        temp_r7_17 = *(temp_r6_22 + ((temp_r2_71 * 4) - 4));
        if (temp_r2_71 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_71 - 1);
        }
        temp_r2_72 = arg0->unk1B4;
        if (temp_r2_72 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_72 - 1);
        }
        temp_r0_65 = func_080A0930(arg0->unk350 + 0x1CD4, *(temp_r6_22 + ((temp_r2_72 * 4) - 4)));
        var_r1_13 = 0;
        if (temp_r0_65 != 0) {
            temp_r0_66 = GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r0_65, temp_r7_17);
            var_r1_13 = (u32) ((0 - temp_r0_66) | temp_r0_66) >> 0x1F;
        }
        temp_r2_73 = arg0->unk1B4;
        if (temp_r2_73 <= 0x63U) {
            var_r0 = temp_r6_22 + (temp_r2_73 * 4);
            goto block_1505;
        }
        goto block_1708;
    case 0xD0:
        temp_r4_42 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_90 = arg0->unk1B4;
        temp_r7_18 = *(temp_r4_42 + ((temp_r1_90 * 4) - 4));
        if (temp_r1_90 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_90 - 1);
        }
        temp_r2_74 = arg0->unk1B4;
        temp_r6_23 = *(temp_r4_42 + ((temp_r2_74 * 4) - 4));
        if (temp_r2_74 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_74 - 1);
        }
        temp_r2_75 = arg0->unk1B4;
        if (temp_r2_75 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_75 - 1);
        }
        temp_r0_67 = func_080A0930(arg0->unk350 + 0x1CD4, *(temp_r4_42 + ((temp_r2_75 * 4) - 4)));
        if (temp_r0_67 != 0) {
            StartTask__13HarvestSpriteQ213HarvestSprite4Taski(temp_r0_67, temp_r6_23, temp_r7_18);
        }
        goto block_1708;
    case 0xD1:
        temp_r2_76 = arg0->unk1B4;
        if (temp_r2_76 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_76 - 1);
        }
        if (func_080A0930(arg0->unk350 + 0x1CD4, ((temp_r2_76 * 4) + arg0)->unk20) != 0) {
            method_0809E6EC__13HarvestSprite();
        }
        goto block_1708;
    case 0xD2:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_77 = arg0->unk1B4;
        if (temp_r2_77 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_77 - 1);
        }
        var_r2 = 0;
        temp_r0_68 = arg0->unk354;
        if (temp_r0_68 != 0) {
            var_r2 = (void *) func_08015920(temp_r0_68, *(var_r6 + ((temp_r2_77 * 4) - 4)));
        }
        goto block_1612;
    case 0xD3:
        temp_r2_78 = arg0->unk1B4;
        if (temp_r2_78 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_78 - 1);
        }
        temp_r0_69 = arg0->unk354;
        if (temp_r0_69 != 0) {
            func_080139F0(temp_r0_69, ((temp_r2_78 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0xD5:
        temp_r2_79 = arg0->unk1B4;
        if (temp_r2_79 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_79 - 1);
        }
        temp_r0_70 = arg0->unk354;
        if (temp_r0_70 != 0) {
            func_08013B38(temp_r0_70, ((temp_r2_79 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0xD4:
        temp_r2_80 = arg0->unk1B4;
        if (temp_r2_80 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_80 - 1);
        }
        temp_r0_71 = arg0->unk354;
        if (temp_r0_71 != 0) {
            func_08013A94(temp_r0_71, ((temp_r2_80 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0xD6:
        if (arg0->unk354 != 0) {
            func_0801437C();
        }
        goto block_530;
    case 0xD7:
        temp_r2_81 = arg0->unk1B4;
        if (temp_r2_81 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_81 - 1);
        }
        temp_r0_72 = arg0->unk354;
        if (temp_r0_72 != 0) {
            func_08014410(temp_r0_72, ((temp_r2_81 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0xD8:
        temp_r1_91 = arg0->unk1B4;
        temp_r3_49 = ((temp_r1_91 * 4) + arg0)->unk20;
        if (temp_r1_91 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_91 - 1);
        }
        temp_r1_92 = arg0->unk350;
        sp28 = 0xC8;
        temp_r0_73 = temp_r1_92->unk10;
        temp_r1_93 = ((temp_r0_73 >> 3) * 7) + ((u32) (temp_r0_73 << 0x1D) >> 0x1D);
        sp2C = temp_r1_93;
        var_r2_15 = &sp28;
        if (temp_r1_93 < 0xC8U) {
            var_r2_15 = &sp2C;
        }
        func_08057E90((GenObj *)((u8 *)temp_r1_92 + 0x2C1C), (u32) ((0 - temp_r3_49) | temp_r3_49) >> 0x1F, *var_r2_15);
        goto block_1708;
    case 0xD9:
        if (arg0->unk354 != 0) {
            func_080144BC();
        }
        goto block_530;
    case 0xDA:
        temp_r2_82 = arg0->unk1B4;
        temp_r3_50 = ((temp_r2_82 * 4) + arg0)->unk20;
        if (temp_r2_82 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_82 - 1);
        }
        temp_r0_74 = arg0->unk354;
        if (temp_r0_74 != 0) {
            func_08014550(temp_r0_74, (u32) ((0 - temp_r3_50) | temp_r3_50) >> 0x1F);
        }
        goto block_530;
    case 0xDB:
        if (arg0->unk354 != 0) {
            func_080145F8();
        }
        goto block_530;
    case 0xDC:
        temp_r1_94 = arg0->unk350;
        func_08052230((GenObj *)((u8 *)temp_r1_94 + 0x2C4C), (u32) (temp_r1_94->unk1C9C << 0xB) >> 0x18);
        goto block_1708;
    case 0xDD:
        var_r4_2 = (u8) func_0801151C(arg0->unk350 + 0x2C74);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xDE:
        var_r4_2 = (u8) func_08011520(arg0->unk350 + 0x2C74);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xDF:
        var_r4_2 = func_08011524(arg0->unk350 + 0x2C74);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xE0:
        temp_r2_83 = arg0->unk1B4;
        if (temp_r2_83 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_83 - 1);
        }
        func_08011540(arg0->unk350 + 0x2C74, ((temp_r2_83 * 4) + arg0)->unk20);
        goto block_1708;
    case 0xE1:
        func_08011544(arg0->unk350 + 0x2C74);
        goto block_1708;
    case 0xE2:
        temp_r0_75 = func_08011520(arg0->unk350 + 0x2C74);
        switch (temp_r0_75) {
        case 0:
            AddClock__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 1:
            AddMirror__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 2:
            AddFridge__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 3:
            AddShelf__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 4:
            AddKitchen__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 5:
            AddCarpet__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 6:
            AddLargeBed__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 7:
            AddKitchenKnife__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 8:
            AddKitchenFryingPan__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 9:
            AddKitchenPot__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 10:
            AddKitchenMixer__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 11:
            AddKitchenWhisk__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 12:
            KitchenRollingPin__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 13:
            AddKitchenOven__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        case 14:
            AddKitchenSeasoningSet__9FarmHouse(arg0->unk350 + 0x1F4);
            break;
        }
        func_08011550(arg0->unk350 + 0x2C74);
        goto block_1708;
    case 0xE3:
        var_r4_2 = (u8) ((u32) ((arg0->unk350 + 0x1AA8)->unk4 << 0x1E) >> 0x1F);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xE4:
        var_r4_2 = func_080A0518(arg0->unk350 + 0x1CD4);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xE5:
        var_r4_2 = HasShippedOneOfEachCrop__C11ShippingBin(arg0->unk350 + 0x54);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xEB:
        var_r4_2 = HasShippedOneOfEachProduct__C11ShippingBin(arg0->unk350 + 0x54);
        goto block_1691;
    case 0xE6:
        var_r4_2 = func_08010E68(arg0->unk350);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xE7:
        var_r4_2 = HasShippedOneOfEachMineral__C11ShippingBin(arg0->unk350 + 0x54);
        goto block_1691;
    case 0xE8:
        var_r4_2 = func_0809CDCC(arg0->unk350 + 0x2C80);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xE9:
        var_r4_2 = (u8) func_0809CDEC(arg0->unk350 + 0x2C80);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xEA:
        var_r4_2 = func_08010E60(arg0->unk350);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xEC:
        var_r4_2 = (u8) arg0->unk350->unk1AA8;
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xED:
        temp_r2_84 = arg0->unk1B4;
        if (temp_r2_84 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_84 - 1);
        }
        func_0809ABD8(arg0->unk350 + 0x1AA8, ((temp_r2_84 * 4) + arg0)->unk20);
        goto block_1708;
    case 0xEE:
        temp_r2_85 = arg0->unk1B4;
        if (temp_r2_85 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_85 - 1);
        }
        func_0809ACC0(arg0->unk350 + 0x1AA8, ((temp_r2_85 * 4) + arg0)->unk20);
        goto block_1708;
    case 0x11F:
        var_sb = 0x64;
        temp_r0_76 = func_080A0490(arg0->unk350 + 0x1CD4);
        if (temp_r0_76 != 0) {
            temp_r0_77 = func_080A0490(arg0->unk350 + 0x1CD4) - 3;
            var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
            var_r8_2 = (GenObj *)((u8 *)arg0 + 0x24);
            switch (temp_r0_77) {
            case 0:
                var_sb = 3;
                var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
block_961:
                var_r8_2 = (GenObj *)((u8 *)arg0 + 0x24);
                break;
            case 9:
                var_r1_18 = 0xC;
block_960:
                var_sb = var_r1_18;
                var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
                goto block_961;
            case 16:
                var_sb = 0x13;
                var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
                goto block_961;
            case 18:
                var_sb = 0x15;
                var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
                goto block_961;
            case 22:
                var_r1_18 = 0x19;
                goto block_960;
            }
        } else {
            if (GetRivalEventCount__C12Bachelorette(arg0->unk350 + 0x1D6C) <= 4U) {
                spC = GetLove__C12Bachelorette(arg0->unk350 + 0x1D6C);
            } else {
                spC = temp_r0_76;
            }
            if (GetRivalEventCount__C12Bachelorette(arg0->unk350 + 0x1E28) <= 4U) {
                var_r0_7 = GetLove__C12Bachelorette(arg0->unk350 + 0x1E28);
            } else {
                var_r0_7 = 0;
            }
            spC.unk2 = var_r0_7;
            if (GetRivalEventCount__C12Bachelorette(arg0->unk350 + 0x1EB8) <= 4U) {
                var_r0_8 = GetLove__C12Bachelorette(arg0->unk350 + 0x1EB8);
            } else {
                var_r0_8 = 0;
            }
            spC.unk4 = var_r0_8;
            if (GetRivalEventCount__C12Bachelorette(arg0->unk350 + 0x1EE4) <= 4U) {
                var_r0_9 = GetLove__C12Bachelorette(arg0->unk350 + 0x1EE4);
            } else {
                var_r0_9 = 0;
            }
            spC.unk6 = var_r0_9;
            if (GetRivalEventCount__C12Bachelorette(arg0->unk350 + 0x1F38) <= 4U) {
                var_r0_10 = GetLove__C12Bachelorette(arg0->unk350 + 0x1F38);
            } else {
                var_r0_10 = 0;
            }
            spC.unk8 = var_r0_10;
            var_r7_6 = -1;
            var_r2_16 = 0x7530;
            var_r4_4 = 0;
            var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
            var_r8_2 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r5 = &spC;
            do {
                temp_r0_78 = *var_r5;
                if ((u32) temp_r0_78 > var_r2_16) {
                    var_r7_6 = var_r4_4;
                    var_r2_16 = (u32) temp_r0_78;
                } else if ((temp_r0_78 == var_r2_16) && ((var_r7_6 == -1) || (sp3C = var_r2_16, (((rand() >> 8) & 1) == 0)))) {
                    var_r7_6 = var_r4_4;
                }
                var_r5 += 2;
                var_r4_4 += 1;
            } while (var_r4_4 <= 4);
            switch ((u32) var_r7_6) {
            case 0:
                var_sb = 3;
                break;
            case 1:
                var_sb = 0xC;
                break;
            case 2:
                var_sb = 0x13;
                break;
            case 3:
                var_sb = 0x15;
                break;
            case 4:
                var_sb = 0x19;
                break;
            }
        }
        if (var_sb == 0x64) {
            var_sb = 3;
        }
        temp_r0_79 = var_sb - 3;
        switch (temp_r0_79) {
        default:
            var_r3_10 = *var_r6_7;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + var_r8_2;
                var_r1_14 = 0;
                goto block_1106;
            }
            break;
        case 22:
            var_r3_10 = *var_r6_7;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + var_r8_2;
                var_r1_14 = 1;
                goto block_1106;
            }
            break;
        case 0:
            var_r3_10 = *var_r6_7;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + var_r8_2;
                var_r1_14 = 2;
                goto block_1106;
            }
            break;
        case 9:
            var_r3_10 = *var_r6_7;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + var_r8_2;
                var_r1_14 = 3;
                goto block_1106;
            }
            break;
        case 18:
            var_r3_10 = *var_r6_7;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + var_r8_2;
                var_r1_14 = 4;
                goto block_1106;
            }
            break;
        }
        goto block_1708;
    case 0x120:
        temp_r7_19 = arg0->unk350;
        temp_r4_43 = (GenObj *)((u8 *)temp_r7_19 + 0x1C2C);
        var_r6_11 = 5;
        if (((func_0800F190(temp_r4_43) << 0x18) != 0) || (func_0800F204(temp_r4_43) != 0)) {
            gUnk_0300040C->unk368 = 0xAB;
        } else {
            func_0800F20C(&spC, temp_r4_43);
            temp_r4_44 = gUnk_0300040C + 0x368;
            *temp_r4_44 = GetId__C4Food(&spC);
            temp_r7_20 = (u32) (temp_r7_19->unk219B << 0x1C) >> 0x1D;
            var_r4_5 = 0;
            switch (temp_r7_20) {
            case 0:
                temp_r0_80 = GetId__C4Food(&spC);
                switch (temp_r0_80) {
                case 0x5C:
                case 0x0:
                case 0x3:
                case 0x4:
                case 0xC:
                case 0xE:
                case 0x10:
                case 0x26:
                case 0x27:
                case 0x29:
                case 0x2A:
                case 0x2B:
                case 0x2F:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x38:
                case 0x42:
                case 0x44:
                case 0x7E:
                case 0x40:
                case 0x53:
block_1038:
                    temp_r4_45 = GetStaminaGain__C4Food(&spC);
                    temp_r4_46 = temp_r4_45 - GetFatigueGain__C4Food(&spC);
                    temp_r1_95 = temp_r7_20 * 4;
                    if (temp_r4_46 > (s32) *((u8 *)temp_r1_95 + &gUnk_080F9EC5)) {
                        var_r6_11 = 0;
                    } else if (temp_r4_46 > (s32) *((u8 *)temp_r1_95 + (&gUnk_080F9EC5 + 1))) {
                        var_r6_11 = 1;
                    } else if (temp_r4_46 > (s32) *((u8 *)temp_r1_95 + (&gUnk_080F9EC5 + 2))) {
                        var_r6_11 = 2;
                    } else {
                        var_r6_11 = 4;
                        if (temp_r4_46 > (s32) *((u8 *)temp_r1_95 + (&gUnk_080F9EC5 + 3))) {
                            var_r6_11 = 3;
                        }
                    }
                    break;
                case 0x3E:
                    goto block_1038;
                case 0x6F:
                    goto block_1038;
                case 0x64:
                    goto block_1038;
                case 0x91:
                    goto block_1038;
                case 0x9B:
                    goto block_1038;
                }
                break;
            case 1:
                temp_r0_81 = GetId__C4Food(&spC) - 0x65;
                switch (temp_r0_81) {
                default:
                case 0x1:
                case 0x2:
                case 0x5:
                case 0x6:
                case 0x7:
                case 0x8:
                case 0x9:
                case 0xA:
                case 0xB:
                case 0xD:
                case 0xF:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1A:
                case 0x1B:
                case 0x1C:
                case 0x1D:
                case 0x1E:
                case 0x1F:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x28:
                case 0x2C:
                case 0x2D:
                case 0x2E:
                case 0x30:
                case 0x34:
                case 0x35:
                case 0x36:
                case 0x37:
                case 0x39:
                case 0x3A:
                case 0x3B:
                case 0x3C:
                case 0x3D:
                case 0x3E:
                case 0x3F:
                case 0x40:
                case 0x41:
                case 0x43:
block_1037:
                    if (var_r4_5 != 0) {
                        goto block_1038;
                    }
                    var_r6_11 = 5;
                    break;
                }
                break;
            case 2:
                temp_r0_82 = GetId__C4Food(&spC);
                switch (temp_r0_82) {
                case 0x9E:
                    goto block_1038;
                }
                break;
            case 3:
                temp_r0_83 = GetId__C4Food(&spC);
                if (temp_r0_83 >= 0x83) {
                    if (temp_r0_83 > 0x86) {
                        if (temp_r0_83 == 0x9F) {
                            goto block_1038;
                        }
                        goto block_1037;
                    }
                    goto block_1038;
                }
                goto block_1037;
            case 4:
                temp_r0_84 = GetId__C4Food(&spC);
                if (temp_r0_84 <= 0x79) {
                    if ((temp_r0_84 < 0x76) && (temp_r0_84 != 0x4D)) {
                        if (temp_r0_84 <= 0x4D) {
                            if (temp_r0_84 != 0x3F) {

                            } else {
                                goto block_1036;
                            }
                        } else if ((temp_r0_84 != 0x51) && (temp_r0_84 != 0x6D)) {

                        } else {
                            goto block_1036;
                        }
                    } else {
                        goto block_1036;
                    }
                } else if ((temp_r0_84 == 0x81) || ((temp_r0_84 >= 0x81) && (temp_r0_84 <= 0xA6) && (temp_r0_84 >= 0xA3))) {
block_1036:
                    var_r4_5 = 1;
                }
                goto block_1037;
            }
        }
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        var_r3_9 = arg0->unk1B4;
        if (var_r3_9 <= 0x63U) {
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x24) + (var_r3_9 * 4)) = var_r6_11;
            goto block_1694;
        }
        goto block_1708;
    case 0x121:
        var_r1_19 = (u8) (rand() >> 4);
        var_r2_17 = 0;
loop_1050:
        temp_r0_85 = *((u8 *)var_r2_17 + &gUnk_080F9ED9);
        if ((u32) var_r1_19 <= (u32) temp_r0_85) {
            var_r4_2 = var_r2_17 + 1;
            goto block_1691;
        }
        var_r1_19 -= temp_r0_85;
        var_r2_17 += 1;
        if (var_r2_17 > 4U) {

        } else {
            goto loop_1050;
        }
        goto block_1708;
    case 0x122:
        var_r1_20 = (u8) (rand() >> 4);
        var_r3_12 = 0;
        var_r2_18 = &gUnk_080F9EE0;
loop_1055:
        temp_r0_86 = var_r2_18->unk0;
        if ((u32) var_r1_20 <= (u32) temp_r0_86) {
            var_r4_2 = (u8) var_r2_18->unk2;
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        var_r1_20 -= temp_r0_86;
        var_r2_18 += 4;
        var_r3_12 += 1;
        if (var_r3_12 > 4U) {

        } else {
            goto loop_1055;
        }
        goto block_1708;
    case 0x123:
        var_r4_2 = func_0809EED0(arg0->unk350 + 0x1FE4);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x124:
        var_sb_2 = 1;
        temp_r7_21 = arg0->unk350 + 0x1FE4;
        var_r4_6 = 0;
        var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
loop_1062:
        if (var_r4_6 <= 9U) {
            if ((func_0809EEA4(temp_r7_21, var_r4_6) << 0x18) == 0) {
                var_sb_2 = 0;
            } else {
                var_r4_6 += 1;
                goto loop_1062;
            }
        }
        var_r1_17 = arg0->unk1B4;
        if (var_r1_17 <= 0x63U) {
            *((var_r1_17 * 4) + ((GenObj *)((u8 *)arg0 + 0x24))) = var_sb_2;
            goto block_1455;
        }
        goto block_1708;
    case 0xA3:
        temp_r6_24 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_96 = arg0->unk1B4;
        if (temp_r1_96 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_96 - 1);
        }
        temp_r3_51 = arg0->unk1B4;
        if (temp_r3_51 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_51 - 1);
        }
        temp_r0_87 = arg0->unk354;
        if (temp_r0_87 != 0) {
            func_08013F88(temp_r0_87, *(temp_r6_24 + ((temp_r3_51 * 4) - 4)), *(temp_r6_24 + ((temp_r1_96 * 4) - 4)));
        }
        goto block_530;
    case 0xC6:
        var_r4_2 = method_08009B20__C4Farm(arg0->unk350 + 0x14);
        goto block_1691;
    case 0x125:
        temp_r1_97 = arg0->unk1B4;
        temp_r2_86 = ((temp_r1_97 * 4) + arg0)->unk20;
        if (temp_r1_97 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_97 - 1);
        }
        if (temp_r2_86 <= (u32) arg0->unk10) {
            var_r4_7 = arg0->unk18 + *((temp_r2_86 * 4) + arg0->unk14);
        } else {
            var_r4_7 = (void *)0x080F9EB8;
        }
        if ((strlen(var_r4_7) > 1U) && (((var_r4_7->unk0 << 8) + var_r4_7->unk1) == 0xFF21)) {
            temp_r4_47 = arg0->unk350 + 0x1BD8;
            func_0800E9A8(temp_r4_47, func_0800E4E0(temp_r4_47));
        } else {
            func_0800E9A8(arg0->unk350 + 0x1BD8, var_r4_7);
        }
        goto block_1708;
    case 0xEF:
        if (arg0->unk354 != 0) {
            func_080142F0();
        }
        goto block_1708;
    case 0xF0:
        if (arg0->unk354 != 0) {
            func_08014304();
        }
        goto block_1708;
    case 0xB3:
        temp_r2_87 = arg0->unk1B4;
        if (temp_r2_87 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_87 - 1);
        }
        temp_r0_88 = arg0->unk354;
        if (temp_r0_88 != 0) {
            func_08014694(temp_r0_88, ((temp_r2_87 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0xB4:
        temp_r2_88 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r3_52 = arg0->unk1B4;
        temp_r4_48 = *(temp_r2_88 + ((temp_r3_52 * 4) - 4));
        var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
        if (temp_r3_52 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_52 - 1);
        }
        switch (temp_r4_48) {
        default:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_88;
                var_r1_14 = 0;
                goto block_1106;
            }
            break;
        case 29:
            temp_r2_89 = IsFireplaceLighted__C9FarmHouse(arg0->unk350 + 0x1F4);
            var_r1_17 = arg0->unk1B4;
            if (var_r1_17 <= 0x63U) {
                *((var_r1_17 * 4) + temp_r2_88) = (s32) temp_r2_89;
                goto block_1455;
            }
            break;
        case 18:
            var_r1_14 = (u8) arg0->unk350->unk3 >> 7;
block_1104:
            var_r3_10 = arg0->unk1B4;
            if (var_r3_10 <= 0x63U) {
                var_r0_2 = (var_r3_10 * 4) + temp_r2_88;
                goto block_1106;
            }
            break;
        case 39:
            var_r1_14 = (u32) (arg0->unk350->unk4 << 0x1F) >> 0x1F;
            goto block_1104;
        }
        goto block_1708;
    case 0xB5:
        temp_r2_90 = arg0->unk1B4;
        if (temp_r2_90 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_90 - 1);
        }
        temp_r0_89 = arg0->unk354;
        if (temp_r0_89 != 0) {
            func_080146B0(temp_r0_89, ((temp_r2_90 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0xB6:
        if (GetVaseArticleId__C9FarmHouse(arg0->unk350 + 0x1F4) == 0x5F) {
            var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            temp_r3_53 = arg0->unk1B4;
            if (temp_r3_53 <= 0x63U) {
                var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_53 * 4);
                var_r1_15 = -1;
                goto block_1701;
            }
        } else {
            var_r4_2 = (u8) GetVaseArticleId__C9FarmHouse(arg0->unk350 + 0x1F4);
            var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
            var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
            goto block_1692;
        }
        goto block_1708;
    case 0xB9:
        temp_r2_91 = arg0->unk1B4;
        if (temp_r2_91 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_91 - 1);
        }
        temp_r0_90 = arg0->unk354;
        if (temp_r0_90 != 0) {
            func_080146CC(temp_r0_90, ((temp_r2_91 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0xBA:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_92 = arg0->unk1B4;
        if (temp_r2_92 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_92 - 1);
        }
        var_r2 = (void *) IsIncubatorOccupied__C4CoopUi(arg0->unk350 + 0x410, *(var_r6 + ((temp_r2_92 * 4) - 4)));
        goto block_1612;
    case 0xF1:
        var_r4_2 = (u8) func_0809ECD8(arg0->unk350 + 0x1DAC);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xF2:
        var_r4_2 = func_0809ECE0(arg0->unk350 + 0x1DAC);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xF3:
        temp_r0_91 = func_0809ECD8(arg0->unk350 + 0x1DAC);
        var_r6_12 = 0x51;
        var_r7_7 = 0x5F;
        temp_r0_92 = temp_r0_91 - 1;
        switch (temp_r0_92) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            if ((func_0804E354(arg0, 0) << 0x18) != 0) {
                temp_r0_93 = temp_r0_91 - 1;
                switch (temp_r0_93) {
                default:
                    var_r6_12 = 1;
                    break;
                case 1:
                    var_r6_12 = 2;
                    break;
                case 2:
                    var_r6_12 = 3;
                    break;
                case 3:
                    var_r6_12 = 4;
                    break;
                case 4:
                    var_r6_12 = 7;
                    break;
                }
            } else {
                func_0800EB2C(arg0->unk350 + 0x1BD8, 1);
                func_0800EFD8();
                var_r6_12 = 0;
            }
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            if ((func_0804E354(arg0, 8) << 0x18) != 0) {
                temp_r0_94 = temp_r0_91 - 6;
                switch (temp_r0_94) {
                default:
                    var_r6_12 = 9;
                    break;
                case 1:
                    var_r6_12 = 0xA;
                    break;
                case 2:
                    var_r6_12 = 0xB;
                    break;
                case 3:
                    var_r6_12 = 0xC;
                    break;
                case 4:
                    var_r6_12 = 0xF;
                    break;
                }
            } else {
                func_0800EB2C(arg0->unk350 + 0x1BD8, 0);
                func_0800EFD8();
                var_r6_12 = 8;
            }
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
            if ((func_0804E354(arg0, 0x10) << 0x18) != 0) {
                temp_r0_95 = temp_r0_91 - 0xB;
                switch (temp_r0_95) {
                default:
                    var_r6_12 = 0x11;
                    break;
                case 1:
                    var_r6_12 = 0x12;
                    break;
                case 2:
                    var_r6_12 = 0x13;
                    break;
                case 3:
                    var_r6_12 = 0x14;
                    break;
                case 4:
                    var_r6_12 = 0x17;
                    break;
                }
            } else {
                func_0800EB2C(arg0->unk350 + 0x1BD8, 2);
                func_0800EFD8();
                var_r6_12 = 0x10;
            }
            break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            if ((func_0804E354(arg0, 0x18) << 0x18) != 0) {
                temp_r0_96 = temp_r0_91 - 0x10;
                switch (temp_r0_96) {
                default:
                    var_r6_12 = 0x19;
                    break;
                case 1:
                    var_r6_12 = 0x1A;
                    break;
                case 2:
                    var_r6_12 = 0x1B;
                    break;
                case 3:
                    var_r6_12 = 0x1C;
                    break;
                case 4:
                    var_r6_12 = 0x1F;
                    break;
                }
            } else {
                func_0800EB2C(arg0->unk350 + 0x1BD8, 3);
                func_0800EFD8();
                var_r6_12 = 0x18;
            }
            break;
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
            if ((func_0804E354(arg0, 0x20) << 0x18) != 0) {
                temp_r0_97 = temp_r0_91 - 0x15;
                switch (temp_r0_97) {
                default:
                    var_r6_12 = 0x21;
                    break;
                case 1:
                    var_r6_12 = 0x22;
                    break;
                case 2:
                    var_r6_12 = 0x23;
                    break;
                case 3:
                    var_r6_12 = 0x24;
                    break;
                case 4:
                    var_r6_12 = 0x27;
                    break;
                }
            } else {
                func_0800EB2C(arg0->unk350 + 0x1BD8, 4);
                func_0800EFD8();
                var_r6_12 = 0x20;
            }
            break;
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            if ((func_0804E354(arg0, 0x28) << 0x18) != 0) {
                temp_r0_98 = temp_r0_91 - 0x1A;
                switch (temp_r0_98) {
                default:
                    var_r6_12 = 0x29;
                    break;
                case 1:
                    var_r6_12 = 0x2A;
                    break;
                case 2:
                    var_r6_12 = 0x2B;
                    break;
                case 3:
                    var_r6_12 = 0x2C;
                    break;
                case 4:
                    var_r6_12 = 0x2F;
                    break;
                }
            } else {
                func_0800EB2C(arg0->unk350 + 0x1BD8, 5);
                func_0800EFD8();
                var_r6_12 = 0x28;
            }
            break;
        case 30:
            var_r7_7 = 0x2C;
            break;
        case 31:
            var_r7_7 = 0x2D;
            break;
        case 32:
            var_r7_7 = 0x2E;
            break;
        case 33:
            var_r7_7 = 0x2F;
            break;
        }
        var_sb_3 = 3;
        var_r8_3 = 0;
        if (var_r6_12 == 0x51) {
            if (var_r7_7 != 0x5F) {
                temp_r6_25 = arg0->unk350 + 0x1C2C;
                if ((func_0800F190(temp_r6_25) << 0x18) != 0) {
                    __7ArticleUi(&(GenObj *)((u8 *)sp0 + 0x32), var_r7_7);
                    func_0800F3E8(temp_r6_25, sp0.unk32);
                    var_sb_3 = 0;
                    goto block_1214;
                }
                if (AddAmountOfArticle__8RucksackUiUi(arg0->unk350 + 0x1C38, var_r7_7, 1) == 0) {
                    var_sb_3 = 1;
                    goto block_1214;
                }
                temp_r0_99 = GetShelf__9FarmHouse(arg0->unk350 + 0x1F4);
                if ((temp_r0_99 != 0) && (AddAmountOf__5ShelfUiUi(temp_r0_99, var_r7_7, 1) == 0)) {
                    var_sb_3 = 2;
                    goto block_1214;
                }
                goto block_1213;
            }
            var_r8_3 = 1;
            goto block_1213;
        }
        temp_r7_22 = arg0->unk350 + 0x1C34;
        if ((IsEmpty__C9ToolStack(temp_r7_22) << 0x18) != 0) {
            __4ToolUi(&sp30, var_r6_12);
            __9ToolStackG4ToolUi(&spC, sp30, 1);
            memcpy(temp_r7_22, &spC, 2);
            var_sb_3 = 0;
            var_r8_3 = 1;
            goto block_1200;
        }
        var_r4_8 = 0;
        sp0.unk31 = GetTool__C9ToolStack(temp_r7_22);
        if ((GetId__C4Tool() == var_r6_12) && (GetAmount__C9ToolStack(temp_r7_22) <= 0x62U)) {
            var_r4_8 = 1;
        }
        if (var_r4_8 != 0) {
            AddAmount__9ToolStackUi(temp_r7_22, 1);
            var_sb_3 = 0;
            var_r8_3 = 1;
            goto block_1200;
        }
        if (AddAmountOfTool__8RucksackUiUi(arg0->unk350 + 0x1C38, var_r6_12, 1) == 0) {
            var_sb_3 = 1;
            var_r8_3 = 1;
            goto block_1200;
        }
        if (AddAmountOf__9ToolChestUiUi(arg0->unk350 + 0x380, var_r6_12, 1) == 0) {
            var_sb_3 = 2;
            var_r8_3 = 1;
        }
        if (var_r8_3 == 0) {

        } else {
block_1200:
            temp_r0_100 = temp_r0_91 - 5;
            switch (temp_r0_100) {
            case 0:
            case 5:
            case 10:
            case 15:
            case 20:
            case 25:
                func_08010F48(arg0->unk350);
                break;
            }
block_1213:
            if (var_r8_3 != 0) {
block_1214:
                func_0809ED64(arg0->unk350 + 0x1DAC);
            }
        }
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        var_r3_9 = arg0->unk1B4;
        if (var_r3_9 <= 0x63U) {
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x24) + (var_r3_9 * 4)) = var_sb_3;
            goto block_1694;
        }
        goto block_1708;
    case 0xF4:
        temp_r3_54 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_98 = arg0->unk1B4;
        if (temp_r1_98 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_98 - 1);
        }
        temp_r1_99 = arg0->unk1B4;
        if (temp_r1_99 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_99 - 1);
        }
        temp_r5_8 = arg0->unk354;
        if (temp_r5_8 != 0) {
            sp34 = (-0x20 & sp34) | ((u8) *(temp_r3_54 + ((temp_r1_99 * 4) - 4)) & 0x1F);
            sp34 = (s16) ((0xFFFFF81F & (u16) sp34) | (((u8) *(temp_r3_54 + ((temp_r1_98 * 4) - 4)) & 0x3F) << 5));
            func_08014318(temp_r5_8);
        }
        goto block_1708;
    case 0xF5:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_93 = arg0->unk1B4;
        if (temp_r2_93 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_93 - 1);
        }
        var_r2 = (void *) func_0800BD14(arg0->unk350 + 0x400, *(var_r6 + ((temp_r2_93 * 4) - 4)));
        goto block_1612;
    case 0xF6:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_94 = arg0->unk1B4;
        if (temp_r2_94 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_94 - 1);
        }
        var_r2 = (void *) func_0800BD40(arg0->unk350 + 0x400, *(var_r6 + ((temp_r2_94 * 4) - 4)));
        goto block_1612;
    case 0xF7:
        temp_r2_95 = arg0->unk1B4;
        if (temp_r2_95 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_95 - 1);
        }
        func_0800BCB0(arg0->unk350 + 0x400, ((temp_r2_95 * 4) + arg0)->unk20);
        goto block_1708;
    case 0xF8:
        temp_r2_96 = arg0->unk1B4;
        if (temp_r2_96 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_96 - 1);
        }
        func_0800BCD0(arg0->unk350 + 0x400, ((temp_r2_96 * 4) + arg0)->unk20);
        goto block_1708;
    case 0xF9:
        var_r0_5 = func_0800BD6C(arg0->unk350 + 0x400);
        goto block_1690;
    case 0xFA:
        var_r4_2 = (u8) func_0800BDEC(arg0->unk350 + 0x400);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x126:
        if (arg0->unk354 != 0) {
            temp_r4_49 = *((GetUpgradeLevel__C9FarmHouse(arg0->unk350 + 0x1F4) * 2) + &gUnk_080F9EF4);
            func_080122E0(arg0->unk354, 0x1D, (s32) temp_r4_49, 0x70);
            sp0 = 2;
            func_08012064(arg0->unk354, 0, (s32) temp_r4_49, 0x70);
        }
        goto block_1708;
    case 0x127:
        temp_r4_50 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_100 = arg0->unk1B4;
        if (temp_r1_100 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_100 - 1);
        }
        temp_r1_101 = arg0->unk1B4;
        if (temp_r1_101 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_101 - 1);
        }
        temp_r2_97 = arg0->unk1B4;
        if (temp_r2_97 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_97 - 1);
        }
        temp_r2_98 = arg0->unk354;
        if (temp_r2_98 != 0) {
            func_080146FC(temp_r2_98, *(temp_r4_50 + ((temp_r2_97 * 4) - 4)) | (*(temp_r4_50 + ((temp_r1_101 * 4) - 4)) << 5) | (*(temp_r4_50 + ((temp_r1_100 * 4) - 4)) << 0xA));
        }
        goto block_530;
    case 0x5C:
        var_r4_2 = func_08014D7C(arg0->unk354);
        goto block_1691;
    case 0x134:
        temp_r6_26 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_102 = arg0->unk1B4;
        if (temp_r1_102 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_102 - 1);
        }
        temp_r3_55 = arg0->unk1B4;
        if (temp_r3_55 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_55 - 1);
        }
        temp_r0_101 = arg0->unk354;
        if (temp_r0_101 != 0) {
            func_080159B0(temp_r0_101, *(temp_r6_26 + ((temp_r3_55 * 4) - 4)), *(temp_r6_26 + ((temp_r1_102 * 4) - 4)));
        }
        goto block_1708;
    case 0x128:
        if (arg0->unk354 != 0) {
            func_08014AF8();
        }
        goto block_1708;
    case 0x6F:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_99 = arg0->unk1B4;
        if (temp_r2_99 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_99 - 1);
        }
        var_r2 = (void *) func_0804E0F8(arg0, *(var_r6 + ((temp_r2_99 * 4) - 4)));
        goto block_1612;
    case 0x70:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_100 = arg0->unk1B4;
        if (temp_r2_100 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_100 - 1);
        }
        var_r2 = (void *) func_0804E17C(arg0, *(var_r6 + ((temp_r2_100 * 4) - 4)));
        goto block_1612;
    case 0x71:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_101 = arg0->unk1B4;
        if (temp_r2_101 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_101 - 1);
        }
        var_r2 = (void *) func_0804E1D4(arg0, *(var_r6 + ((temp_r2_101 * 4) - 4)));
        goto block_1612;
    case 0x5D:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_102 = arg0->unk1B4;
        if (temp_r2_102 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_102 - 1);
        }
        var_r2 = (void *) func_0804E354(arg0, *(var_r6 + ((temp_r2_102 * 4) - 4)));
        goto block_1612;
    case 0x5E:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_103 = arg0->unk1B4;
        if (temp_r2_103 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_103 - 1);
        }
        var_r2 = (void *) func_0804E2C0(arg0, *(var_r6 + ((temp_r2_103 * 4) - 4)));
        goto block_1612;
    case 0x5F:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_104 = arg0->unk1B4;
        if (temp_r2_104 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_104 - 1);
        }
        var_r2 = (void *) func_0804E22C(arg0, *(var_r6 + ((temp_r2_104 * 4) - 4)));
        goto block_1612;
    case 0x12B:
        arg0->unk350->unk34C5 = 1;
        goto block_1708;
    case 0x12C:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_105 = arg0->unk1B4;
        temp_r7_23 = *(var_r6 + ((temp_r2_105 * 4) - 4));
        if (temp_r2_105 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_105 - 1);
        }
        var_r2 = (void *) IsDisplayEnabled__C11ShippingBini(arg0->unk350 + 0x54, temp_r7_23);
        if (var_r2 != 0) {
            var_r2 = GetAmountShipped__C11ShippingBini(arg0->unk350 + 0x54, temp_r7_23);
        }
        goto block_1612;
    case 0x115:
        var_r0_5 = CountCows__C4Barn(arg0->unk350 + 0x5F0);
        goto block_1690;
    case 0x116:
        var_r4_2 = (u8) CountSheeps__C4Barn(arg0->unk350 + 0x5F0);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x117:
        var_r4_2 = (u8) CountChickens__C4Coop(arg0->unk350 + 0x410);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x72:
        func_0800ED14(arg0->unk350 + 0x1BD8);
        if (arg0->unk354 != 0) {
            func_08014198();
        }
        goto block_530;
    case 0x73:
        var_r4_2 = func_0800E934(arg0->unk350 + 0x1BD8);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x74:
        Upgrade__8Rucksack(arg0->unk350 + 0x1C38);
        goto block_1708;
    case 0x75:
        var_r0_5 = GetUpgradeLevel__C8Rucksack(arg0->unk350 + 0x1C38);
        goto block_1690;
    case 0x5B:
        temp_r6_27 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_103 = arg0->unk1B4;
        if (temp_r1_103 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_103 - 1);
        }
        temp_r3_56 = arg0->unk1B4;
        if (temp_r3_56 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_56 - 1);
        }
        temp_r0_102 = arg0->unk354;
        if (temp_r0_102 != 0) {
            func_08014C0C(temp_r0_102, *(temp_r6_27 + ((temp_r3_56 * 4) - 4)), *(temp_r6_27 + ((temp_r1_103 * 4) - 4)));
        }
        goto block_1708;
    case 0xFE:
        if (arg0->unk354 != 0) {
            func_08014BD8();
        }
        goto block_1708;
    case 0xFF:
        temp_r6_28 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_104 = arg0->unk1B4;
        if (temp_r1_104 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_104 - 1);
        }
        temp_r3_57 = arg0->unk1B4;
        if (temp_r3_57 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_57 - 1);
        }
        temp_r0_103 = (s32) func_0804E3D8(arg0, *(temp_r6_28 + ((temp_r3_57 * 4) - 4)), *(temp_r6_28 + ((temp_r1_104 * 4) - 4)));
        var_r1_13 = (u32) ((0 - temp_r0_103) | temp_r0_103) >> 0x1F;
        temp_r2_106 = arg0->unk1B4;
        if (temp_r2_106 <= 0x63U) {
            var_r0 = temp_r6_28 + (temp_r2_106 * 4);
            goto block_1505;
        }
        goto block_1708;
    case 0x100:
        temp_r6_29 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_105 = arg0->unk1B4;
        if (temp_r1_105 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_105 - 1);
        }
        temp_r1_106 = arg0->unk1B4;
        if (temp_r1_106 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_106 - 1);
        }
        temp_r1_107 = arg0->unk1B4;
        if (temp_r1_107 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_107 - 1);
        }
        temp_r1_108 = arg0->unk1B4;
        if (temp_r1_108 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_108 - 1);
        }
        temp_r4_51 = arg0->unk1B4;
        if (temp_r4_51 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_51 - 1);
        }
        temp_r0_104 = arg0->unk354;
        if (temp_r0_104 != 0) {
            sp0 = *(temp_r6_29 + ((temp_r1_106 * 4) - 4));
            sp4 = *(temp_r6_29 + ((temp_r1_105 * 4) - 4));
            func_08014C34(temp_r0_104, *(temp_r6_29 + ((temp_r4_51 * 4) - 4)), *(temp_r6_29 + ((temp_r1_108 * 4) - 4)), *(temp_r6_29 + ((temp_r1_107 * 4) - 4)));
        }
        goto block_1708;
    case 0x101:
        temp_r6_30 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_109 = arg0->unk1B4;
        if (temp_r1_109 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_109 - 1);
        }
        temp_r3_58 = arg0->unk1B4;
        if (temp_r3_58 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_58 - 1);
        }
        temp_r0_105 = arg0->unk354;
        if (temp_r0_105 != 0) {
            func_08014D30(temp_r0_105, *(temp_r6_30 + ((temp_r3_58 * 4) - 4)), *(temp_r6_30 + ((temp_r1_109 * 4) - 4)));
        }
        goto block_1708;
    case 0x102:
        temp_r6_31 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_110 = arg0->unk1B4;
        if (temp_r1_110 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_110 - 1);
        }
        temp_r3_59 = arg0->unk1B4;
        if (temp_r3_59 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_59 - 1);
        }
        temp_r3_60 = arg0->unk1B4;
        var_r6_13 = *(temp_r6_31 + ((temp_r3_60 * 4) - 4));
        if (temp_r3_60 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_60 - 1);
        }
        temp_r0_106 = func_0804E3D8(arg0, *(temp_r6_31 + ((temp_r3_59 * 4) - 4)), *(temp_r6_31 + ((temp_r1_110 * 4) - 4)));
        if ((temp_r0_106 != 0) && (arg0->unk354 != 0)) {
            var_r2_19 = GetName__C6Animal(temp_r0_106);
block_1518:
            func_08012ACC(arg0->unk354, var_r6_13, var_r2_19);
        }
        goto block_1708;
    case 0x103:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r0_5 = func_08014D5C();
            goto block_1690;
        }
        goto block_1691;
    case 0x104:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_111 = arg0->unk1B4;
        if (temp_r1_111 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_111 - 1);
        }
        temp_r3_61 = arg0->unk1B4;
        if (temp_r3_61 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_61 - 1);
        }
        var_r2 = func_0804E3D8(arg0, *(var_r6 + ((temp_r3_61 * 4) - 4)), *(var_r6 + ((temp_r1_111 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = (void *) HasBeenTalkedTo__C6Animal();
        }
        goto block_1612;
    case 0x105:
        temp_r6_32 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_112 = arg0->unk1B4;
        if (temp_r1_112 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_112 - 1);
        }
        temp_r3_62 = arg0->unk1B4;
        if (temp_r3_62 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_62 - 1);
        }
        if (func_0804E3D8(arg0, *(temp_r6_32 + ((temp_r3_62 * 4) - 4)), *(temp_r6_32 + ((temp_r1_112 * 4) - 4))) != 0) {
            SetTalkedTo__6Animal();
        }
        goto block_1708;
    case 0x10B:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_113 = arg0->unk1B4;
        if (temp_r1_113 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_113 - 1);
        }
        temp_r3_63 = arg0->unk1B4;
        if (temp_r3_63 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_63 - 1);
        }
        var_r2 = func_0804E3D8(arg0, *(var_r6 + ((temp_r3_63 * 4) - 4)), *(var_r6 + ((temp_r1_113 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = GetAge__C6Animal();
        }
        goto block_1612;
    case 0x106:
        temp_r6_33 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_107 = arg0->unk1B4;
        temp_r7_24 = *(temp_r6_33 + ((temp_r2_107 * 4) - 4));
        if (temp_r2_107 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_107 - 1);
        }
        temp_r1_114 = arg0->unk1B4;
        if (temp_r1_114 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_114 - 1);
        }
        temp_r3_64 = arg0->unk1B4;
        if (temp_r3_64 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_64 - 1);
        }
        temp_r0_107 = func_0804E3D8(arg0, *(temp_r6_33 + ((temp_r3_64 * 4) - 4)), *(temp_r6_33 + ((temp_r1_114 * 4) - 4)));
        if (temp_r0_107 != 0) {
            AddAffection__6Animali(temp_r0_107, temp_r7_24);
        }
        goto block_1708;
    case 0x107:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_115 = arg0->unk1B4;
        if (temp_r1_115 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_115 - 1);
        }
        temp_r3_65 = arg0->unk1B4;
        if (temp_r3_65 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_65 - 1);
        }
        var_r2 = func_0804E3D8(arg0, *(var_r6 + ((temp_r3_65 * 4) - 4)), *(var_r6 + ((temp_r1_115 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = (void *) IsUnhappy__C9Livestock();
        }
        goto block_1612;
    case 0x108:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_116 = arg0->unk1B4;
        if (temp_r1_116 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_116 - 1);
        }
        temp_r3_66 = arg0->unk1B4;
        if (temp_r3_66 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_66 - 1);
        }
        var_r2 = func_0804E3D8(arg0, *(var_r6 + ((temp_r3_66 * 4) - 4)), *(var_r6 + ((temp_r1_116 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = (void *) IsSick__C9Livestock();
        }
        goto block_1612;
    case 0x109:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_117 = arg0->unk1B4;
        if (temp_r1_117 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_117 - 1);
        }
        temp_r3_67 = arg0->unk1B4;
        if (temp_r3_67 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_67 - 1);
        }
        var_r2 = func_0804E3D8(arg0, *(var_r6 + ((temp_r3_67 * 4) - 4)), *(var_r6 + ((temp_r1_117 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = (void *) IsPregnant__C10BarnAnimal();
        }
        goto block_1612;
    case 0x10A:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_118 = arg0->unk1B4;
        if (temp_r1_118 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_118 - 1);
        }
        temp_r3_68 = arg0->unk1B4;
        if (temp_r3_68 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_68 - 1);
        }
        var_r2 = func_0804E3D8(arg0, *(var_r6 + ((temp_r3_68 * 4) - 4)), *(var_r6 + ((temp_r1_118 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = GetDaysPregnantHealthy__C10BarnAnimal();
        }
        goto block_1612;
    case 0x10C:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_119 = arg0->unk1B4;
        if (temp_r1_119 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_119 - 1);
        }
        temp_r3_69 = arg0->unk1B4;
        if (temp_r3_69 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_69 - 1);
        }
        var_r2 = 0;
        if (func_0804E3D8(arg0, *(var_r6 + ((temp_r3_69 * 4) - 4)), *(var_r6 + ((temp_r1_119 * 4) - 4))) != 0) {
            var_r2 = GetAffection__C6Animal();
        }
        goto block_1612;
    case 0x10D:
        temp_r2_108 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r3_70 = arg0->unk1B4;
        temp_r4_52 = *(temp_r2_108 + ((temp_r3_70 * 4) - 4));
        var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
        var_r8_4 = temp_r2_108;
        if (temp_r3_70 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_70 - 1);
        }
        temp_r1_120 = arg0->unk1B4;
        temp_r2_109 = *(((temp_r1_120 * 4) - 4) + var_r8_4);
        if (temp_r1_120 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_120 - 1);
        }
        var_r7_8 = 0;
        switch (temp_r2_109) {
        case 0:
            if (GetHorse__4Farm(arg0->unk350 + 0x14) == 0) {

            } else {
                var_r0_11 = GetGrowthStage__C5Horse();
block_1406:
                var_r7_8 = var_r0_11;
            }
            break;
        case 4:
            var_r0_11 = GetGrowthStage__C3Dog(arg0->unk350 + 0x1C70);
            goto block_1406;
        case 1:
            if (GetCow__4BarnUi(arg0->unk350 + 0x5F0, temp_r4_52) == 0) {

            } else {
                var_r0_11 = GetGrowthStage__C3Cow();
                goto block_1406;
            }
            break;
        case 2:
            if (GetSheep__4BarnUi(arg0->unk350 + 0x5F0, temp_r4_52) == 0) {

            } else {
                var_r0_11 = GetGrowthStage__C5Sheep();
                goto block_1406;
            }
            break;
        case 3:
            if (GetChicken__4CoopUi(arg0->unk350 + 0x410, temp_r4_52) == 0) {

            } else {
                var_r0_11 = GetGrowthStage__C7Chicken();
                goto block_1406;
            }
            break;
        }
block_1453:
        var_r1_17 = *var_r6_7;
        if (var_r1_17 <= 0x63U) {
            *((var_r1_17 * 4) + var_r8_4) = var_r7_8;
            goto block_1455;
        }
        goto block_1708;
    case 0x10E:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r1_121 = arg0->unk1B4;
        if (temp_r1_121 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_121 - 1);
        }
        var_r2 = func_0804E3D8(arg0, 2, *(var_r6 + ((temp_r1_121 * 4) - 4)));
        if (var_r2 != 0) {
            var_r2 = (void *) IsSheared__C5Sheep();
        }
        goto block_1612;
    case 0x118:
        temp_r6_34 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_122 = arg0->unk1B4;
        if (temp_r1_122 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_122 - 1);
        }
        temp_r3_71 = arg0->unk1B4;
        if (temp_r3_71 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_71 - 1);
        }
        temp_r0_108 = arg0->unk354;
        if (temp_r0_108 != 0) {
            func_08016834(temp_r0_108, *(temp_r6_34 + ((temp_r3_71 * 4) - 4)), *(temp_r6_34 + ((temp_r1_122 * 4) - 4)));
        }
        goto block_1708;
    case 0x119:
        temp_r2_110 = arg0->unk1B4;
        if (temp_r2_110 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_110 - 1);
        }
        temp_r0_109 = arg0->unk354;
        if (temp_r0_109 != 0) {
            func_080168D4(temp_r0_109, ((temp_r2_110 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x11A:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_111 = arg0->unk1B4;
        if (temp_r2_111 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_111 - 1);
        }
        temp_r1_123 = arg0->unk354;
        if (temp_r1_123 != 0) {
            var_r2 = func_08016AFC(temp_r1_123, *(var_r6 + ((temp_r2_111 * 4) - 4)));
            goto block_1612;
        }
        goto block_1425;
        goto block_1708;
    case 0x10F:
        temp_r2_112 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r3_72 = arg0->unk1B4;
        temp_sb = *(temp_r2_112 + ((temp_r3_72 * 4) - 4));
        var_r6_7 = (GenObj *)((u8 *)arg0 + 0x1B4);
        var_r8_4 = temp_r2_112;
        if (temp_r3_72 != 0) {
            arg0->unk1B4 = (u32) (temp_r3_72 - 1);
        }
        temp_r1_124 = arg0->unk1B4;
        temp_r2_113 = *(((temp_r1_124 * 4) - 4) + var_r8_4);
        if (temp_r1_124 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_124 - 1);
        }
        var_r7_8 = 0;
        switch (temp_r2_113) {
        case 0:
        case 4:
            break;
        case 1:
            var_r4_9 = 0;
loop_1438:
            if (var_r4_9 < GetCapacity__C4Barn(arg0->unk350 + 0x5F0)) {
                if ((GetCow__4BarnUi(arg0->unk350 + 0x5F0, var_r4_9) != 0) && (method_0809B514__C9Livestock() == temp_sb)) {
                    var_r7_8 += 1;
                }
                var_r4_9 += 1;
                goto loop_1438;
            }
            break;
        case 2:
            var_r4_10 = 0;
loop_1445:
            if (var_r4_10 < GetCapacity__C4Barn(arg0->unk350 + 0x5F0)) {
                if ((GetSheep__4BarnUi(arg0->unk350 + 0x5F0, var_r4_10) != 0) && (method_0809B514__C9Livestock() == temp_sb)) {
                    var_r7_8 += 1;
                }
                var_r4_10 += 1;
                goto loop_1445;
            }
            break;
        case 3:
            var_r4_11 = 0;
loop_1452:
            if (var_r4_11 < GetCapacity__C4Coop(arg0->unk350 + 0x410)) {
                if ((GetChicken__4CoopUi(arg0->unk350 + 0x410, var_r4_11) != 0) && (method_0809B514__C9Livestock() == temp_sb)) {
                    var_r7_8 += 1;
                }
                var_r4_11 += 1;
                goto loop_1452;
            }
            break;
        }
        goto block_1453;
    case 0x110:
        if (arg0->unk354 != 0) {
            func_08014D9C();
        }
        goto block_530;
    case 0x111:
        if (arg0->unk354 != 0) {
            func_08015210();
        }
        goto block_1708;
    case 0x112:
        if (arg0->unk354 != 0) {
            func_0801531C();
        }
        goto block_530;
    case 0x113:
        if (arg0->unk354 != 0) {
            func_08015790();
        }
        goto block_1708;
    case 0x61:
        if (arg0->unk354 != 0) {
            func_080158CC();
        }
        goto block_530;
    case 0x62:
        if (arg0->unk354 != 0) {
            func_080158F8();
        }
        goto block_530;
    case 0x63:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = func_0801410C();
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x6C:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = (u8) func_08015950();
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x6D:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = (u8) func_08015970();
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x6E:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = (u8) func_08015990();
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xBB:
        var_r4_2 = (u8) GetIncubatorCapacity__C4Coop(arg0->unk350 + 0x410);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xBC:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_114 = arg0->unk1B4;
        if (temp_r2_114 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_114 - 1);
        }
        var_r2 = (void *) ShouldHatch__4CoopUi(arg0->unk350 + 0x410, *(var_r6 + ((temp_r2_114 * 4) - 4)));
        goto block_1612;
    case 0xBD:
        temp_r6_35 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_115 = arg0->unk1B4;
        if (temp_r2_115 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_115 - 1);
        }
        temp_r1_125 = AttemptHatch__4CoopUi(arg0->unk350 + 0x410, *(temp_r6_35 + ((temp_r2_115 * 4) - 4)));
        temp_r2_116 = arg0->unk1B4;
        if (temp_r2_116 <= 0x63U) {
            *((u8 *)temp_r6_35 + (temp_r2_116 * 4)) = temp_r1_125;
            arg0->unk1B4 = (u32) (temp_r2_116 + 1);
        }
        temp_r0_110 = arg0->unk354;
        if (temp_r0_110 != 0) {
            func_08016CEC(temp_r0_110, temp_r1_125 + 0x2E);
        }
        goto block_1708;
    case 0xC1:
        var_r4_2 = (u8) GetPregnancyStallCapacity__C4Barn(arg0->unk350 + 0x5F0);
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xC2:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_117 = arg0->unk1B4;
        if (temp_r2_117 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_117 - 1);
        }
        var_r2 = (void *) IsReadyToGiveBirth__C4BarnUi(arg0->unk350 + 0x5F0, *(var_r6 + ((temp_r2_117 * 4) - 4)));
        goto block_1612;
    case 0xC3:
        temp_r6_36 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_118 = arg0->unk1B4;
        if (temp_r2_118 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_118 - 1);
        }
        temp_r1_126 = AttemptBirth__4BarnUi(arg0->unk350 + 0x5F0, *(temp_r6_36 + ((temp_r2_118 * 4) - 4)));
        temp_r2_119 = arg0->unk1B4;
        if (temp_r2_119 <= 0x63U) {
            *((u8 *)temp_r6_36 + (temp_r2_119 * 4)) = temp_r1_126;
            arg0->unk1B4 = (u32) (temp_r2_119 + 1);
        }
        temp_r0_111 = arg0->unk354;
        if (temp_r0_111 != 0) {
            func_08016CEC(temp_r0_111, temp_r1_126 + 0x36);
        }
        goto block_1708;
    case 0x114:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_120 = arg0->unk1B4;
        temp_r0_112 = *(var_r6 + ((temp_r2_120 * 4) - 4));
        if (temp_r2_120 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_120 - 1);
        }
        temp_r0_113 = GetCow__4BarnUi(arg0->unk350 + 0x5F0, temp_r0_112);
        if (temp_r0_113 != 0) {
            temp_r2_121 = arg0->unk1B4;
            if (temp_r2_121 <= 0x63U) {
                var_r0 = var_r6 + (temp_r2_121 * 4);
                var_r1_13 = 1;
                goto block_1505;
            }
        } else {
            var_r2 = GetSheep__4BarnUi(arg0->unk350 + 0x5F0, temp_r0_112);
            if (var_r2 == 0) {
                goto block_1612;
            }
            var_r1_2 = arg0->unk1B4;
            if (var_r1_2 <= 0x63U) {
                *((u8 *)var_r6 + (var_r1_2 * 4)) = temp_r0_113;
                goto block_1615;
            }
        }
        goto block_1708;
    case 0x12D:
        if (arg0->unk354 != 0) {
            func_080167DC();
        }
        goto block_1708;
    case 0x135:
        if (arg0->unk354 != 0) {
            func_08015E30();
        }
        goto block_1708;
    case 0x11B:
        temp_r2_122 = arg0->unk1B4;
        var_r6_13 = ((temp_r2_122 * 4) + arg0)->unk20;
        if (temp_r2_122 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_122 - 1);
        }
        temp_r4_53 = arg0->unk354;
        if (temp_r4_53 != 0) {
            var_r2_19 = *func_080167AC(temp_r4_53);
            goto block_1518;
        }
        goto block_1708;
    case 0x11C:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = (u8) func_080167AC()->unk4;
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x11D:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = func_080167AC()->unk14;
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x11E:
        var_r4_2 = 0;
        if (arg0->unk354 != 0) {
            var_r4_2 = func_080167AC()->unkD;
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0xFB:
        temp_r1_127 = arg0->unk1B4;
        temp_r3_73 = ((temp_r1_127 * 4) + arg0)->unk20;
        if (temp_r1_127 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_127 - 1);
        }
        temp_r0_114 = arg0->unk354;
        if (temp_r0_114 != 0) {
            if (temp_r3_73 <= (u32) arg0->unk10) {
                var_r1_21 = arg0->unk18 + *((temp_r3_73 * 4) + arg0->unk14);
            } else {
                var_r1_21 = 0x080F9EB8;
            }
            func_080126BC(temp_r0_114, var_r1_21);
        }
        goto block_530;
    case 0xC4:
        func_08010F24(arg0->unk350);
        goto block_1708;
    case 0xC5:
        func_08010F3C(arg0->unk350);
        goto block_1708;
    case 0xC7:
        temp_r2_123 = arg0->unk1B4;
        if (temp_r2_123 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_123 - 1);
        }
        temp_r0_115 = arg0->unk354;
        if (temp_r0_115 == 0) {

        } else {
            func_08016BA4(temp_r0_115, ((temp_r2_123 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0xC8:
        temp_r2_124 = arg0->unk1B4;
        if (temp_r2_124 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_124 - 1);
        }
        temp_r0_116 = arg0->unk354;
        if (temp_r0_116 == 0) {

        } else {
            func_08016BC0(temp_r0_116, ((temp_r2_124 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x136:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_125 = arg0->unk1B4;
        if (temp_r2_125 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_125 - 1);
        }
        var_r2 = (void *) func_0809C304(arg0->unk350 + 0x3480, *(var_r6 + ((temp_r2_125 * 4) - 4)));
        goto block_1612;
    case 0x137:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_126 = arg0->unk1B4;
        if (temp_r2_126 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_126 - 1);
        }
        var_r2 = (void *) func_0809C444(arg0->unk350 + 0x3480, *(var_r6 + ((temp_r2_126 * 4) - 4)));
        goto block_1612;
    case 0x138:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_127 = arg0->unk1B4;
        if (temp_r2_127 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_127 - 1);
        }
        var_r2 = (void *) func_0809C474(arg0->unk350 + 0x3480, *(var_r6 + ((temp_r2_127 * 4) - 4)));
        goto block_1612;
    case 0x12F:
        if (arg0->unk354 == 0) {

        } else {
            func_08016C2C();
        }
        goto block_1708;
    case 0x130:
        if (arg0->unk354 != 0) {
            func_08016C48();
        }
        goto block_530;
    case 0x131:
        if (arg0->unk354 == 0) {

        } else {
            func_08016C6C();
        }
        goto block_1708;
    case 0x132:
        if (arg0->unk354 != 0) {
            func_08016C88();
        }
        goto block_530;
    case 0x64:
        if (arg0->unk354 != 0) {
            func_08016CAC();
        }
        return 2;
    case 0x65:
        if (arg0->unk354 == 0) {

        } else {
            func_08016CCC();
        }
        goto block_1708;
    case 0x66:
        if (arg0->unk354 == 0) {

        } else {
            func_08016D48();
        }
        goto block_1708;
    case 0x67:
        if (arg0->unk354 == 0) {

        } else {
            func_08016D80();
        }
        goto block_1708;
    case 0x68:
        var_r4_2 = 0x1D;
        if (arg0->unk354 != 0) {
            var_r4_2 = (u8) func_08016D9C();
        }
        var_r2_11 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r1_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        goto block_1692;
    case 0x69:
        if (arg0->unk354 != 0) {
            func_08016DB0();
        }
        goto block_530;
    case 0x6A:
        if (arg0->unk354 == 0) {

        } else {
            func_08016E7C();
        }
        goto block_1708;
    case 0x6B:
        if (arg0->unk354 != 0) {
            func_08016E9C();
        }
        goto block_530;
    case 0x139:
        temp_r6_37 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_128 = arg0->unk1B4;
        if (temp_r1_128 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_128 - 1);
        }
        temp_r1_129 = arg0->unk1B4;
        if (temp_r1_129 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_129 - 1);
        }
        temp_r1_130 = arg0->unk1B4;
        if (temp_r1_130 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_130 - 1);
        }
        temp_r1_131 = arg0->unk1B4;
        if (temp_r1_131 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_131 - 1);
        }
        temp_r4_54 = arg0->unk1B4;
        if (temp_r4_54 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_54 - 1);
        }
        temp_r1_132 = arg0->unk354;
        if (temp_r1_132 == 0) {

        } else {
            sp0 = *(temp_r6_37 + ((temp_r1_129 * 4) - 4));
            sp4 = (s32) (u16) *(temp_r6_37 + ((temp_r1_128 * 4) - 4));
            func_08016EC4(temp_r1_132, *(temp_r6_37 + ((temp_r4_54 * 4) - 4)), *(temp_r6_37 + ((temp_r1_131 * 4) - 4)), *(temp_r6_37 + ((temp_r1_130 * 4) - 4)));
        }
        goto block_1708;
    case 0x13A:
        temp_r2_128 = arg0->unk1B4;
        if (temp_r2_128 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_128 - 1);
        }
        temp_r0_117 = arg0->unk354;
        if (temp_r0_117 == 0) {

        } else {
            func_08016EF0(temp_r0_117, ((temp_r2_128 * 4) + arg0)->unk20);
        }
        goto block_1708;
    case 0x13D:
        var_r6_14 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r5_2 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_129 = arg0->unk1B4;
        if (temp_r2_129 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_129 - 1);
        }
        temp_r4_55 = &(GenObj *)((u8 *)sp0 + 0x36);
        __4ToolUi(temp_r4_55, *(var_r6_14 + ((temp_r2_129 * 4) - 4)));
        var_r0_12 = GetIconId__C4Tool(temp_r4_55);
block_1619:
        temp_r1_133 = *var_r5_2;
        if (temp_r1_133 > 0x63U) {

        } else {
            *((u8 *)var_r6_14 + (temp_r1_133 * 4)) = (s32) var_r0_12;
            *var_r5_2 = temp_r1_133 + 1;
        }
        goto block_1708;
    case 0x13B:
        var_r6 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_130 = arg0->unk1B4;
        if (temp_r2_130 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_130 - 1);
        }
        __4FoodUi(&spC, *(var_r6 + ((temp_r2_130 * 4) - 4)));
        var_r2 = (void *) GetIconId__C4Food(&spC);
        goto block_1612;
    case 0x13C:
        var_r6_14 = (GenObj *)((u8 *)arg0 + 0x24);
        var_r5_2 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r2_131 = arg0->unk1B4;
        if (temp_r2_131 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_131 - 1);
        }
        temp_r4_56 = &(GenObj *)((u8 *)sp0 + 0x37);
        __7ArticleUi(temp_r4_56, *(var_r6_14 + ((temp_r2_131 * 4) - 4)));
        var_r0_12 = GetIconId__C7Article(temp_r4_56);
        goto block_1619;
    case 0x76:
        temp_r2_132 = arg0->unk1B4;
        temp_r3_74 = ((temp_r2_132 * 4) + arg0)->unk20;
        if (temp_r2_132 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_132 - 1);
        }
        temp_r0_118 = arg0->unk354;
        if (temp_r0_118 == 0) {

        } else {
            func_08016F0C(temp_r0_118, (u32) ((0 - temp_r3_74) | temp_r3_74) >> 0x1F);
        }
        goto block_1708;
    case 0x60:
        temp_r1_134 = arg0->unk1B4;
        temp_r8 = ((temp_r1_134 * 4) + arg0)->unk20;
        if (temp_r1_134 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_134 - 1);
        }
        temp_r4_57 = arg0->unk350 + 0x1C2C;
        if (((func_0800F190(temp_r4_57) << 0x18) == 0) && (func_0800F204(temp_r4_57) == 1)) {
            sp38 = func_0800F258(temp_r4_57);
            var_r1_22 = 0;
            if (GetId__C7Article(&sp38) == temp_r8) {
                var_r1_22 = 1;
            }
            if (var_r1_22 != 0) {
                func_0800F390(temp_r4_57);
            }
        }
        temp_r7_25 = arg0->unk350 + 0x1C38;
        var_r6_15 = 0;
loop_1643:
        if (var_r6_15 < GetSize__C8Rucksack(temp_r7_25)) {
            temp_r4_58 = GetItemAt__8RucksackUi(temp_r7_25, var_r6_15);
            if (((IsEmpty__C12RucksackItem() << 0x18) == 0) && (GetKind__C12RucksackItem(temp_r4_58) == 1)) {
                sp0.unk39 = GetArticle__C12RucksackItem(temp_r4_58);
                var_r1_23 = 0;
                if (GetId__C7Article(&(GenObj *)((u8 *)sp0 + 0x39)) == temp_r8) {
                    var_r1_23 = 1;
                }
                if (var_r1_23 != 0) {
                    __12RucksackItem(&spC);
                    *temp_r4_58 = spC;
                }
            }
            var_r6_15 += 1;
            goto loop_1643;
        }
        if (GetShelf__9FarmHouse(arg0->unk350 + 0x1F4) == 0) {

        } else {
            temp_r7_26 = GetShelf__9FarmHouse(arg0->unk350 + 0x1F4);
            var_r5_3 = 0;
            do {
                temp_r4_59 = GetArticleStackAt__5ShelfUi(temp_r7_26, var_r5_3);
                temp_r6_38 = temp_r4_59;
                if ((IsEmpty__C12ArticleStack() << 0x18) == 0) {
                    sp0.unk3A = GetArticle__C12ArticleStack(temp_r4_59);
                    var_r1_24 = 0;
                    if (GetId__C7Article(&(GenObj *)((u8 *)sp0 + 0x3A)) == temp_r8) {
                        var_r1_24 = 1;
                    }
                    if (var_r1_24 != 0) {
                        __12ArticleStack(&spC);
                        memcpy(temp_r6_38, &spC, 2);
                    }
                }
                var_r5_3 += 1;
            } while (var_r5_3 <= 0x3FU);
        }
        goto block_1708;
    case 0x12A:
        temp_r2_133 = arg0->unk1B4;
        temp_r7_27 = ((temp_r2_133 * 4) + arg0)->unk20;
        if (temp_r2_133 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_133 - 1);
        }
        AddAffection__6Animali(arg0->unk350 + 0x1C70, temp_r7_27);
        if (GetHorse__4Farm(arg0->unk350 + 0x14) != 0) {
            AddAffection__6Animali(GetHorse__4Farm(arg0->unk350 + 0x14), temp_r7_27);
        }
        temp_r6_39 = arg0->unk350 + 0x410;
        var_r4_12 = 0;
loop_1662:
        if (var_r4_12 < GetCapacity__C4Coop(temp_r6_39)) {
            temp_r0_119 = GetChicken__4CoopUi(temp_r6_39, var_r4_12);
            if (temp_r0_119 != 0) {
                AddAffection__6Animali(temp_r0_119, temp_r7_27);
            }
            var_r4_12 += 1;
            goto loop_1662;
        }
        temp_r5_9 = arg0->unk350 + 0x5F0;
        var_r4_13 = 0;
loop_1667:
        if (var_r4_13 < GetCapacity__C4Barn(temp_r5_9)) {
            temp_r0_120 = GetBarnAnimal__4BarnUi(temp_r5_9, var_r4_13);
            if (temp_r0_120 != 0) {
                AddAffection__6Animali(temp_r0_120, temp_r7_27);
            }
            var_r4_13 += 1;
            goto loop_1667;
        }
        goto block_1708;
    case 0x129:
        if (arg0->unk354 == 0) {

        } else {
            func_08016F60();
        }
        goto block_1708;
    case 0x12E:
        temp_r6_40 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r1_135 = arg0->unk1B4;
        if (temp_r1_135 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_135 - 1);
        }
        temp_r1_136 = arg0->unk1B4;
        if (temp_r1_136 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_136 - 1);
        }
        temp_r1_137 = arg0->unk1B4;
        if (temp_r1_137 != 0) {
            arg0->unk1B4 = (u32) (temp_r1_137 - 1);
        }
        temp_r4_60 = arg0->unk1B4;
        if (temp_r4_60 != 0) {
            arg0->unk1B4 = (u32) (temp_r4_60 - 1);
        }
        temp_r1_138 = arg0->unk354;
        if (temp_r1_138 == 0) {

        } else {
            sp0 = *(temp_r6_40 + ((temp_r1_135 * 4) - 4));
            sp4 = 0;
            func_08016FA4(temp_r1_138, *(temp_r6_40 + ((temp_r4_60 * 4) - 4)), *(temp_r6_40 + ((temp_r1_137 * 4) - 4)), *(temp_r6_40 + ((temp_r1_136 * 4) - 4)));
        }
        goto block_1708;
    case 0x5A:
        temp_r2_134 = arg0->unk1B4;
        if (temp_r2_134 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_134 - 1);
        }
        temp_r0_121 = arg0->unk354;
        if (temp_r0_121 != 0) {
            func_08016F34(temp_r0_121, ((temp_r2_134 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0x1D:
        if (arg0->unk354 != 0) {
            func_08016784();
        }
        goto block_1708;
    case 0x133:
        var_r0_5 = func_0809AA28(arg0->unk350 + 0x2214);
        goto block_1690;
    case 0x142:
        temp_r2_135 = arg0->unk1B4;
        if (temp_r2_135 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_135 - 1);
        }
        temp_r0_122 = arg0->unk354;
        if (temp_r0_122 != 0) {
            func_0801589C(temp_r0_122, (u16) ((temp_r2_135 * 4) + arg0)->unk20);
        }
        goto block_530;
    case 0x145:
        var_r2_12 = (GenObj *)((u8 *)arg0 + 0x1B4);
        temp_r3_75 = arg0->unk1B4;
        if (temp_r3_75 <= 0x63U) {
            var_r0_3 = (GenObj *)((u8 *)arg0 + 0x24) + (temp_r3_75 * 4);
            var_r1_15 = arg0->unk358;
            goto block_1701;
        }
        goto block_1708;
    case 0x144:
        temp_r4_61 = (GenObj *)((u8 *)arg0 + 0x24);
        temp_r2_136 = arg0->unk1B4;
        if (temp_r2_136 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_136 - 1);
        }
        temp_r2_137 = arg0->unk1B4;
        temp_r6_41 = *(temp_r4_61 + ((temp_r2_137 * 4) - 4));
        if (temp_r2_137 != 0) {
            arg0->unk1B4 = (u32) (temp_r2_137 - 1);
        }
        temp_r5_10 = arg0->unk354;
        if (temp_r5_10 != 0) {
            temp_r4_62 = &(GenObj *)((u8 *)sp0 + 0x3B);
            __7ProductUi(temp_r4_62, *(temp_r4_61 + ((temp_r2_136 * 4) - 4)));
            func_08012ACC(temp_r5_10, temp_r6_41, GetName__C7Product(temp_r4_62));
        }
        goto block_1708;
    }
}
