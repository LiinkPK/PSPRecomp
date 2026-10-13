/* Entry 0x0890EA18 | file offset 0x0010B9F0 | FUN_0890ea18 | bytes 56 */

void FUN_0890ea18(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 100;
  if ((-1 < (int)uVar1) && ((int)uVar1 < 0x20)) {
    DAT_09b6b3d8 = DAT_09b6b3d8 & ~(1 << (uVar1 & 0x1f));
  }
  return;
}

