/* Entry 0x08814704 | file offset 0x000116DC | FUN_08814704 | bytes 104 */

void FUN_08814704(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x2c) = &DAT_089c6fe8;
    FUN_088a958c(DAT_089d6dc8,param_1);
    FUN_088a9880(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

