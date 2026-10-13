/* Entry 0x089098DC | file offset 0x001068B4 | FUN_089098dc | bytes 168 */

undefined4 FUN_089098dc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_30 [32];
  
  FUN_0893476c(auStack_30,"LOBBY%d",param_2);
  iVar1 = FUN_08902e3c(*param_1,auStack_30,FUN_0890a400,param_1);
  if (iVar1 == 1) {
    iVar1 = 0;
    iVar4 = 0x24b;
    do {
      uVar2 = ((undefined4 *)(param_3 + iVar1))[1];
      puVar3 = (undefined4 *)((int)param_1 + iVar1 + 0x198);
      *puVar3 = *(undefined4 *)(param_3 + iVar1);
      puVar3[1] = uVar2;
      iVar4 = iVar4 + -1;
      iVar1 = iVar1 + 8;
    } while (iVar4 != 0);
    param_1[100] = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

