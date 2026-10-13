/* Entry 0x0888F908 | file offset 0x0008C8E0 | FUN_0888f908 | bytes 124 */

int FUN_0888f908(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_08935828(param_1,0,8);
  FUN_08935828(param_1 + 0x10,0,0x14);
  FUN_08935828(param_1 + 0x28,0,5);
  return param_1;
}

