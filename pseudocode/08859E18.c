/* Entry 0x08859E18 | file offset 0x00056DF0 | FUN_08859e18 | bytes 60 */

void FUN_08859e18(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_0899bb1c(*param_1);
    *param_1 = 0;
  }
  return;
}

