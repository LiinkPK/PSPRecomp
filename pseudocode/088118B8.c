/* Entry 0x088118B8 | file offset 0x0000E890 | FUN_088118b8 | bytes 64 */

void FUN_088118b8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffc;
  return;
}

