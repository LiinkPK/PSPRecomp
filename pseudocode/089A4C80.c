/* Entry 0x089A4C80 | file offset 0x001A1C58 | FUN_089a4c80 | bytes 356 */

undefined4 * FUN_089a4c80(undefined4 *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  
  fVar6 = param_2[1];
  fVar8 = param_2[2];
  fVar10 = param_2[3] + param_2[3];
  fVar4 = fVar6 + fVar6;
  fVar9 = *param_2;
  fVar7 = -(fVar4 * fVar8 - fVar10 * fVar9);
  if ((0.99995 < fVar7) || (fVar7 < -0.99995)) {
    fVar9 = -((fVar8 + fVar8) * fVar9 - fVar10 * fVar6);
    uVar1 = FUN_089a3168(fVar7);
    uVar2 = FUN_089a2ef8(fVar9,(1.0 - fVar4 * fVar6) - (fVar8 + fVar8) * fVar8);
    uVar3 = 0;
    *param_1 = uVar1;
  }
  else {
    fVar11 = (fVar9 + fVar9) * fVar6;
    fVar5 = 1.0 - (fVar9 + fVar9) * fVar9;
    fVar12 = fVar11 + fVar10 * fVar8;
    fVar4 = fVar5 - fVar4 * fVar6;
    uVar1 = FUN_089a3168(fVar7,fVar10 * fVar6,fVar11,fVar10 * fVar8);
    uVar2 = FUN_089a2ef8((fVar8 + fVar8) * fVar9 + fVar10 * fVar6,fVar4);
    uVar3 = FUN_089a2ef8(fVar12,fVar5 - (fVar8 + fVar8) * fVar8);
    *param_1 = uVar1;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return param_1;
}

