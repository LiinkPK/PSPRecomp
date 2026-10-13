/* Entry 0x0890009C | file offset 0x000FD074 | FUN_0890009c | bytes 204 */

void FUN_0890009c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_089d812c != 0) {
    sceKernelPowerTick(0);
    if (DAT_089d812c < 4) {
      if (1 < DAT_089d812c) {
        if (DAT_089d812c < 3) {
          iVar1 = FUN_08900168();
          if (iVar1 < 0) {
            FUN_0890043c();
          }
        }
        else {
          FUN_089003f8();
          DAT_089d812c = 5;
        }
      }
    }
    else if ((4 < DAT_089d812c) && (DAT_089d812c < 6)) {
      FUN_088822b4(param_1);
    }
  }
  return;
}

