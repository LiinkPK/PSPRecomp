/* Entry 0x08879FE0 | file offset 0x00076FB8 | FUN_08879fe0 | bytes 220 */

void FUN_08879fe0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x7a8 != 0) {
      FUN_0887a644(param_1 + 0x7a8,2);
    }
    FUN_0899372c(param_1 + 0x754,2,0x28,FUN_08890b04,0,0);
    FUN_088ce36c(param_1 + 0x728,2);
    FUN_0899372c(param_1 + 0x230,2,0x27c,FUN_088d6cfc,0,0);
    FUN_0899372c(param_1 + 0xe8,2,0xa4,FUN_088de2c4,0,0);
    FUN_088cc88c(param_1 + 0xb0,2);
    FUN_088cd424(param_1 + 0x6c,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

