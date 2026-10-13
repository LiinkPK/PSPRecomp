/* Entry 0x089125A8 | file offset 0x0010F580 | FUN_089125a8 | bytes 128 */

void FUN_089125a8(int param_1)

{
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x264);
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) & 0xfffffff9;
  FUN_08912a6c(param_1);
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_08912af8(param_1,0,1);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}

