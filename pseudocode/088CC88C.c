/* Entry 0x088CC88C | file offset 0x000C9864 | FUN_088cc88c | bytes 120 */

void FUN_088cc88c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x34) = &DAT_089cbce0;
    FUN_088cc914(param_1);
    FUN_088cd280(param_1);
    FUN_0887a644(param_1 + 0x24,2);
    FUN_0887a644(param_1 + 0x14,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

