/* Entry 0x08971010 | file offset 0x0016DFE8 | FUN_08971010 | bytes 136 */

void FUN_08971010(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_2 + -0x10);
  *(undefined1 *)(param_2 + -8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(short *)(param_2 + -6) * 4) = 0;
  *(undefined2 *)(param_2 + -6) = 0xffff;
  *(undefined1 *)(param_2 + -7) = 0;
  *(int **)(param_1 + 4) = piVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (*piVar3 - (int)piVar3);
  piVar4 = *(int **)(param_2 + -0xc);
  piVar1 = (int *)*piVar3;
  if ((piVar4 != (int *)0x0) && ((char)piVar4[2] == '\0')) {
    *piVar4 = (int)piVar1;
    piVar1[1] = (int)piVar4;
    piVar1 = (int *)*piVar4;
    piVar3 = piVar4;
  }
  if ((char)piVar1[2] == '\0') {
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
  }
  return;
}

