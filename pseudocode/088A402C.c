/* Entry 0x088A402C | file offset 0x000A1004 | FUN_088a402c | bytes 152 */

void FUN_088a402c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_09b4d2b0;
  do {
    if (piVar1[3] == param_1) {
      if (*piVar1 != 0) {
        FUN_088a0d1c();
        FUN_088a0cd4(*piVar1);
      }
      FUN_08935828(piVar1,0,0x10);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 0x10);
  return;
}

