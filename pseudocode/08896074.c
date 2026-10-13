/* Entry 0x08896074 | file offset 0x0009304C | FUN_08896074 | bytes 140 */

void FUN_08896074(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x10);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        if (*piVar3 == param_2) {
          FUN_08896708(param_1,piVar3);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 7;
      } while (iVar2 < *(int *)(*param_1 + 8));
    }
  }
  return;
}

