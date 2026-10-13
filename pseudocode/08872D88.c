/* Entry 0x08872D88 | file offset 0x0006FD60 | FUN_08872d88 | bytes 100 */

void FUN_08872d88(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(DAT_089d6008 + 0x264) & 1) == 0) {
    iVar1 = 0;
    param_1 = param_1 + 0xc0;
    do {
      FUN_088725a0(param_1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x50;
    } while (iVar1 < 2);
  }
  return;
}

