/* Entry 0x089127C4 | file offset 0x0010F79C | FUN_089127c4 | bytes 116 */

void FUN_089127c4(int param_1)

{
  *(undefined2 *)(param_1 + 0x240) = 0xffff;
  *(undefined2 *)(param_1 + 0x242) = 0xffff;
  FUN_089a34e0(param_1 + 0x244);
  FUN_089a34e0(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x264);
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) & 0xffffffe7;
  return;
}

