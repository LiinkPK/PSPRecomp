/* Entry 0x08872A94 | file offset 0x0006FA6C | FUN_08872a94 | bytes 72 */

void FUN_08872a94(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x34) = &DAT_089c96e8;
    if (param_1 != 0) {
      *(undefined **)(param_1 + 0x34) = &DAT_089c96b0;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

