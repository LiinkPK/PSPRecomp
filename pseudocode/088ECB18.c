/* Entry 0x088ECB18 | file offset 0x000E9AF0 | FUN_088ecb18 | bytes 240 */

undefined1 FUN_088ecb18(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int aiStack_90 [12];
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  FUN_08935524(aiStack_90,&DAT_089d7ed8,0x20);
  FUN_088ec598(param_1 + 4);
  FUN_088ec370(param_1 + 0x18);
  FUN_088da0a8(*(undefined4 *)(param_1 + 0x24),0,auStack_60,auStack_20);
  FUN_0887b778(*(undefined4 *)(param_1 + 0x28),auStack_60);
  FUN_0887b828(*(undefined4 *)(param_1 + 0x28),auStack_20);
  FUN_0887b934(*(undefined4 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar4 = (int)*(short *)((int)aiStack_90 + (iVar1 * 4 + 1) * 2);
  iVar5 = param_1 + (short)aiStack_90[iVar1 * 2];
  pcVar2 = (code *)aiStack_90[iVar1 * 2 + 1];
  if (iVar4 != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + iVar5) + iVar4 * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    iVar5 = iVar5 + *psVar3;
  }
  (*pcVar2)(iVar5,param_2);
  return *(undefined1 *)(param_1 + 0x30);
}

