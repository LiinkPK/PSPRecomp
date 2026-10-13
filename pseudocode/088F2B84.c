/* Entry 0x088F2B84 | file offset 0x000EFB5C | FUN_088f2b84 | bytes 80 */

void FUN_088f2b84(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_088c0f8c(param_2);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 10) & 0x20) != 0)) {
    *(int *)(param_1 + 0x1570) = *(int *)(param_1 + 0x1570) + 1;
  }
  return;
}

