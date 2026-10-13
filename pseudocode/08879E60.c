/* Entry 0x08879E60 | file offset 0x00076E38 | FUN_08879e60 | bytes 100 */

void FUN_08879e60(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_08869908(param_1 + 0x5c,2);
    if (param_1 != 0) {
      FUN_088a6528(param_1,2);
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

