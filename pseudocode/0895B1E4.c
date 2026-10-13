/* Entry 0x0895B1E4 | file offset 0x001581BC | FUN_0895b1e4 | bytes 96 */

void FUN_0895b1e4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089dbf40;
    FUN_0895b3cc(param_1,DAT_09b6f478);
    if ((param_2 & 1) != 0) {
      FUN_0895b43c(param_1);
    }
  }
  return;
}

