/* Entry 0x08902A10 | file offset 0x000FF9E8 | FUN_08902a10 | bytes 76 */

void FUN_08902a10(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffffffff;
  iVar1 = 0;
  param_1 = param_1 + 1;
  do {
    FUN_088b7d04(param_1);
    iVar1 = iVar1 + 1;
    param_1 = (undefined4 *)((int)param_1 + 0x1e);
  } while (iVar1 < 3);
  return;
}

