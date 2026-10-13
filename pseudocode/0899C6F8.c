/* Entry 0x0899C6F8 | file offset 0x001996D0 | FUN_0899c6f8 | bytes 108 */

void FUN_0899c6f8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 & 2) != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        param_2 = param_2 | 1;
      }
      FUN_0899b85c(*(int *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_0899b830(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

