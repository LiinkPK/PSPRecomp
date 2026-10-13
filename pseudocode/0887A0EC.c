/* Entry 0x0887A0EC | file offset 0x000770C4 | FUN_0887a0ec | bytes 176 */

void FUN_0887a0ec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x1090) {
      *(undefined4 *)(param_1 + 0x1098) = 0x8b5bda0;
    }
    if (param_1 != -0x7b0) {
      *(undefined4 *)(param_1 + 0x7b8) = 0x8b59d28;
    }
    if (param_1 != -0x2b0) {
      *(undefined4 *)(param_1 + 0x2b8) = 0x8b57e50;
    }
    if (param_1 != -0x1b0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x8b5d528;
      FUN_08864c48(param_1 + 0x1bc,2);
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

