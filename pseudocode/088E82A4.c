/* Entry 0x088E82A4 | file offset 0x000E527C | FUN_088e82a4 | bytes 140 */

void FUN_088e82a4(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    iVar3 = 0;
    piVar1 = (int *)(param_1 + 4);
    iVar2 = param_1;
    do {
      if (*piVar1 != 0) {
        FUN_0885c538(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar2 + 4),0);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
      piVar1 = piVar1 + 2;
    } while (iVar3 < 8);
  }
  return;
}

