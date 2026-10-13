/* Entry 0x08879F84 | file offset 0x00076F5C | FUN_08879f84 | bytes 92 */

void FUN_08879f84(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_088734d4(param_1 + 0x100,2);
    FUN_0885e834(param_1 + 0x40,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

