/* Entry 0x088A9880 | file offset 0x000A6858 | FUN_088a9880 | bytes 52 */

void FUN_088a9880(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x2c) = &DAT_089cb248;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

