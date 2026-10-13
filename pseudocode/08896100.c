/* Entry 0x08896100 | file offset 0x000930D8 | FUN_08896100 | bytes 152 */

void FUN_08896100(int *param_1,int param_2)

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
          FUN_088a2664(0,piVar3[1]);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 7;
      } while (iVar2 < *(int *)(*param_1 + 8));
    }
  }
  return;
}

