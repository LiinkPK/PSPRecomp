/* Entry 0x089A4094 | file offset 0x001A106C | FUN_089a4094 | bytes 52 */

undefined4 * FUN_089a4094(undefined4 *param_1,undefined4 *param_2,undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  uVar10 = param_2[3];
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  uVar8 = param_2[6];
  uVar11 = param_2[7];
  uVar3 = param_2[8];
  uVar6 = param_2[9];
  uVar9 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = *(undefined4 *)param_3[1];
  auVar1 = vadd_t(*param_3,*(undefined1 (*) [12])(param_2 + 0xc));
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  param_1[3] = uVar10;
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  param_1[6] = uVar8;
  param_1[7] = uVar11;
  param_1[8] = uVar3;
  param_1[9] = uVar6;
  param_1[10] = uVar9;
  param_1[0xb] = uVar12;
  param_1[0xc] = auVar1._0_4_;
  param_1[0xd] = auVar1._4_4_;
  param_1[0xe] = auVar1._8_4_;
  param_1[0xf] = uVar13;
  return param_1;
}

