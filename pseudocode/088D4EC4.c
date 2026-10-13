/* Entry 0x088D4EC4 | file offset 0x000D1E9C | FUN_088d4ec4 | bytes 216 */

void FUN_088d4ec4(uint *param_1)

{
  uint uVar1;
  
  if (param_1[4] != 0) {
    uVar1 = param_1[1];
    if (((*param_1 & 1) != 0) &&
       (((uVar1 == 0xffffffff || (param_1[2] != 0xffffffff)) ||
        ((*(ushort *)(param_1[4] + 0x20) & 0x20) != 0)))) {
      FUN_088d372c(param_1);
      uVar1 = param_1[2];
      param_1[2] = 0xffffffff;
      param_1[1] = uVar1;
      uVar1 = param_1[1];
      if (uVar1 != 0xffffffff) {
        FUN_088d6280(param_1);
        uVar1 = param_1[1];
      }
      *param_1 = *param_1 & 0xfffffffe;
    }
    if (uVar1 != 0xffffffff) {
      FUN_088d37b4(param_1);
    }
  }
  return;
}

