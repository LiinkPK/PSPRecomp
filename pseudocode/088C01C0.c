/* Entry 0x088C01C0 | file offset 0x000BD198 | FUN_088c01c0 | bytes 104 */

void FUN_088c01c0(int param_1)

{
  FUN_08935828(param_1,0,8);
  FUN_08935828(param_1 + 8,0,4);
  FUN_08935828(param_1 + 0xc,0,0x100);
  FUN_08935828(param_1 + 0x10c,0,4);
  *(undefined2 *)(param_1 + 0x110) = 0;
  *(undefined2 *)(param_1 + 0x112) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}

