/* Entry 0x08830954 | file offset 0x0002D92C | FUN_08830954 | bytes 564 */

void FUN_08830954(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_30;
  float local_2c;
  
  FUN_089a3868(&local_30,param_2 + 0x10);
  uVar2 = FUN_08868128(param_3,param_4,0);
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  fVar3 = (float)FUN_08867e7c(uVar2);
  if (2.8797932 < fVar3) {
    if (0.0 < local_2c) {
      uVar2 = 0x40384e88;
    }
    else {
      uVar2 = 0xc0384e88;
    }
    *(undefined4 *)(param_2 + 0x14) = uVar2;
  }
  iVar1 = *(int *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 0x14);
  fVar3 = -(*(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x18));
  fVar5 = *(float *)(iVar1 + 4) + *(float *)(iVar1 + 0x14);
  if ((fVar3 <= fVar4) && (fVar3 = fVar5, fVar4 <= fVar5)) {
    fVar3 = fVar4;
  }
  fVar4 = fVar3 - local_2c;
  *(float *)(param_2 + 0x14) = fVar3;
  fVar3 = param_1 * 0.15;
  if (fVar3 < 0.0) {
    local_2c = local_2c + fVar4 * 0.0;
  }
  else if (1.0 < fVar3) {
    local_2c = local_2c + fVar4 * 1.0;
  }
  else {
    local_2c = local_2c + fVar4 * fVar3;
  }
  *(float *)(param_2 + 0x14) = local_2c;
  fVar4 = (float)FUN_088686b0(param_4);
  *(float *)(param_2 + 0x10) = fVar4;
  fVar5 = *(float *)(*(int *)(param_2 + 4) + 0x10);
  fVar3 = -*(float *)(*(int *)(param_2 + 4) + 0xc);
  if ((fVar3 <= fVar4) && (fVar3 = fVar5, fVar4 <= fVar5)) {
    fVar3 = fVar4;
  }
  *(float *)(param_2 + 0x10) = fVar3;
  param_1 = param_1 * 0.1;
  fVar3 = fVar3 - local_30;
  if (param_1 < 0.0) {
    local_30 = local_30 + fVar3 * 0.0;
  }
  else if (1.0 < param_1) {
    local_30 = local_30 + fVar3 * 1.0;
  }
  else {
    local_30 = local_30 + fVar3 * param_1;
  }
  *(float *)(param_2 + 0x10) = local_30;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}

