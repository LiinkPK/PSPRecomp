/* Entry 0x088DB28C | file offset 0x000D8264 | FUN_088db28c | bytes 64 */

void FUN_088db28c(int param_1,int param_2,short param_3)

{
  if (*(short *)(param_1 + 0xe) == param_3) {
    *(undefined2 *)(param_2 + 100) = *(undefined2 *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = param_2;
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfb;
  }
  return;
}

