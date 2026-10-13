/* Entry 0x08896BF0 | file offset 0x00093BC8 | FUN_08896bf0 | bytes 204 */

void FUN_08896bf0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (int)param_2;
  piVar1 = param_2 + 4;
  param_1[1] = (int)piVar1;
  iVar2 = *param_2;
  param_1[2] = (int)(piVar1 + iVar2 * 9);
  param_1[3] = (int)(piVar1 + iVar2 * 9 + param_2[1] * 4);
  if (param_2[3] < 0x10) {
    param_1[6] = 0;
  }
  else {
    iVar2 = 0x100 - param_2[3];
    param_1[6] = iVar2;
    param_1[4] = param_1[3] + param_2[2] * 0xc;
    if (iVar2 == 2) {
      iVar2 = param_1[4];
      *(int *)(iVar2 + 0x24) = iVar2 + 0x30;
      iVar3 = iVar2 + 0x30 + *(int *)(iVar2 + 0x20) * 2;
      *(int *)(iVar2 + 0x28) = iVar3;
      *(int *)(iVar2 + 0x2c) = iVar3 + *(int *)(iVar2 + 0x20) * 2;
      param_2 = (int *)*param_1;
    }
  }
  if (0 < param_2[1]) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

