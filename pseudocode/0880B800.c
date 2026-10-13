/* Entry 0x0880B800 | file offset 0x000087D8 | FUN_0880b800 | bytes 92 */

void FUN_0880b800(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x70) = &DAT_089c6ce0;
    FUN_08807788(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08807a1c(param_1);
    }
  }
  return;
}

