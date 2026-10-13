/* Entry 0x08835134 | file offset 0x0003210C | FUN_08835134 | bytes 64 */

undefined4 FUN_08835134(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x390) + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_08811f44(iVar2,param_2,param_3);
  }
  return uVar1;
}

