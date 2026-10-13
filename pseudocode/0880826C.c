/* Entry 0x0880826C | file offset 0x00005244 | FUN_0880826c | bytes 96 */

void FUN_0880826c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 = FUN_08841f64(iVar1), iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3ac) != 0) {
      FUN_0880ae5c(*(int *)(iVar1 + 0x3ac) + 0x28,param_1);
    }
  }
  return;
}

