/* Entry 0x0890A7A8 | file offset 0x00107780 | FUN_0890a7a8 | bytes 284 */

void FUN_0890a7a8(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  code *pcVar4;
  int aiStack_90 [16];
  int aiStack_50 [17];
  
  FUN_08935524(aiStack_90,&DAT_089d82e0,0x40);
  FUN_08935524(aiStack_50,&DAT_089d8320,0x40);
  iVar1 = *(int *)(param_1 + 400);
  if (iVar1 != *(int *)(param_1 + 0x194)) {
    iVar3 = (int)*(short *)((int)aiStack_90 + (iVar1 * 4 + 1) * 2);
    pcVar4 = (code *)aiStack_90[iVar1 * 2 + 1];
    if (((iVar3 != 0) || ((short)aiStack_90[iVar1 * 2] != 0)) || (pcVar4 != (code *)0x0)) {
      iVar1 = param_1 + (short)aiStack_90[iVar1 * 2];
      if (iVar3 != 0) {
        psVar2 = (short *)(*(int *)(pcVar4 + iVar1) + iVar3 * 8);
        pcVar4 = *(code **)(psVar2 + 2);
        iVar1 = iVar1 + *psVar2;
      }
      (*pcVar4)(iVar1);
      iVar1 = *(int *)(param_1 + 400);
    }
    *(int *)(param_1 + 0x194) = iVar1;
  }
  FUN_089038f4(param_1 + 4);
  iVar1 = *(int *)(param_1 + 400);
  iVar3 = (int)*(short *)((int)aiStack_50 + (iVar1 * 4 + 1) * 2);
  pcVar4 = (code *)aiStack_50[iVar1 * 2 + 1];
  if (((iVar3 != 0) || ((short)aiStack_50[iVar1 * 2] != 0)) || (pcVar4 != (code *)0x0)) {
    param_1 = param_1 + (short)aiStack_50[iVar1 * 2];
    if (iVar3 != 0) {
      psVar2 = (short *)(*(int *)(pcVar4 + param_1) + iVar3 * 8);
      pcVar4 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar4)(param_1);
  }
  return;
}

