/* Entry 0x0897034C | file offset 0x0016D324 | FUN_0897034c | bytes 124 */

undefined4 FUN_0897034c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar1 = (uint)*(ushort *)(&DAT_089da2c0 + param_1 * 2);
  uVar2 = uVar1 + *(ushort *)(&DAT_089da2d2 + param_1 * 2);
  if (uVar1 < uVar2) {
    piVar3 = &DAT_09b6f498 + uVar1;
    do {
      if (*piVar3 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar1 < (int)uVar2);
  }
  return 0;
}

