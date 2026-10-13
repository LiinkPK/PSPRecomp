/* Entry 0x0889726C | file offset 0x00094244 | FUN_0889726c | bytes 88 */

void FUN_0889726c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0xac) {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

