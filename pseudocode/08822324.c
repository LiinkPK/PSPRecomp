/* Entry 0x08822324 | file offset 0x0001F2FC | FUN_08822324 | bytes 132 */

void FUN_08822324(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffe000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_089a3890(param_1);
  FUN_089a3890(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return;
}

