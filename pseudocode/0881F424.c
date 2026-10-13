/* Entry 0x0881F424 | file offset 0x0001C3FC | FUN_0881f424 | bytes 88 */

void FUN_0881f424(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_089c7650;
    FUN_0881f49c(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

