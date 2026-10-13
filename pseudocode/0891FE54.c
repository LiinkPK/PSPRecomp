/* Entry 0x0891FE54 | file offset 0x0011CE2C | FUN_0891fe54 | bytes 108 */

void FUN_0891fe54(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_089227e8(param_1 + *param_1 * 0xd + 2);
  if (iVar1 != 0) {
    FUN_08922f54();
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_0891fec0(param_1);
  }
  return;
}

