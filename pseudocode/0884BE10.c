/* Entry 0x0884BE10 | file offset 0x00048DE8 | FUN_0884be10 | bytes 100 */

void FUN_0884be10(int param_1)

{
  int iVar1;
  
  FUN_0884c35c(DAT_089d4d80);
  iVar1 = 1;
  do {
    FUN_0899bb1c(*(undefined4 *)(param_1 + 0x25a4));
    *(undefined4 *)(param_1 + 0x25a4) = 0;
    FUN_0899bb1c(*(undefined4 *)(param_1 + 0x25a8));
    *(undefined4 *)(param_1 + 0x25a8) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x14;
  } while (iVar1 < 0x20);
  return;
}

