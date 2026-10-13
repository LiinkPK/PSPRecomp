/* Entry 0x088579E4 | file offset 0x000549BC | FUN_088579e4 | bytes 88 */

void FUN_088579e4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  param_1[4] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    iVar1 = 0;
    do {
      FUN_0899bb1c(*param_1);
      *param_1 = 0;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < 4);
  }
  return;
}

