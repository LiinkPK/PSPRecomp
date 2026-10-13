/* Entry 0x088C1F6C | file offset 0x000BEF44 | FUN_088c1f6c | bytes 268 */

bool FUN_088c1f6c(int param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int aiStack_70 [21];
  
  FUN_08935524(aiStack_70,&DAT_089d7490,0x50);
  *param_2 = -1;
  param_2[2] = 0;
  param_2[1] = -1;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined2 *)((int)param_2 + 0x13a) = 0;
  iVar1 = *param_4;
  *param_2 = iVar1;
  iVar4 = (int)*(short *)((int)aiStack_70 + (iVar1 * 4 + 1) * 2);
  iVar5 = param_1 + (short)aiStack_70[iVar1 * 2];
  pcVar2 = (code *)aiStack_70[iVar1 * 2 + 1];
  if (iVar4 != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + iVar5) + iVar4 * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    iVar5 = iVar5 + *psVar3;
  }
  iVar1 = (*pcVar2)(iVar5,param_2,param_3,param_5,param_4);
  if (iVar1 == 1) {
    FUN_088c2690(param_1,DAT_089d712c + 0xf58,param_2);
  }
  return iVar1 == 1;
}

