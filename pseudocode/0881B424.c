/* Entry 0x0881B424 | file offset 0x000183FC | FUN_0881b424 | bytes 124 */

void FUN_0881b424(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x148) = &DAT_089c7530;
    FUN_0881b558(param_1);
    FUN_08819bc4(param_1 + 0x5c,2);
    FUN_0881a204(param_1 + 0x34,2);
    FUN_08816784(param_1 + 0x14,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

