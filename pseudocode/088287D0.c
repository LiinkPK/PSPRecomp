/* Entry 0x088287D0 | file offset 0x000257A8 | FUN_088287d0 | bytes 204 */

void FUN_088287d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = &DAT_09afb880;
  iVar4 = 0;
  piVar2 = &DAT_09afb880;
  do {
    if (*piVar2 == 0) {
      *piVar2 = param_1;
      return;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar4 < 2);
  iVar4 = -1;
  iVar3 = 0;
  do {
    if ((iVar4 < 0) || ((float)(&DAT_09afb884)[iVar4 * 2] < (float)puVar1[1])) {
      iVar4 = iVar3;
    }
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar3 < 2);
  FUN_088a6c70((&DAT_09afb880)[iVar4 * 2]);
  (&DAT_09afb880)[iVar4 * 2] = param_1;
  (&DAT_09afb884)[iVar4 * 2] = 0;
  return;
}

