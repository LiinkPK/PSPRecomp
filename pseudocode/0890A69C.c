/* Entry 0x0890A69C | file offset 0x00107674 | FUN_0890a69c | bytes 268 */

void FUN_0890a69c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  FUN_0890380c(param_1 + 1);
  iVar3 = param_1[0x6f];
  piVar2 = param_1 + 0x6a;
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 8),2);
    FUN_0885c538(param_1[0x6e],param_1[0x6f],0);
    param_1[0x6f] = 0;
  }
  iVar3 = *param_1;
  piVar4 = (int *)0x0;
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
LAB_0890a72c:
      if (((bVar1) && (piVar4 = *(int **)(iVar3 + 0x194), piVar4 != (int *)0x0)) &&
         (*(int *)(iVar3 + 0x198) != 0)) {
        iVar5 = param_1[0x6a];
        if (piVar2 == piVar4) {
          *(int *)(iVar3 + 0x194) = iVar5;
          piVar4 = (int *)0x0;
          piVar6 = *(int **)(iVar3 + 0x198);
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
        param_1[0x6a] = 0;
      }
      *param_1 = 0;
      return;
    }
  }
  bVar1 = false;
  goto LAB_0890a72c;
}

