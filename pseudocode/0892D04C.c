/* Entry 0x0892D04C | file offset 0x0012A024 | FUN_0892d04c | bytes 100 */

void FUN_0892d04c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_088d9b28(*(int *)(param_1 + 0x30),param_2);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

