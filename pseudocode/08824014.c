/* Entry 0x08824014 | file offset 0x00020FEC | FUN_08824014 | bytes 324 */

void FUN_08824014(float param_1,undefined4 param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30 [4];
  
  if (param_4 == 1) {
    fVar1 = (float)FUN_0882336c();
  }
  else {
    fVar1 = (float)FUN_08823378();
  }
  FUN_089a3868(local_30,param_3);
  local_30[1] = 0.0;
  fVar2 = (float)FUN_089a3bf8(local_30);
  FUN_089a3bc8(local_30,local_30);
  if (fVar2 == 0.0) {
    FUN_089a3890(param_5);
  }
  else {
    fVar3 = fVar2 + fVar1 * param_1;
    if (fVar3 <= 0.0) {
      fVar3 = -fVar2 / fVar1;
      *param_3 = 0.0;
      param_3[2] = 0.0;
      fVar1 = fVar3 * fVar2 + fVar1 * fVar3 * fVar3 * 0.5;
    }
    else {
      *param_3 = local_30[0] * fVar3;
      param_3[2] = local_30[2] * fVar3;
      fVar1 = param_1 * fVar2 + fVar1 * param_1 * param_1 * 0.5;
    }
    FUN_089a3a44(fVar1,param_5,local_30);
    *(undefined4 *)(param_5 + 4) = 0;
  }
  return;
}

