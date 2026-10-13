/* Entry 0x08964A5C | file offset 0x00161A34 | FUN_08964a5c | bytes 188 */

undefined4 FUN_08964a5c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  FUN_08964cf4(param_2,param_3,param_4,1);
  iVar5 = 0;
  iVar2 = *(int *)(*(int *)(param_2 + 0x8c) +
                   (uint)*(ushort *)
                          (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                          (*(int *)(*(int *)(param_2 + 0x90) + 4) + 2) * 2) + 0x60);
  psVar1 = *(short **)(iVar2 + 0x34);
  if (0 < *(int *)(iVar2 + 0x30)) {
    sVar4 = 0;
    sVar3 = 1;
    do {
      *psVar1 = sVar4;
      psVar1[1] = sVar4;
      psVar1[2] = sVar3;
      psVar1[3] = sVar3;
      iVar5 = iVar5 + 1;
      psVar1 = psVar1 + 4;
      sVar4 = sVar4 + 2;
      sVar3 = sVar3 + 2;
    } while (iVar5 < *(int *)(iVar2 + 0x30));
  }
  return 1;
}

