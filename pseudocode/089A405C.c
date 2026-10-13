/* Entry 0x089A405C | file offset 0x001A1034 | FUN_089a405c | bytes 56 */

undefined4 * FUN_089a405c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [36];
  
  uVar5 = param_2[1];
  uVar8 = param_2[2];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar9 = param_2[6];
  uVar4 = param_2[8];
  uVar7 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xf];
  auVar1 = vzero_t();
  auVar12._32_4_ = uVar10;
  auVar12._28_4_ = uVar9;
  auVar12._24_4_ = uVar8;
  auVar12._20_4_ = uVar7;
  auVar12._16_4_ = uVar6;
  auVar12._12_4_ = uVar5;
  auVar12._8_4_ = uVar4;
  auVar12._4_4_ = uVar3;
  auVar12._0_4_ = *param_2;
  auVar2 = vtfm3_t(auVar12,*(undefined1 (*) [12])(param_2 + 0xc));
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = auVar1._0_4_;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = auVar1._4_4_;
  auVar2 = vneg_t(auVar2);
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = auVar1._8_4_;
  param_1[0xc] = auVar2._0_4_;
  param_1[0xd] = auVar2._4_4_;
  param_1[0xe] = auVar2._8_4_;
  param_1[0xf] = uVar11;
  return param_1;
}

