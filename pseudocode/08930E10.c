/* Entry 0x08930E10 | file offset 0x0012DDE8 | FUN_08930e10 | bytes 144 */

void FUN_08930e10(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((-1 < param_2) && (param_2 < 6)) &&
     (iVar1 = param_1 + param_2 * 0x5c, *(int *)(iVar1 + 0x84) != param_3)) {
    if (param_2 < *(int *)(param_1 + 0x260)) {
      FUN_089306bc(iVar1 + 0x38,param_3);
    }
    else {
      FUN_08930d78(param_1,param_3);
    }
  }
  return;
}

