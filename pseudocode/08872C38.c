/* Entry 0x08872C38 | file offset 0x0006FC10 | FUN_08872c38 | bytes 184 */

void FUN_08872c38(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x1e0) {
      *(undefined **)(param_1 + 0x214) = &DAT_089c96b0;
    }
    FUN_0899372c(param_1 + 0x160,2,0x40,FUN_08872b60,0,0);
    FUN_0899372c(param_1 + 0xc0,2,0x50,FUN_08872a94,0,0);
    FUN_0899372c(param_1,2,0x60,FUN_08872498,0,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

