/* Entry 0x088F6698 | file offset 0x000F3670 | FUN_088f6698 | bytes 212 */

void FUN_088f6698(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xfd70) + *param_4;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (99999999 < iVar1) {
    iVar1 = 99999999;
  }
  *(int *)(param_2 + 0xfd70) = iVar1;
  iVar1 = *(int *)(param_2 + 0x1cea8) + param_4[1];
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (99999999 < iVar1) {
    iVar1 = 99999999;
  }
  *(int *)(param_2 + 0x1cea8) = iVar1;
  *(undefined2 *)(param_3 + 0xf8) = *(undefined2 *)(param_3 + 0xf4);
  *(undefined2 *)(param_3 + 0xfa) = *(undefined2 *)(param_3 + 0xf6);
  iVar1 = *(int *)(param_2 + 0xfda0) + param_4[1];
  if (999999999 < iVar1) {
    iVar1 = 999999999;
  }
  *(int *)(param_2 + 0xfda0) = iVar1;
  return;
}

