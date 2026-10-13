/* Entry 0x088E913C | file offset 0x000E6114 | FUN_088e913c | bytes 136 */

void FUN_088e913c(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int aiStack_50 [15];
  
  FUN_08935524(aiStack_50,&DAT_089d7e8c,0x38);
  iVar1 = *(int *)(param_1 + 0x1860);
  iVar4 = (int)*(short *)((int)aiStack_50 + (iVar1 * 4 + 1) * 2);
  pcVar2 = (code *)aiStack_50[iVar1 * 2 + 1];
  iVar1 = param_1 + (short)aiStack_50[iVar1 * 2];
  if (iVar4 != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + iVar1) + iVar4 * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    iVar1 = iVar1 + *psVar3;
  }
  (*pcVar2)(iVar1);
  FUN_088ea070(param_1);
  return;
}

