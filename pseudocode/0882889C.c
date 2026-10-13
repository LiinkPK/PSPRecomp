/* Entry 0x0882889C | file offset 0x00025874 | FUN_0882889c | bytes 276 */

void FUN_0882889c(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_09afb850;
  do {
    if (*piVar2 != 0) {
      FUN_088a6c70();
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 4);
  iVar1 = 0;
  piVar2 = &DAT_09afb870;
  do {
    if (*piVar2 != 0) {
      FUN_088a6c70();
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 2);
  iVar1 = 0;
  piVar2 = &DAT_09afb880;
  do {
    if (*piVar2 != 0) {
      FUN_088a6c70();
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 2);
  return;
}

