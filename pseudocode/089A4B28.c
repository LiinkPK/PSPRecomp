/* Entry 0x089A4B28 | file offset 0x001A1B00 | FUN_089a4b28 | bytes 344 */

undefined4 * FUN_089a4b28(undefined4 *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = param_2[2];
  fVar6 = *param_2;
  fVar8 = param_2[3] + param_2[3];
  fVar7 = fVar4 + fVar4;
  fVar5 = param_2[1];
  fVar10 = fVar7 * fVar6 + fVar8 * fVar5;
  if ((0.99995 < fVar10) || (fVar10 < -0.99995)) {
    uVar1 = FUN_089a2ef8((fVar5 + fVar5) * fVar4 + fVar8 * fVar6,
                         (1.0 - (fVar6 + fVar6) * fVar6) - fVar7 * fVar4);
    uVar2 = FUN_089a3168(fVar10);
    uVar3 = 0;
    *param_1 = uVar1;
  }
  else {
    fVar9 = (fVar5 + fVar5) * fVar5;
    fVar7 = (1.0 - fVar9) - fVar7 * fVar4;
    uVar1 = FUN_089a2ef8(-((fVar5 + fVar5) * fVar4 - fVar8 * fVar6),
                         (1.0 - (fVar6 + fVar6) * fVar6) - fVar9);
    uVar2 = FUN_089a3168(fVar10);
    uVar3 = FUN_089a2ef8(-((fVar6 + fVar6) * fVar5 - fVar8 * fVar4),fVar7);
    *param_1 = uVar1;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return param_1;
}

