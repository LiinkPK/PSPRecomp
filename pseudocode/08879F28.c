/* Entry 0x08879F28 | file offset 0x00076F00 | FUN_08879f28 | bytes 92 */

void FUN_08879f28(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_088734d4(param_1 + 0xd0,2);
    FUN_0885e834(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

