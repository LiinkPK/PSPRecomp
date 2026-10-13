/* Entry 0x08879B28 | file offset 0x00076B00 | FUN_08879b28 | bytes 148 */

void FUN_08879b28(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0892f3d8(param_1 + 0x418,2);
    FUN_088ce36c(param_1 + 0x404,2);
    FUN_088cd424(param_1 + 0x3c0,2);
    FUN_088de2c4(param_1 + 0x31c,2);
    FUN_088d6cfc(param_1 + 0xa0,2);
    if (param_1 + 0x7c != 0) {
      FUN_08869908(param_1 + 0x7c,2);
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

