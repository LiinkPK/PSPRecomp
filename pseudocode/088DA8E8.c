/* Entry 0x088DA8E8 | file offset 0x000D78C0 | FUN_088da8e8 | bytes 60 */

void FUN_088da8e8(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0x96;
  *(int *)(param_1 + 0xc) = param_2;
  if (param_2 != 0) {
    *(short *)(param_1 + 0x18) = (short)*(undefined4 *)(param_2 + 0x24);
    *(short *)(param_1 + 0x1a) = (short)*(undefined4 *)(param_2 + 0x2c);
  }
  return;
}

