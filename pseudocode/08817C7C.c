/* Entry 0x08817C7C | file offset 0x00014C54 | FUN_08817c7c | bytes 88 */

void FUN_08817c7c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x28) = &DAT_089c74c8;
    FUN_08817d18(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

