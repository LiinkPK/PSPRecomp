/* Entry 0x088542D8 | file offset 0x000512B0 | FUN_088542d8 | bytes 148 */

void FUN_088542d8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if (iVar1 < 10) {
    *(int *)(param_1 + 0x154) = iVar1 + 1;
    iVar1 = param_1 + ((*(int *)(param_1 + 0x150) + iVar1) % 10) * 0x20 + 0x10;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x150) = iVar1 + 1;
    iVar1 = param_1 + iVar1 * 0x20 + 0x10;
    if (9 < *(int *)(param_1 + 0x150)) {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
  }
  FUN_089a3868(iVar1);
  *(undefined4 *)(iVar1 + 0x10) = 0x42700000;
  return;
}

