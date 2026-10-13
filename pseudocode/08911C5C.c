/* Entry 0x08911C5C | file offset 0x0010EC34 | FUN_08911c5c | bytes 64 */

void FUN_08911c5c(int param_1)

{
  int iVar1;
  
  FUN_0891191c();
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 5);
  return;
}

