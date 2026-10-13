/* Entry 0x0887E0DC | file offset 0x0007B0B4 | FUN_0887e0dc | bytes 56 */

void FUN_0887e0dc(int param_1,int param_2)

{
  if (param_2 < 2) {
    param_1 = param_1 + param_2 * 8;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x35) = 0x12;
    *(undefined2 *)(param_1 + 0x36) = 0x80;
  }
  return;
}

