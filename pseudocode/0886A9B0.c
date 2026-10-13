/* Entry 0x0886A9B0 | file offset 0x00067988 | FUN_0886a9b0 | bytes 232 */

undefined4 FUN_0886a9b0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == -1) {
    iVar2 = **(int **)(param_1 + 0x84);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_2 < 0) || ((*(int **)(param_1 + 0x84))[1] < param_2)) {
      return 0;
    }
    iVar2 = iVar2 + param_2 * 0x60;
  }
  else {
    param_1 = param_1 + param_4 * 0x10;
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_2 < 0) || (*(int *)(param_1 + 8) < param_2)) {
      return 0;
    }
    iVar2 = iVar2 + param_2 * 0x60;
  }
  if ((param_3 < 0) || (*(short *)(iVar2 + 0x48) < param_3)) {
    uVar1 = 0;
  }
  else {
    *(short *)(iVar2 + 0x4a) = (short)param_3;
    *(int *)(iVar2 + 0x24) = param_3;
    *(undefined2 *)(iVar2 + 0x4c) = 0;
    *(undefined2 *)(iVar2 + 0x4e) = 0;
    *(undefined2 *)(iVar2 + 0x46) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

