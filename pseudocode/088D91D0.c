/* Entry 0x088D91D0 | file offset 0x000D61A8 | FUN_088d91d0 | bytes 120 */

void FUN_088d91d0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x1e4) = &DAT_089cc240;
    FUN_088d9254(param_1);
    FUN_0899372c(param_1 + 4,7,0x44,FUN_088d89b8,0,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

