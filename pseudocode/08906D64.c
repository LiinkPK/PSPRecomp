/* Entry 0x08906D64 | file offset 0x00103D3C | FUN_08906d64 | bytes 164 */

void FUN_08906d64(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = *param_1;
  piVar4 = (int *)0x0;
  piVar2 = param_1 + 0x433;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      piVar4 = *(int **)(iVar3 + 0x194);
    }
    else {
      piVar4 = (int *)*piVar4;
    }
    if (piVar4 == (int *)0x0) break;
    if (piVar4 == piVar2) {
      bVar1 = true;
LAB_08906d9c:
      if (((bVar1) && (piVar4 = *(int **)(iVar3 + 0x194), piVar4 != (int *)0x0)) &&
         (piVar6 = *(int **)(iVar3 + 0x198), piVar6 != (int *)0x0)) {
        iVar5 = param_1[0x433];
        if (piVar2 == piVar4) {
          *(int *)(iVar3 + 0x194) = iVar5;
          piVar4 = (int *)0x0;
        }
        else {
          piVar6 = (int *)*piVar4;
          if ((int *)*piVar4 == piVar2) {
            *piVar4 = iVar5;
          }
          else {
            do {
              piVar4 = piVar6;
              piVar6 = (int *)*piVar4;
            } while ((int *)*piVar4 != piVar2);
            *piVar4 = iVar5;
          }
          piVar6 = *(int **)(iVar3 + 0x198);
        }
        if (piVar2 == piVar6) {
          *(int **)(iVar3 + 0x198) = piVar4;
        }
        param_1[0x433] = 0;
      }
      *param_1 = 0;
      return;
    }
  }
  bVar1 = false;
  goto LAB_08906d9c;
}

