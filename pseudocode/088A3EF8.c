/* Entry 0x088A3EF8 | file offset 0x000A0ED0 | FUN_088a3ef8 | bytes 52 */

void FUN_088a3ef8(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_09b4d418;
  uVar2 = 0;
  do {
    if (param_1 == *piVar1) {
      *piVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 < 2);
  return;
}

