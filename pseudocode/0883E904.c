/* Entry 0x0883E904 | file offset 0x0003B8DC | FUN_0883e904 | bytes 224 */

void FUN_0883e904(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  sVar1 = *(short *)(param_2 + 4);
  iVar4 = 0;
  if (0 < sVar1) {
    iVar3 = param_2 + 0xc;
    do {
      iVar2 = FUN_0883ea64(param_1,iVar3);
      if (iVar2 != 0) {
        FUN_08812ef0(iVar2,iVar3,auStack_40);
        FUN_0883e3bc(param_1,param_2,param_3,auStack_40);
        FUN_089a3978(auStack_30,auStack_40);
        FUN_0883e2f4(param_1,auStack_30);
        FUN_089a38e0(param_3,param_3,auStack_40);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar4 < sVar1);
  }
  return;
}

