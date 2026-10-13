/* Entry 0x08896198 | file offset 0x00093170 | FUN_08896198 | bytes 168 */

void FUN_08896198(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_3;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x10);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        if (*piVar3 == param_4) {
          FUN_088a27d0(param_1,param_2,piVar3[1]);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 7;
      } while (iVar2 < *(int *)(*param_3 + 8));
    }
  }
  return;
}

