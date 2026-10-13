/* Entry 0x088C6BA4 | file offset 0x000C3B7C | FUN_088c6ba4 | bytes 100 */

void FUN_088c6ba4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x28) = &DAT_089cbc38;
    FUN_088c6c24(param_1);
    FUN_0887a644(param_1 + 0x18,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

