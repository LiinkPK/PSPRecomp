/* Entry 0x088DECB0 | file offset 0x000DBC88 | FUN_088decb0 | bytes 88 */

void FUN_088decb0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_089cc2d0;
    FUN_088ded28(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

