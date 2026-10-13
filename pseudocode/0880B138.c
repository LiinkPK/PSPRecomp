/* Entry 0x0880B138 | file offset 0x00008110 | FUN_0880b138 | bytes 92 */

void FUN_0880b138(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x70) = &DAT_089c6ca8;
    FUN_08807788(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08807a1c(param_1);
    }
  }
  return;
}

