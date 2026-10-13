/* Entry 0x088886F8 | file offset 0x000856D0 | FUN_088886f8 | bytes 132 */

void FUN_088886f8(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int aiStack_60 [19];
  
  func_0x08ae398c();
  FUN_08935524(aiStack_60,&DAT_089d6a48,0x48);
  iVar1 = *(int *)(param_1 + 0x48);
  iVar4 = (int)*(short *)((int)aiStack_60 + (iVar1 * 4 + 1) * 2);
  pcVar2 = (code *)aiStack_60[iVar1 * 2 + 1];
  param_1 = param_1 + (short)aiStack_60[iVar1 * 2];
  if (iVar4 != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + param_1) + iVar4 * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    param_1 = param_1 + *psVar3;
  }
  (*pcVar2)(param_1);
  return;
}

