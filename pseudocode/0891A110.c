/* Entry 0x0891A110 | file offset 0x001170E8 | FUN_0891a110 | bytes 76 */

void FUN_0891a110(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar1 = 0;
  param_1 = param_1 + 8;
  do {
    FUN_0891a0f4(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xba;
  } while (iVar1 < 5);
  return;
}

