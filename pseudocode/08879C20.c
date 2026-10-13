/* Entry 0x08879C20 | file offset 0x00076BF8 | FUN_08879c20 | bytes 148 */

void FUN_08879c20(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x8d0 != 0) {
      FUN_088734d4(param_1 + 0x990,2);
      FUN_0885e834(param_1 + 0x8d0,2);
    }
    FUN_0880fba0(param_1 + 0x750,2);
    FUN_088734d4(param_1 + 0xc0,2);
    FUN_0885e834(param_1,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

