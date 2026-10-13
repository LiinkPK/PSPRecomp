/* Entry 0x0895C200 | file offset 0x001591D8 | FUN_0895c200 | bytes 188 */

void FUN_0895c200(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_2 + 0xac);
  if (*(char *)(param_3 + 0xd) == '\x01') {
    *(undefined4 *)(iVar3 + 0x40) = 1;
    iVar4 = *(int *)(iVar3 + 0x24);
    pfVar1 = *(float **)(param_1 + *(int *)(param_1 + 8) * 4);
  }
  else {
    *(undefined4 *)(iVar3 + 0x40) = 0;
    iVar4 = *(int *)(iVar3 + 0x24);
    pfVar1 = *(float **)(param_1 + *(int *)(param_1 + 8) * 4);
  }
  iVar2 = 0;
  fVar6 = 0.0;
  do {
    *pfVar1 = fVar6;
    pfVar1[1] = 0.0;
    pfVar1[5] = fVar6;
    pfVar5 = pfVar1 + 6;
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 10;
    fVar6 = fVar6 + ((float)iVar4 / (float)iVar4) * 0.25;
    *pfVar5 = (float)*(int *)(iVar3 + 0x28) / (float)*(int *)(iVar3 + 0x28);
  } while (iVar2 < 5);
  return;
}

