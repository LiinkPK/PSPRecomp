/* Entry 0x088699F4 | file offset 0x000669CC | FUN_088699f4 | bytes 136 */

int * FUN_088699f4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*param_1;
    iVar3 = 0;
    piVar1 = piVar2;
    if (0 < piVar2[2]) {
      do {
        piVar4 = piVar1 + 4;
        if (*piVar4 != 0) {
          *piVar4 = *piVar4 - *param_1;
        }
        if (piVar1[5] != 0) {
          piVar1[5] = piVar1[5] - *param_1;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar4;
      } while (iVar3 < *(int *)(*param_1 + 8));
    }
    *param_1 = 0;
  }
  return piVar2;
}

