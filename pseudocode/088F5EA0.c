/* Entry 0x088F5EA0 | file offset 0x000F2E78 | FUN_088f5ea0 | bytes 92 */

undefined4 FUN_088f5ea0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == *param_2) {
    iVar1 = FUN_08935490(param_1 + 1,param_2 + 1,6);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

