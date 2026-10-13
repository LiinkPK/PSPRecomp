/* Entry 0x08821518 | file offset 0x0001E4F0 | FUN_08821518 | bytes 456 */

void FUN_08821518(int param_1)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar3 = 0;
  if ('\0' < *(char *)(param_1 + 1)) {
    do {
      pbVar5 = (byte *)(*(int *)(param_1 + 0xc) + iVar3);
      bVar1 = *pbVar5;
      *pbVar5 = bVar1 & 0xf3 | ((bVar1 & 3 ^ 2) - 2 & 3) << 2;
      iVar6 = *(int *)(param_1 + 0xc) + iVar3;
      *(undefined1 *)(iVar6 + 2) = *(undefined1 *)(iVar6 + 1);
      iVar4 = iVar4 + 1;
      pbVar5 = (byte *)(*(int *)(param_1 + 0xc) + iVar3);
      *pbVar5 = *pbVar5 & 0xfc;
      iVar3 = iVar3 + 3;
    } while (iVar4 < *(char *)(param_1 + 1));
  }
  *(byte *)(param_1 + 0x10) =
       *(byte *)(param_1 + 0x10) & 0xf3 | ((*(byte *)(param_1 + 0x10) & 3 ^ 2) - 2 & 3) << 2;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc;
  iVar3 = FUN_0881baa8();
  pfVar2 = *(float **)(param_1 + 8);
  if ((((*pfVar2 <= *(float *)(iVar3 + 0x100)) && (*(float *)(iVar3 + 0xf0) <= pfVar2[3])) &&
      (pfVar2[1] <= *(float *)(iVar3 + 0x104))) &&
     (((*(float *)(iVar3 + 0xf4) <= pfVar2[4] && (pfVar2[2] <= *(float *)(iVar3 + 0x108))) &&
      (*(float *)(iVar3 + 0xf8) <= pfVar2[5])))) {
    FUN_08821a6c(param_1);
    FUN_08821dcc(param_1);
  }
  return;
}

