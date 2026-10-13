/* Entry 0x0897EB9C | file offset 0x0017BB74 | FUN_0897eb9c | bytes 100 */

void FUN_0897eb9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_50 [56];
  
  iVar4 = *param_4;
  iVar3 = *(int *)(iVar4 + 0x14);
  sVar1 = *(short *)(iVar3 + 0x10);
  uVar2 = FUN_089851c0(auStack_50,param_3);
  (**(code **)(iVar3 + 0x14))(iVar4 + sVar1,uVar2,param_2);
  return;
}

