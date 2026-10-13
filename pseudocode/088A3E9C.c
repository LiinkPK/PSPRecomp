/* Entry 0x088A3E9C | file offset 0x000A0E74 | FUN_088a3e9c | bytes 92 */

int * FUN_088a3e9c(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = &DAT_09b4d418;
  uVar3 = 0;
  do {
    if (*piVar2 == 0) {
      piVar1 = &DAT_09b4d3b0 + uVar3 * 0xd;
      *piVar1 = uVar3 + 1;
      *piVar2 = (int)piVar1;
      return piVar1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 2);
  return (int *)0x0;
}

