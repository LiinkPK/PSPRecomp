/* Entry 0x088A6D10 | file offset 0x000A3CE8 | FUN_088a6d10 | bytes 144 */

void FUN_088a6d10(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int aiStack_30 [9];
  
  FUN_08935524(aiStack_30,&DAT_089d6d98,0x20);
  iVar1 = *(int *)(param_2 + 0xd4);
  iVar4 = (int)*(short *)((int)aiStack_30 + (iVar1 * 4 + 1) * 2);
  pcVar2 = (code *)aiStack_30[iVar1 * 2 + 1];
  param_2 = param_2 + (short)aiStack_30[iVar1 * 2];
  if (iVar4 != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + param_2) + iVar4 * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    param_2 = param_2 + *psVar3;
  }
  (*pcVar2)(param_1,param_2);
  return;
}

