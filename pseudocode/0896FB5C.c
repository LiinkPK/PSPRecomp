/* Entry 0x0896FB5C | file offset 0x0016CB34 | FUN_0896fb5c | bytes 100 */

void FUN_0896fb5c(undefined4 *param_1)

{
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  
  auVar1._60_4_ = DAT_089da278[0xf];
  auVar1._56_4_ = DAT_089da278[0xb];
  auVar1._52_4_ = DAT_089da278[7];
  auVar1._48_4_ = DAT_089da278[3];
  auVar1._44_4_ = DAT_089da278[0xe];
  auVar1._40_4_ = DAT_089da278[10];
  auVar1._36_4_ = DAT_089da278[6];
  auVar1._32_4_ = DAT_089da278[2];
  auVar1._28_4_ = DAT_089da278[0xd];
  auVar1._24_4_ = DAT_089da278[9];
  auVar1._20_4_ = DAT_089da278[5];
  auVar1._16_4_ = DAT_089da278[1];
  auVar1._12_4_ = DAT_089da278[0xc];
  auVar1._8_4_ = DAT_089da278[8];
  auVar1._4_4_ = DAT_089da278[4];
  auVar1._0_4_ = *DAT_089da278;
  auVar2._60_4_ = param_1[0xf];
  auVar2._56_4_ = param_1[0xb];
  auVar2._52_4_ = param_1[7];
  auVar2._48_4_ = param_1[3];
  auVar2._44_4_ = param_1[0xe];
  auVar2._40_4_ = param_1[10];
  auVar2._36_4_ = param_1[6];
  auVar2._32_4_ = param_1[2];
  auVar2._28_4_ = param_1[0xd];
  auVar2._24_4_ = param_1[9];
  auVar2._20_4_ = param_1[5];
  auVar2._16_4_ = param_1[1];
  auVar2._12_4_ = param_1[0xc];
  auVar2._8_4_ = param_1[8];
  auVar2._4_4_ = param_1[4];
  auVar2._0_4_ = *param_1;
  vmmul_q(auVar1,auVar2);
  FUN_089a04f4(1);
  return;
}

