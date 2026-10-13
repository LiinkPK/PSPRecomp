/* Entry 0x0892EB10 | file offset 0x0012BAE8 | FUN_0892eb10 | bytes 84 */

void FUN_0892eb10(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

