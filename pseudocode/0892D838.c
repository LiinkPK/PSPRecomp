/* Entry 0x0892D838 | file offset 0x0012A810 | FUN_0892d838 | bytes 84 */

void FUN_0892d838(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0xc);
  return;
}

