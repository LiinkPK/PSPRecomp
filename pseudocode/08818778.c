/* Entry 0x08818778 | file offset 0x00015750 | FUN_08818778 | bytes 88 */

void FUN_08818778(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_08818818(param_1);
    FUN_08819e78(param_1 + 0x18,2);
    if ((param_2 & 1) != 0) {
      FUN_08818864(param_1);
    }
  }
  return;
}

