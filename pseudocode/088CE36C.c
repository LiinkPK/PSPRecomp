/* Entry 0x088CE36C | file offset 0x000CB344 | FUN_088ce36c | bytes 88 */

void FUN_088ce36c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_089cbd90;
    FUN_088ce3d8(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

