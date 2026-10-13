/* Entry 0x0892CB5C | file offset 0x00129B34 | FUN_0892cb5c | bytes 84 */

void FUN_0892cb5c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

