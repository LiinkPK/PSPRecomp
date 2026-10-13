/* Entry 0x08971328 | file offset 0x0016E300 | FUN_08971328 | bytes 488 */

void FUN_08971328(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar5 = (int *)param_1[3];
  iVar3 = 0;
  FUN_089710e0();
  do {
    while( true ) {
      piVar2 = piVar5;
      if (piVar2 == (int *)0x0) goto LAB_089714d8;
      piVar5 = (int *)piVar2[1];
      if ((char)piVar2[2] != '\0') break;
      if (piVar5 == (int *)0x0) goto LAB_089714d8;
      if ((char)piVar5[2] == '\0') {
        iVar1 = *piVar2;
        *piVar5 = iVar1;
        *(int **)(iVar1 + 4) = piVar5;
      }
      else if ((*(byte *)((int)piVar5 + 9) & 1) != 0) {
        iVar1 = *piVar2;
        iVar4 = iVar1 - (int)piVar2;
        iVar6 = ((int)(((int)piVar2 - (int)piVar5) +
                      ((uint)((int)piVar2 - (int)piVar5 >> 4) >> 0x1c)) >> 4) + -1;
        if (-1 < iVar6) {
          piVar2 = piVar5 + ((int)(iVar4 + ((uint)(iVar4 >> 4) >> 0x1c)) >> 4) * 4 + iVar6 * 4;
          piVar7 = piVar5 + iVar6 * 4;
          do {
            FUN_08935524(piVar2,piVar7,0x10);
            iVar6 = iVar6 + -1;
            piVar2 = piVar2 + -4;
            piVar7 = piVar7 + -4;
          } while (-1 < iVar6);
        }
        piVar2 = (int *)((int)piVar5 + iVar4);
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
        *(undefined1 *)(piVar5 + 2) = 0;
        *piVar5 = (int)piVar2;
        piVar5[1] = piVar2[1];
        piVar2[1] = (int)piVar5;
        iVar3 = iVar3 + (*piVar2 - (int)piVar2);
        if ((code *)piVar2[3] != (code *)0x0) {
          (*(code *)piVar2[3])
                    (*param_1 << 0x18 | (int)*(short *)((int)piVar2 + 10),piVar2 + 4,iVar4);
        }
      }
    }
    if (*piVar2 != 0) {
      iVar3 = iVar3 + (*piVar2 - (int)piVar2);
    }
  } while (piVar5 != (int *)param_1[2]);
LAB_089714d8:
  param_1[4] = iVar3;
  param_1[1] = 0;
  FUN_089710e0(param_1);
  return;
}

