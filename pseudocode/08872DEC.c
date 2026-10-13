/* Entry 0x08872DEC | file offset 0x0006FDC4 | FUN_08872dec | bytes 100 */

void FUN_08872dec(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(DAT_089d6008 + 0x264) & 1) == 0) {
    iVar1 = 0;
    param_1 = param_1 + 0x160;
    do {
      FUN_08872b04(param_1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x40;
    } while (iVar1 < 2);
  }
  return;
}

