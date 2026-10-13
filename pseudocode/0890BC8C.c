/* Entry 0x0890BC8C | file offset 0x00108C64 | FUN_0890bc8c | bytes 124 */

void FUN_0890bc8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08904038(param_2,param_1 + 8);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = param_3;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x11c) = param_4;
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}

