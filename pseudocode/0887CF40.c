/* Entry 0x0887CF40 | file offset 0x00079F18 | FUN_0887cf40 | bytes 64 */

void FUN_0887cf40(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = 0;
  param_1 = param_1 + 4;
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0x10] = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x14;
  } while (iVar1 < 10);
  return;
}

