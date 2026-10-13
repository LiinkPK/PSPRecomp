/* Entry 0x089302A4 | file offset 0x0012D27C | FUN_089302a4 | bytes 84 */

void FUN_089302a4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

