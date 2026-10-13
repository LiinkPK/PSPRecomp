/* Entry 0x089A35F8 | file offset 0x001A05D0 | FUN_089a35f8 | bytes 136 */

undefined4 *
FUN_089a35f8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined4 in_V0C;
  undefined4 in_V0D;
  undefined4 in_V0E;
  undefined4 in_V0F;
  undefined4 in_V10;
  undefined4 in_V11;
  undefined4 in_V12;
  undefined4 in_V13;
  undefined4 in_V14;
  undefined4 in_V15;
  undefined4 in_V16;
  undefined4 in_V17;
  undefined4 in_V18;
  undefined4 in_V19;
  undefined4 in_V1A;
  undefined4 in_V1B;
  undefined4 in_V1C;
  undefined4 in_V1D;
  undefined4 in_V1E;
  undefined4 in_V1F;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = vone_s();
  uVar9 = vmul_s(param_1,param_1);
  vpfxs(6,5,5,0x16);
  auVar1._12_4_ = in_V1C;
  auVar1._8_4_ = in_V18;
  auVar1._4_4_ = in_V14;
  auVar1._0_4_ = in_V10;
  auVar1 = vmov_q(auVar1);
  vpfxs(0x14,0x16,0x15,4);
  auVar2._12_4_ = in_V1D;
  auVar2._8_4_ = in_V19;
  auVar2._4_4_ = in_V15;
  auVar2._0_4_ = in_V11;
  auVar2 = vmov_q(auVar2);
  uVar8 = vmul_s(uVar9,param_1);
  vpfxs(4,5,4,4);
  auVar3._12_4_ = in_V1E;
  auVar3._8_4_ = in_V1A;
  auVar3._4_4_ = in_V16;
  auVar3._0_4_ = in_V12;
  auVar3 = vmov_q(auVar3);
  vpfxs(5,4,4,4);
  auVar4._12_4_ = in_V1F;
  auVar4._8_4_ = in_V1B;
  auVar4._4_4_ = in_V17;
  auVar4._0_4_ = in_V13;
  auVar4 = vmov_q(auVar4);
  auVar6._48_16_ = auVar4;
  auVar6._44_4_ = auVar3._12_4_;
  auVar6._40_4_ = auVar3._8_4_;
  auVar6._36_4_ = auVar3._4_4_;
  auVar6._32_4_ = auVar3._0_4_;
  auVar6._28_4_ = auVar2._12_4_;
  auVar6._24_4_ = auVar2._8_4_;
  auVar6._20_4_ = auVar2._4_4_;
  auVar6._16_4_ = auVar2._0_4_;
  auVar6._12_4_ = auVar1._12_4_;
  auVar6._8_4_ = auVar1._8_4_;
  auVar6._4_4_ = auVar1._4_4_;
  auVar6._0_4_ = auVar1._0_4_;
  auVar5._12_4_ = uVar10;
  auVar5._8_4_ = param_1;
  auVar5._4_4_ = uVar9;
  auVar5._0_4_ = uVar8;
  auVar1 = vtfm4_q(auVar6,auVar5);
  auVar7._60_4_ = in_V0F;
  auVar7._56_4_ = param_5[2];
  auVar7._52_4_ = param_5[1];
  auVar7._48_4_ = *param_5;
  auVar7._44_4_ = in_V0E;
  auVar7._40_4_ = param_6[2];
  auVar7._36_4_ = param_6[1];
  auVar7._32_4_ = *param_6;
  auVar7._28_4_ = in_V0D;
  auVar7._24_4_ = param_4[2];
  auVar7._20_4_ = param_4[1];
  auVar7._16_4_ = *param_4;
  auVar7._12_4_ = in_V0C;
  auVar7._8_4_ = param_3[2];
  auVar7._4_4_ = param_3[1];
  auVar7._0_4_ = *param_3;
  auVar1 = vtfm4_q(auVar7,auVar1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  return param_2;
}

