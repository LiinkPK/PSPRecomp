/* Entry 0x0881CD2C | file offset 0x00019D04 | FUN_0881cd2c | bytes 116 */

void FUN_0881cd2c(void)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 = FUN_0881cb80(iVar1), iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x14) != 0) &&
       (*(int *)(*(int *)(*(int *)(iVar1 + 0x14) + 0x390) + 0x5c) != 0)) {
      FUN_088a9d28();
    }
  }
  return;
}

