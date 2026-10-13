/* Entry 0x08910464 | file offset 0x0010D43C | FUN_08910464 | bytes 116 */

void FUN_08910464(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_089110c4(param_3);
  FUN_08935524(iVar1,param_2,param_3);
  param_1[1] = iVar1;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_1 = iVar2;
  return;
}

