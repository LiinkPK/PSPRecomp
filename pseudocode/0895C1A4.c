/* Entry 0x0895C1A4 | file offset 0x0015917C | FUN_0895c1a4 | bytes 92 */

void FUN_0895c1a4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089dbf60;
    FUN_0895b1e4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0895c31c(param_1);
    }
  }
  return;
}

