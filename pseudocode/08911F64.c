/* Entry 0x08911F64 | file offset 0x0010EF3C | FUN_08911f64 | bytes 84 */

void FUN_08911f64(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 5);
  return;
}

