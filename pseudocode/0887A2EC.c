/* Entry 0x0887A2EC | file offset 0x000772C4 | FUN_0887a2ec | bytes 88 */

void FUN_0887a2ec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089c9d30;
    FUN_0887a354(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

