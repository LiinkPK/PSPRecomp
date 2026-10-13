/* Entry 0x088DF084 | file offset 0x000DC05C | FUN_088df084 | bytes 88 */

void FUN_088df084(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_089cc308;
    FUN_088df100(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

