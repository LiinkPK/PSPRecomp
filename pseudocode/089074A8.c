/* Entry 0x089074A8 | file offset 0x00104480 | FUN_089074a8 | bytes 36 */

void FUN_089074a8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x80;
  } while (iVar1 < 0x10);
  return;
}

