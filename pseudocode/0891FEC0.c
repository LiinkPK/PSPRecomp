/* Entry 0x0891FEC0 | file offset 0x0011CE98 | FUN_0891fec0 | bytes 72 */

void FUN_0891fec0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = 0;
  param_1 = param_1 + 2;
  do {
    FUN_089226f8(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xd;
  } while (iVar1 < 0x18);
  return;
}

