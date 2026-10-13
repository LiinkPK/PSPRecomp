/* Entry 0x089A3E3C | file offset 0x001A0E14 | FUN_089a3e3c | bytes 128 */

undefined4 * FUN_089a3e3c(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [36])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [36];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [36];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar6 = vcst_s(5);
  uVar6 = vmul_s(param_1,uVar6);
  auVar1 = vidt_q();
  auVar3 = vrot_t(uVar6,0,1,2);
  auVar4 = vrot_t(uVar6,0,3,1);
  if (param_3 == (undefined1 (*) [36])0x0) {
    auVar5._24_12_ = auVar4;
    auVar5._20_4_ = auVar3._8_4_;
    auVar5._16_4_ = auVar3._4_4_;
    auVar5._12_4_ = auVar3._0_4_;
    auVar5._8_4_ = auVar1._8_4_;
    auVar5._4_4_ = auVar1._4_4_;
    auVar5._0_4_ = auVar1._0_4_;
    auVar2 = vmmov_t(auVar5);
    uVar6 = auVar2._0_4_;
    uVar9 = auVar2._4_4_;
    uVar12 = auVar2._8_4_;
    uVar7 = auVar2._12_4_;
    uVar10 = auVar2._16_4_;
    uVar13 = auVar2._20_4_;
    uVar8 = auVar2._24_4_;
    uVar11 = auVar2._28_4_;
    uVar14 = auVar2._32_4_;
  }
  else {
    auVar2._24_12_ = auVar4;
    auVar2._20_4_ = auVar3._8_4_;
    auVar2._16_4_ = auVar3._4_4_;
    auVar2._12_4_ = auVar3._0_4_;
    auVar2._8_4_ = auVar1._8_4_;
    auVar2._4_4_ = auVar1._4_4_;
    auVar2._0_4_ = auVar1._0_4_;
    auVar2 = vmmul_t(*param_3,auVar2);
    uVar6 = auVar2._0_4_;
    uVar9 = auVar2._4_4_;
    uVar12 = auVar2._8_4_;
    uVar7 = auVar2._12_4_;
    uVar10 = auVar2._16_4_;
    uVar13 = auVar2._20_4_;
    uVar8 = auVar2._24_4_;
    uVar11 = auVar2._28_4_;
    uVar14 = auVar2._32_4_;
  }
  *param_2 = uVar6;
  param_2[1] = uVar9;
  param_2[2] = uVar12;
  param_2[3] = uVar7;
  param_2[4] = uVar10;
  param_2[5] = uVar13;
  param_2[6] = uVar8;
  param_2[7] = uVar11;
  param_2[8] = uVar14;
  return param_2;
}

