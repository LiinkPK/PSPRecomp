/* Entry 0x08872CF0 | file offset 0x0006FCC8 | FUN_08872cf0 | bytes 152 */

void FUN_08872cf0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(DAT_089d6008 + 0x264) & 1) == 0) {
    iVar1 = 0;
    do {
      FUN_08871e24(param_1,iVar1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x60;
    } while (iVar1 < 2);
  }
  else if ((*(uint *)(DAT_089d6008 + 0x264) & 8) == 0) {
    FUN_08871e24(param_1 + 0x1e0,0);
  }
  else {
    FUN_08871dac();
  }
  return;
}

