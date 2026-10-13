/* Entry 0x08821110 | file offset 0x0001E0E8 | FUN_08821110 | bytes 88 */

void FUN_08821110(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_089c7680;
    FUN_0882117c(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

