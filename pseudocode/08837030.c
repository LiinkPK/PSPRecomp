/* Entry 0x08837030 | file offset 0x00034008 | FUN_08837030 | bytes 204 */

void FUN_08837030(float *param_1,int param_2)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_2 + 0x3a0) == 0) {
    FUN_089a3890(&local_20);
    local_14 = 1.0;
  }
  else {
    FUN_089a3868(&local_20,param_2 + 0x80);
    iVar1 = *(int *)(param_2 + 0x3a0);
    local_20 = local_20 + *(float *)(iVar1 + 8);
    local_1c = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x14) + local_1c;
    local_14 = 0.0;
    local_18 = local_18 + *(float *)(iVar1 + 0x10);
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

