/* Entry 0x088A2B6C | file offset 0x0009FB44 | FUN_088a2b6c | bytes 248 */

void FUN_088a2b6c(float param_1,int param_2)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  float fVar4;
  short local_30 [2];
  code *local_2c;
  undefined2 local_28;
  undefined2 local_26;
  code *local_24;
  undefined2 local_20;
  undefined2 local_1e;
  code *local_1c;
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_2c = FUN_088a2c64;
  local_28 = 0;
  local_26 = 0;
  local_24 = FUN_088a2dec;
  local_20 = 0;
  local_1e = 0;
  local_1c = FUN_088a3024;
  iVar3 = **(int **)(param_2 + 0x50);
  iVar3 = (**(code **)(iVar3 + 0x44))
                    ((int)*(int **)(param_2 + 0x50) + (int)*(short *)(iVar3 + 0x40));
  fVar4 = *(float *)(param_2 + 0x38);
  if (iVar3 == 1) {
    *(undefined4 *)(param_2 + 0x30) = 2;
  }
  iVar3 = *(int *)(param_2 + 0x30);
  pcVar1 = (&local_2c)[iVar3 * 2];
  if (fVar4 < 0.0) {
    fVar4 = param_1;
  }
  param_2 = param_2 + local_30[iVar3 * 4];
  if (local_30[iVar3 * 4 + 1] != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_2) + local_30[iVar3 * 4 + 1] * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_2 = param_2 + *psVar2;
  }
  (*pcVar1)(fVar4,param_2);
  return;
}

