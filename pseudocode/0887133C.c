/* Entry 0x0887133C | file offset 0x0006E314 | FUN_0887133c | bytes 88 */

void FUN_0887133c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x74) = &DAT_089c9680;
    FUN_088713b0(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

