/* Entry 0x088A3F2C | file offset 0x000A0F04 | FUN_088a3f2c | bytes 100 */

void FUN_088a3f2c(undefined1 param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_09b4d418;
  uVar2 = 0;
  do {
    if (*piVar1 != 0) {
      FUN_0889f898(*piVar1 + 4,param_1);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 < 2);
  return;
}

