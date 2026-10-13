/* Entry 0x088E2AC8 | file offset 0x000DFAA0 | FUN_088e2ac8 | bytes 52 */

void FUN_088e2ac8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x7bc) = &DAT_089cc538;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

