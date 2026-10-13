/* Entry 0x08819C1C | file offset 0x00016BF4 | FUN_08819c1c | bytes 40 */

void FUN_08819c1c(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

