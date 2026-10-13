/* Entry 0x0892C33C | file offset 0x00129314 | FUN_0892c33c | bytes 84 */

void FUN_0892c33c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_088dab44();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return;
}

