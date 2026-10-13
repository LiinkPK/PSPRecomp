/* Entry 0x089097E4 | file offset 0x001067BC | FUN_089097e4 | bytes 248 */

void FUN_089097e4(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_70 [12];
  int aiStack_40 [13];
  
  FUN_08935524(aiStack_70,&DAT_089d8280,0x30);
  FUN_08935524(aiStack_40,&DAT_089d82b0,0x30);
  iVar4 = *(int *)(param_1 + 400);
  if (iVar4 != *(int *)(param_1 + 0x194)) {
    iVar3 = (int)*(short *)((int)aiStack_70 + (iVar4 * 4 + 1) * 2);
    iVar5 = param_1 + (short)aiStack_70[iVar4 * 2];
    pcVar1 = (code *)aiStack_70[iVar4 * 2 + 1];
    if (iVar3 != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar5) + iVar3 * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar5 = iVar5 + *psVar2;
    }
    (*pcVar1)(iVar5);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 400);
  }
  FUN_089038f4(param_1 + 4);
  iVar4 = *(int *)(param_1 + 400);
  iVar3 = (int)*(short *)((int)aiStack_40 + (iVar4 * 4 + 1) * 2);
  param_1 = param_1 + (short)aiStack_40[iVar4 * 2];
  pcVar1 = (code *)aiStack_40[iVar4 * 2 + 1];
  if (iVar3 != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + iVar3 * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

