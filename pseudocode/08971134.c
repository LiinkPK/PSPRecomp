/* Entry 0x08971134 | file offset 0x0016E10C | FUN_08971134 | bytes 500 */

int * FUN_08971134(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*(short *)(param_1 + 0x22) < 0) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) == 0) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x24));
    }
  }
  else {
    iVar5 = (int)*(short *)(param_1 + 0x22);
  }
  iVar1 = (param_2 + 0xfU & 0xfffffff0) + 0x10;
  if (*(int *)(param_1 + 4) == 0) {
    piVar4 = (int *)**(undefined4 **)(param_1 + 8);
    *(undefined4 **)(param_1 + 4) = *(undefined4 **)(param_1 + 8);
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_1 + 4);
  }
  do {
    while (piVar4[1] == 0) {
      if (*(int *)(param_1 + 4) == 0) {
        if ((*(char *)(param_1 + 0x20) != '\0') && (*(short *)(param_1 + 0x22) == 0)) {
          FUN_08971328();
          *(short *)(param_1 + 0x22) = (short)iVar5;
          piVar4 = (int *)FUN_08971134(param_1,iVar1,param_3,param_4);
          *(undefined2 *)(param_1 + 0x22) = 0xffff;
          return piVar4;
        }
        return (int *)0x0;
      }
      piVar4 = *(int **)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar4 = (int *)piVar4[1];
  } while (((char)piVar4[2] != '\0') || (*piVar4 - (int)piVar4 < iVar1));
  iVar3 = *piVar4;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
  piVar2 = (int *)(*piVar4 - iVar1);
  if (piVar2 == piVar4) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if ((uint)((int)piVar2 - (int)piVar4) < 0x10) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(int **)(param_1 + 4) = piVar4;
    *piVar2 = iVar3;
    piVar2[1] = (int)piVar4;
    piVar2[3] = 0;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar4 = (int)piVar2;
    piVar4 = piVar2;
  }
  *(char *)(piVar4 + 2) = (char)param_4;
  *(short *)((int)piVar4 + 10) = (short)iVar5;
  *(undefined1 *)((int)piVar4 + 9) = 0;
  piVar4[3] = 0;
  *(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) = piVar4;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return piVar4 + 4;
}

