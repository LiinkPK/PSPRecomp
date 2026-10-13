/* Entry 0x088C73A8 | file offset 0x000C4380 | FUN_088c73a8 | bytes 164 */

int FUN_088c73a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_088c7600();
  if (iVar1 != -1) {
    iVar2 = param_1 + *(int *)(param_1 + 0x1860) * 0x138;
    FUN_088c7274(iVar2,iVar1,param_2,param_3,param_4);
    *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
  }
  return iVar2;
}

