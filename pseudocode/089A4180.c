/* Entry 0x089A4180 | file offset 0x001A1158 | FUN_089a4180 | bytes 92 */

undefined4 * FUN_089a4180(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [64])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = vcst_s(5);
  uVar7 = vmul_s(param_1,uVar7);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar7,0,1,2,0);
  auVar5 = vrot_q(uVar7,0,3,1,0);
  auVar2 = vidt_q();
  if (param_3 == (undefined1 (*) [64])0x0) {
    auVar6._48_16_ = auVar2;
    auVar6._44_4_ = auVar5._12_4_;
    auVar6._40_4_ = auVar5._8_4_;
    auVar6._36_4_ = auVar5._4_4_;
    auVar6._32_4_ = auVar5._0_4_;
    auVar6._28_4_ = auVar4._12_4_;
    auVar6._24_4_ = auVar4._8_4_;
    auVar6._20_4_ = auVar4._4_4_;
    auVar6._16_4_ = auVar4._0_4_;
    auVar6._12_4_ = auVar1._12_4_;
    auVar6._8_4_ = auVar1._8_4_;
    auVar6._4_4_ = auVar1._4_4_;
    auVar6._0_4_ = auVar1._0_4_;
    auVar3 = vmmov_q(auVar6);
    uVar7 = auVar3._0_4_;
    uVar11 = auVar3._4_4_;
    uVar15 = auVar3._8_4_;
    uVar19 = auVar3._12_4_;
    uVar8 = auVar3._16_4_;
    uVar12 = auVar3._20_4_;
    uVar16 = auVar3._24_4_;
    uVar20 = auVar3._28_4_;
    uVar9 = auVar3._32_4_;
    uVar13 = auVar3._36_4_;
    uVar17 = auVar3._40_4_;
    uVar21 = auVar3._44_4_;
    uVar10 = auVar3._48_4_;
    uVar14 = auVar3._52_4_;
    uVar18 = auVar3._56_4_;
    uVar22 = auVar3._60_4_;
  }
  else {
    auVar3._48_16_ = auVar2;
    auVar3._44_4_ = auVar5._12_4_;
    auVar3._40_4_ = auVar5._8_4_;
    auVar3._36_4_ = auVar5._4_4_;
    auVar3._32_4_ = auVar5._0_4_;
    auVar3._28_4_ = auVar4._12_4_;
    auVar3._24_4_ = auVar4._8_4_;
    auVar3._20_4_ = auVar4._4_4_;
    auVar3._16_4_ = auVar4._0_4_;
    auVar3._12_4_ = auVar1._12_4_;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = auVar1._4_4_;
    auVar3._0_4_ = auVar1._0_4_;
    auVar3 = vmmul_q(*param_3,auVar3);
    uVar7 = auVar3._0_4_;
    uVar11 = auVar3._4_4_;
    uVar15 = auVar3._8_4_;
    uVar19 = auVar3._12_4_;
    uVar8 = auVar3._16_4_;
    uVar12 = auVar3._20_4_;
    uVar16 = auVar3._24_4_;
    uVar20 = auVar3._28_4_;
    uVar9 = auVar3._32_4_;
    uVar13 = auVar3._36_4_;
    uVar17 = auVar3._40_4_;
    uVar21 = auVar3._44_4_;
    uVar10 = auVar3._48_4_;
    uVar14 = auVar3._52_4_;
    uVar18 = auVar3._56_4_;
    uVar22 = auVar3._60_4_;
  }
  *param_2 = uVar7;
  param_2[1] = uVar11;
  param_2[2] = uVar15;
  param_2[3] = uVar19;
  param_2[4] = uVar8;
  param_2[5] = uVar12;
  param_2[6] = uVar16;
  param_2[7] = uVar20;
  param_2[8] = uVar9;
  param_2[9] = uVar13;
  param_2[10] = uVar17;
  param_2[0xb] = uVar21;
  param_2[0xc] = uVar10;
  param_2[0xd] = uVar14;
  param_2[0xe] = uVar18;
  param_2[0xf] = uVar22;
  return param_2;
}

