/* Entry 0x0880B960 | file offset 0x00008938 | FUN_0880b960 | bytes 100 */

void FUN_0880b960(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x70) = &DAT_089c6d18;
    **(undefined4 **)(param_1 + 0x208) = 0;
    FUN_08807788(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08807a1c(param_1);
    }
  }
  return;
}

