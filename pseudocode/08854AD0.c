/* Entry 0x08854AD0 | file offset 0x00051AA8 | FUN_08854ad0 | bytes 68 */

void FUN_08854ad0(undefined4 *param_1)

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

