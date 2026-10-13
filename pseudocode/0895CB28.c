/* Entry 0x0895CB28 | file offset 0x00159B00 | FUN_0895cb28 | bytes 252 */

void FUN_0895cb28(float param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_3 + 0x4c) == '\0') {
    if (*(char *)(param_3 + 0x4d) != '\0') {
      *(float *)(param_2 + 0x24) =
           *(float *)(param_3 + 0x2c) * param_1 * 0.5 * param_1 +
           *(float *)(param_3 + 0x1c) * param_1 + *(float *)(param_2 + 0x28);
    }
  }
  else {
    pfVar4 = (float *)(param_3 + 0x20);
    pfVar3 = (float *)(param_3 + 0x10);
    uVar2 = 0;
    iVar1 = param_2;
    do {
      fVar6 = *pfVar4;
      fVar5 = *pfVar3;
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 1;
      *(float *)(iVar1 + 4) =
           fVar6 * param_1 * 0.5 * param_1 + fVar5 * param_1 + *(float *)(iVar1 + 0xc);
      iVar1 = iVar1 + 4;
    } while (uVar2 < 2);
  }
  FUN_0895d37c(param_2,param_3);
  return;
}

