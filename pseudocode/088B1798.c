/* Entry 0x088B1798 | file offset 0x000AE770 | FUN_088b1798 | bytes 312 */

void FUN_088b1798(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 2) {
    if (-1 < iVar1) {
      if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        *(int *)(param_1 + 0x10) = iVar1 + 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar2;
        if (iVar2 < 5) {
          *(int *)(param_1 + 0xc) = (iVar2 * 0xdc) / 5;
        }
        else {
          *(undefined4 *)(param_1 + 0xc) = 0xdc;
          *(int *)(param_1 + 0x10) = iVar1 + 1;
        }
      }
    }
  }
  else if (iVar1 < 3) {
    if (*(char *)(param_1 + 1) != '\0') {
      *(int *)(param_1 + 0x10) = iVar1 + 1;
    }
  }
  else if (iVar1 < 4) {
    iVar1 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_088822b4(param_2);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = (iVar1 * 0xdc) / 5;
    }
  }
  FUN_088b18d0(param_1);
  return;
}

