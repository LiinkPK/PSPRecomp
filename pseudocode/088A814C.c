/* Entry 0x088A814C | file offset 0x000A5124 | FUN_088a814c | bytes 92 */

void FUN_088a814c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x2c) = &DAT_089cb1b0;
    FUN_088a9880(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

