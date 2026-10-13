/* Entry 0x0881AF84 | file offset 0x00017F5C | FUN_0881af84 | bytes 88 */

void FUN_0881af84(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_089c7520;
    FUN_0881aff4(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

