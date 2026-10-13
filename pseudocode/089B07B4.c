/* Entry 0x089B07B4 | file offset 0x001AD78C | FUN_089b07b4 | bytes 64 */

void FUN_089b07b4(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = (param_2 & 3) >> 1;
    if (*(int *)(param_1 + 2) != 0) {
      uVar2 = uVar1 | 2;
      if ((param_2 & 8) == 0) {
        uVar2 = uVar1;
      }
      if (*param_1 < 2) {
        FUN_089bc8a8(*(int *)(param_1 + 2),uVar2);
        return;
      }
    }
  }
  return;
}

