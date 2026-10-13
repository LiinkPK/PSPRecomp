/* Entry 0x088BF17C | file offset 0x000BC154 | FUN_088bf17c | bytes 188 */

void FUN_088bf17c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_088bf41c(param_1);
    if (param_1 + 0x32c != 0) {
      FUN_0899372c(param_1 + 0x32c,10,0x44,FUN_088bf0b8,0,0);
    }
    if (param_1 + 0x80 != 0) {
      FUN_0899372c(param_1 + 0x80,10,0x44,FUN_088bf0b8,0,0);
    }
    FUN_088bd518(param_1 + 0x40,2);
    FUN_088bd518(param_1,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

