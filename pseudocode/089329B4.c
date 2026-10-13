/* Entry 0x089329B4 | file offset 0x0012F98C | FUN_089329b4 | bytes 84 */

void FUN_089329b4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 6);
  return;
}

