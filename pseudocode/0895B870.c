/* Entry 0x0895B870 | file offset 0x00158848 | FUN_0895b870 | bytes 92 */

void FUN_0895b870(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089dbf50;
    FUN_0895b1e4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0895b92c(param_1);
    }
  }
  return;
}

