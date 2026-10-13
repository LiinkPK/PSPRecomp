/* Entry 0x08886654 | file offset 0x0008362C | FUN_08886654 | bytes 240 */

int FUN_08886654(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_0885eafc(param_1 + 0x5c);
  FUN_0888f908(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  FUN_08935828(param_1,0,8);
  FUN_08935828(param_1 + 8,0,8);
  FUN_08935828(param_1 + 0x10,0,8);
  FUN_08935828(param_1 + 0x18,0,8);
  FUN_08935828(param_1 + 0x20,0,8);
  FUN_08935828(param_1 + 0x28,0,8);
  FUN_08935828(param_1 + 0x30,0,8);
  FUN_08935828(param_1 + 0x38,0,8);
  FUN_08935828(param_1 + 0x40,0,8);
  FUN_08935828(param_1 + 0x48,0,8);
  return param_1;
}

