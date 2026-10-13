/* Entry 0x088C2690 | file offset 0x000BF668 | FUN_088c2690 | bytes 256 */

void FUN_088c2690(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 < 4) {
    if (1 < iVar1) {
      if (iVar1 < 3) {
        iVar1 = *(int *)(param_2 + 0xfda0) + param_3[1];
        if (999999999 < iVar1) {
          iVar1 = 999999999;
        }
        *(int *)(param_2 + 0xfda0) = iVar1;
      }
      else {
        iVar1 = *(int *)(param_2 + 0xfd98) + param_3[1];
        if (999999999 < iVar1) {
          iVar1 = 999999999;
        }
        *(int *)(param_2 + 0xfd98) = iVar1;
      }
    }
  }
  else if (iVar1 < 5) {
    iVar1 = *(int *)(param_2 + 0xfda8) + param_3[2];
    if (999999999 < iVar1) {
      iVar1 = 999999999;
    }
    *(int *)(param_2 + 0xfda8) = iVar1;
  }
  else if (iVar1 < 6) {
    iVar1 = *(int *)(param_2 + 0xfdac) + param_3[2];
    if (999999999 < iVar1) {
      iVar1 = 999999999;
    }
    *(int *)(param_2 + 0xfdac) = iVar1;
  }
  return;
}

