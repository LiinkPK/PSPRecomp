/* Entry 0x088799F0 | file offset 0x000769C8 | FUN_088799f0 | bytes 136 */

void FUN_088799f0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0899372c(param_1 + 0xed1c,0x180,0x1c,FUN_08865488,0,0);
    FUN_0899372c(param_1 + 0x1c,0xc0,0x13c,FUN_08869c74,0,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

