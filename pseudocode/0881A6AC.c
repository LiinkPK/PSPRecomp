/* Entry 0x0881A6AC | file offset 0x00017684 | FUN_0881a6ac | bytes 236 */

void FUN_0881a6ac(int param_1,int *param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_2 == 1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + param_2[1] * 0xc);
    *(undefined1 *)(piVar2 + 2) = param_3;
    iVar1 = 0;
    iVar3 = 0;
    if (0 < *piVar2) {
      do {
        FUN_0881a798(param_1,*(undefined4 *)(piVar2[1] + iVar3),param_3,param_4,param_5);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar1 < *piVar2);
    }
  }
  else {
    FUN_0881a798(param_1,param_2[1],param_3,param_4,param_5);
  }
  return;
}

