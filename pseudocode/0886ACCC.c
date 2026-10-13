/* Entry 0x0886ACCC | file offset 0x00067CA4 | FUN_0886accc | bytes 240 */

void FUN_0886accc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0886a908();
  FUN_0886a54c(param_1);
  FUN_0886a180(param_1);
  if (**(int **)(param_1 + 0x84) != 0) {
    FUN_0886d618(param_1);
  }
  if ((*(uint *)(param_1 + 0x90) & 1) == 0) {
    if (param_3 == 0) {
      iVar1 = *(int *)(param_1 + 0x128);
      goto LAB_0886ad34;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x128);
LAB_0886ad34:
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x94) == 0) {
        FUN_0886e86c(param_1,param_2,param_3);
      }
      if (*(int *)(param_1 + 0x94) != 0) {
        FUN_0886a24c(param_1,param_2);
      }
      goto LAB_0886ad84;
    }
  }
  FUN_0886a3f4(param_1,param_2);
LAB_0886ad84:
  if ((*(int *)(param_1 + 0x128) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x128) + -1, *(int *)(param_1 + 0x128) = iVar1, iVar1 == 0)) {
    FUN_0886caa0(param_1);
  }
  return;
}

