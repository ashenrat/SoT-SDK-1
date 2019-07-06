#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PetMonkey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PetMonkey.BP_Anim_PetMonkey_C
// 0x44A9 (0x4C39 - 0x0790)
class UBP_Anim_PetMonkey_C : public UWieldablePetAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2CE96E74453BC142D679FA29E2E5E3A;      // 0x0798(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5E14B5D49CA93166AC5F4A9D1C7618D;// 0x07E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505;// 0x0820(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A5E2116411D49FF98C527A2DB7E247A;// 0x0860(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F;// 0x08A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941;// 0x08E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29F98BB1442BF04B05BD0F9FE2929D6A;// 0x0920(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BC35DC04D4C99E23EFAB9AC386323B9;// 0x0960(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6;// 0x09A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6B73E72442EC4B0050ACDB8C7648A2A;// 0x09E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8163D8404FBAB7B56325828383E60895;// 0x0A20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03;// 0x0A60(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2100A24D4B402986ED13008A8C3F664A;// 0x0AA0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D2;// 0x0AF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BEF41B7C4A106CA609AAD4B04476ACBF;// 0x0B40(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FE7831246301D1DE191CC9C4AD711E1;// 0x0B98(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A8E1B3FF4C4DE9AA560F138976ACB0EF;// 0x0BE0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BAD736F54941881A971AC7B744D9B294;// 0x0C30(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E40CDC4A7BDB92258145AC8187E56A;// 0x0C78(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56D29A914E8EDC22B3DCEF82C53C4E05;// 0x0CB8(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FADA915F45B2717234C7528DFFC4428C;// 0x0D10(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C5D79C15449BD4C30E72F69063A7889D;// 0x0D68(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCC1B1524984C535B85947A987165825;// 0x0E18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB88903240D823C98F8FD6A75186E3D2;// 0x0E60(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E371AF5244C7E4338DA73F8F656C3C1D;// 0x0EB8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_56500AEC4BDB457D6C8F43B9E4884AFF;// 0x0F00(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1485B3AE4CB31265DD7B38A622C83A3A;// 0x0F48(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9B5AC79B4E09534EF49104B97B5C3A5D;// 0x0FD8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ADF1DC04106EF4AE0ACA1B1BCFCABE6;// 0x1020(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EDD2BC91472CA021B2D44086F9783E96;// 0x1060(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7B61B0D4E24346D9E5292933FFFAAFE;// 0x10A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7BEBCE0439AFD9CBB02EF98E5E63DD7;// 0x10E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E;// 0x1120(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5BCA08F4FED14BE58AFD69EAD9DCDCA;// 0x1160(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6DA4416649E813BCFC7405AD677C95B0;// 0x11A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BA32CF1540EDFD60A30042B9AD2006F5;// 0x11E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_039BFE6E4A3C59B37EB1B2AAAD291A1E;// 0x1220(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EECE1E5942E3F2BF1D942FAFA6D127E3;// 0x1260(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8910E96459EE9B13D9319823E3E343F;// 0x12A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE7A3FE54EBAA6FE4810DDB2EF312941;// 0x12E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EBB041433C2EA60FA96798501326F9;// 0x1320(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C81D9F4AAB93F7CE54AFBFDC56165A;// 0x1360(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03DD814D41C7DD05ADC55CAEBAF70A67;// 0x13A0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32515B740514955947CB58148766A41;// 0x13F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEE91195407D2912C984029E89E8DA04;// 0x1440(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9885113E4A6D748165AA049AD2404AEC;// 0x1498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EA70F5642C78E75AA91C98EE0900858;// 0x14E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C05901541134C2469F82383BB9DC032;// 0x1528(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50441DBC4000266950F8E2870C850029;// 0x15D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E06C7E5C461E86DCF70F6093B83CD614;// 0x1618(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DFEA8994BE8183C2AAA929FAF57CB24;// 0x1670(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0F86B854514274E3214E88620FCC5C0;// 0x16B8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D;// 0x1710(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_A9D0AE5047E374911C3B648F42F8C25D;// 0x1758(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7D3E8314AB82AF8D71F1F9C687B55FE;// 0x1790(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DACDA9CF4EDB91772CF553BC10363AF3;// 0x1840(0x0058)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_00F2FFB740825C45F6E8DCA2CE062FBB;// 0x1898(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E48AA12448571C09D7BBB39C6AB0A235;// 0x1908(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD1AACC54E5EA7DF142704AE8AA72571;// 0x19C8(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_629CA4DA42E98BD7C164399CC9A248F5;// 0x1A20(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C9121C1457E411EC2E8E9BCD18F5596;// 0x1B28(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9;// 0x1B70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811;// 0x1BB0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD7061F845D192AC7F18BFB49B137E75;// 0x1BF0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A873C5F4C4B86926131DDA61C3F42AF;// 0x1C48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDF526674A846D513F2F94A764B8EF44;// 0x1C90(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B77202;// 0x1CE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BC15BAED48E24F4CC719068E38D0E302;// 0x1D30(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C872364429A7C29536A3C9E06439031;// 0x1DD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B976B710493EF408B68794B70C07F9C4;// 0x1E20(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_076BABF54A21D844310FBEA603AF0743;// 0x1EC8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1E85AC844201B222712CAA9900023DCA;// 0x1F10(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB;// 0x1F80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F;// 0x1FC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744;// 0x2000(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508;// 0x2040(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B;// 0x2080(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE;// 0x20C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4;// 0x2100(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D;// 0x2140(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7;// 0x2180(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44;// 0x21C0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_915ED21A48773851A7DA7BA3B927A016;// 0x2200(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C828FC474922FAB031E994E10D21FC;// 0x2258(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F0EA831488C7F8AB7696989129570A9;// 0x22A0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91030B4947860E3AA66E429FD09515ED;// 0x22F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25C125B44D6EF9032F7313B04470E2DD;// 0x2340(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BD03B742BB0CD97E6E449E19E85713;// 0x2398(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17CBC61B49C867C04B4F88A19C0A3B2C;// 0x23E0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_600CA90D4C8988B0638A02979F23B519;// 0x2438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4B799224162C2751FC2178121B94459;// 0x2480(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_85EA466442ACE97D02107995173D57BD;// 0x24C0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619A70CE4ADC86622048E5A8D154F44B;// 0x24F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D1F75504424C237BD1DC0F83F939CC23;// 0x2540(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5F0C2E243CAA1A789558384ED352889;// 0x25E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EA5A87BB4E8C399E1F6B568335CFFBB8;// 0x2630(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7AB72AF4C8D55ED0D7BB9B5F67DF6D8;// 0x26D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE02;// 0x2718(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0EDE89A482F035A29EA2D86C20E6B90;// 0x2758(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B2;// 0x2798(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76D021F047BB19C0732B289AE48A375C;// 0x27D8(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12D300C642734B62B2D6139993874BFD;// 0x2818(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3F81EB14D8770E016695D9287B605F6;// 0x2920(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9F18BA8840F7EB160FC02C8EE6DDB3FE;// 0x2968(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46994D2A4B0D61A28B461BA36CE7358E;// 0x29B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1AE224834A4418B4D2E5FB8A1836E46C2;// 0x2A68(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D2;// 0x2AC0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9DA6CC1B4CC2ADB5A01817B0DC9D651C;// 0x2B08(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EE639DA74D4AAC3C88C335AADFC46A1C;// 0x2B58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E9C1745487D3E025824CE94B6B274642;// 0x2C08(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F2;// 0x2C60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9EE7794840EEFF1692263084CDCFAA41;// 0x2CA8(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_375B182343B34140FEAA59994E68B168;// 0x2D50(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1BC9B1514443B20ED5629A86CA06F2EE;// 0x2DC0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276;// 0x2E70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702;// 0x2EB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC;// 0x2EF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C;// 0x2F30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19;// 0x2F70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3;// 0x2FB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3;// 0x2FF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7;// 0x3030(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9442CA2A4B1DA3B89208A88743C00140;// 0x3070(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_838978C14E639E314854248E855C2286;// 0x30C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A33408C049617328182CEC8FD37D4AE2;// 0x3110(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A1;// 0x3168(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B92BBBA14B439D2B89E727A65D6DA506;// 0x31B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03FA4AA44D85E207016FE896B6CABAEE;// 0x3208(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3603E93F45D55F688DC352A8A2944AF0;// 0x3250(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA33407A4592EAC76556A5A51392E06E;// 0x32A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4353D6C24348B435736EA09DFE28ABC8;// 0x32F0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F7334DD464F2D098B6F1685009427CC;// 0x3330(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_191DF8A3454BBAAD60E407A35E7651FC;// 0x33D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97E5EE0F4EA0FBDCBF69959191C9E7E4;// 0x3418(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1;// 0x3458(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664;// 0x3498(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC;// 0x34D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4;// 0x3518(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78EA3E4E486C2B912505ACA3F2417525;// 0x3558(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535;// 0x3598(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794;// 0x35D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90A1031D41CD1E055B5CB6A2C506D545;// 0x3618(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD;// 0x3658(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D77246C48209E160156DF97BC612EDB;// 0x3698(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D2DD3AB4A40CC2DA18F2CAEF0CA47DE;// 0x36D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52488D95455B906211C0669853531375;// 0x3718(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4;// 0x3758(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CD83675433917B40D4D62BDB4D13221;// 0x3798(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448;// 0x37D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA992A584118EAF768F428A20E852EEE;// 0x3818(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D8A2FB7F4BF17FA153026CBF4E746905;// 0x3870(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF4CDBF945EF6C9753B06885C50662B6;// 0x38B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B6E23BC4369C6521D2A0AB1C21A7035;// 0x38F8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3BD5E52D406B783C28DADD8577F21913;// 0x3950(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E5FC67A426A8DFE618092926AAA917C;// 0x3998(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F63E36D4DDD60239049A58D1DB585E2;// 0x39F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_461525594A015D6C8A6D149717A60279;// 0x3A38(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D86BD52B4288AB6BF586A097EEC2ED8F;// 0x3AE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DFD55D8946823192D24283A8C4CF46F3;// 0x3B28(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A658031406C1B61413A50B73D93AF0C;// 0x3B80(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926;// 0x3BC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1E1BFB04AF117FEFFA3AD9D724BD59D;// 0x3C08(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0827967F4209756104DC8D9FB546B3EA;// 0x3C60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C3F5D9C4FEBF4BC2A1002B4820F81F7;// 0x3CA8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5E56D6449BDD051FD7EEEBDA1BED0B4;// 0x3D00(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_74AEEB91485327020363F2BB8579B67F;// 0x3D48(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0E3193E49F04B21F48F9A8002671E0E;// 0x3DF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B4EFFED4FB6A35FF023BCA6387A4207;// 0x3E38(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38118D4945530B5D3203B5BB62CA95B7;// 0x3E90(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA0DB2C4D170240A5D522AA7784325C;// 0x3ED8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ADA64E14DC5CF4D6E97A0A4143310A8;// 0x3F18(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_07C9E32B410A3928CCEB0FA1E37F9CDB;// 0x3F70(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9F3DD3D41BC39DF21039C9C3B845CE8;// 0x3FB8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20D62F114A2750DFA3E20FB308A0E1F7;// 0x3FF8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_04F89A414E8BA3807388CCB694A13FEA;// 0x4050(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD56E95842BC63E29B37D78F6359EB49;// 0x4098(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B0A81A9C4E4A8758E5329B941851FAB9;// 0x40F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_57964E5640053928C566609C0C476E85;// 0x4138(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C6A7DB4F487C5016D69887A7D72D80F0;// 0x41E0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_55366DB748C4978D45056B8323AD2B90;// 0x4228(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB83E9944E3A2843BF04DDBC14A161A7;// 0x4330(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33B721FF4FBDF8EA99BE699F9321EF9D;// 0x4378(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1433896B422DD02F722E888BCA82B256;// 0x43D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0;// 0x4418(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B;// 0x4458(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1AE224834A4418B4D2E5FB8A1836E46C;// 0x4498(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D;// 0x44F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E9C1745487D3E025824CE94B6B27464;// 0x4538(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F;// 0x4590(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9686E1AB453C8231555FA691ECE91566;// 0x45D8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B7720;// 0x4680(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DEF106A4629BE203143D2AB248EBAE2;// 0x46C8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99879163458DB39050F11B8F371FC8B5;// 0x4770(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC0A5DAB449334BC099C84BA3AEA999E;// 0x47B8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C843E5464DFEE227EA7EACF913C662;// 0x4810(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DF6CC67470D4F2EB38FFF9F88AC9E6F;// 0x4858(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8A7347834E214C280FD58FBF687561BC;      // 0x4900(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AA3629F84E6F8810D32D918AA8CC9358;// 0x4960(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7D11EC6A493A4814B509ABA2BC456414;// 0x49A8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5762229E421479A72A95AFAD857A33C3;    // 0x49F0(0x00C0)
	struct FPetAnimationDataBeingHeld                  PetHeldAnimations;                                        // 0x4AB0(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPetAnimationDataRoaming                    PetRoamingAnimations;                                     // 0x4B98(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ReactActive;                                              // 0x4C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PetMonkey.BP_Anim_PetMonkey_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_D5E14B5D49CA93166AC5F4A9D1C7618D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_29F98BB1442BF04B05BD0F9FE2929D6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_7BC35DC04D4C99E23EFAB9AC386323B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C6B73E72442EC4B0050ACDB8C7648A2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_8163D8404FBAB7B56325828383E60895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_BEF41B7C4A106CA609AAD4B04476ACBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequenceEvaluator_A8E1B3FF4C4DE9AA560F138976ACB0EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_56D29A914E8EDC22B3DCEF82C53C4E05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_FADA915F45B2717234C7528DFFC4428C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_AB88903240D823C98F8FD6A75186E3D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_ModifyBone_1485B3AE4CB31265DD7B38A622C83A3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_6ADF1DC04106EF4AE0ACA1B1BCFCABE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_EDD2BC91472CA021B2D44086F9783E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_B7B61B0D4E24346D9E5292933FFFAAFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_D7BEBCE0439AFD9CBB02EF98E5E63DD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C5BCA08F4FED14BE58AFD69EAD9DCDCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_6DA4416649E813BCFC7405AD677C95B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_039BFE6E4A3C59B37EB1B2AAAD291A1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_DD7061F845D192AC7F18BFB49B137E75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_BDF526674A846D513F2F94A764B8EF44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_F7AB72AF4C8D55ED0D7BB9B5F67DF6D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_E0EDE89A482F035A29EA2D86C20E6B90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_76D021F047BB19C0732B289AE48A375C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_BlendSpacePlayer_12D300C642734B62B2D6139993874BFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequenceEvaluator_9F18BA8840F7EB160FC02C8EE6DDB3FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_1AE224834A4418B4D2E5FB8A1836E46C_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequenceEvaluator_9DA6CC1B4CC2ADB5A01817B0DC9D651C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_4E9C1745487D3E025824CE94B6B27464_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_BlendListByBool_1BC9B1514443B20ED5629A86CA06F2EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_9442CA2A4B1DA3B89208A88743C00140();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_A33408C049617328182CEC8FD37D4AE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_B92BBBA14B439D2B89E727A65D6DA506();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_3603E93F45D55F688DC352A8A2944AF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_191DF8A3454BBAAD60E407A35E7651FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_97E5EE0F4EA0FBDCBF69959191C9E7E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_78EA3E4E486C2B912505ACA3F2417525();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_90A1031D41CD1E055B5CB6A2C506D545();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_8D77246C48209E160156DF97BC612EDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_3D2DD3AB4A40CC2DA18F2CAEF0CA47DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_52488D95455B906211C0669853531375();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_3CD83675433917B40D4D62BDB4D13221();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_DA992A584118EAF768F428A20E852EEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_FF4CDBF945EF6C9753B06885C50662B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_3B6E23BC4369C6521D2A0AB1C21A7035();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_5E5FC67A426A8DFE618092926AAA917C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_DFD55D8946823192D24283A8C4CF46F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_E1E1BFB04AF117FEFFA3AD9D724BD59D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_1C3F5D9C4FEBF4BC2A1002B4820F81F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_0ADA64E14DC5CF4D6E97A0A4143310A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_E9F3DD3D41BC39DF21039C9C3B845CE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_20D62F114A2750DFA3E20FB308A0E1F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_BD56E95842BC63E29B37D78F6359EB49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_1AE224834A4418B4D2E5FB8A1836E46C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_SequencePlayer_4E9C1745487D3E025824CE94B6B27464();
	void BlueprintInitializeAnimation();
	void AnimNotify_NewIdleA();
	void AnimNotify_NewIdleB();
	void AnimNotify_UnEquipCompleted();
	void AnimNotify_AssignUniqueAnims();
	void AnimNotify_ExitTakeOff();
	void AnimNotify_NewBaseIdleA();
	void AnimNotify_NewBaseIdleB();
	void AnimNotify_PetLookAt_On();
	void AnimNotify_PetLookAt_Off();
	void AnimNotify_StaticBaseOn();
	void AnimNotify_StaticBaseOff();
	void ExecuteUbergraph_BP_Anim_PetMonkey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
