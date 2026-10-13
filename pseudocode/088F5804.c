/* Entry 0x088F5804 | file offset 0x000F27DC | FUN_088f5804 | bytes 64 */

void FUN_088f5804(int param_1)

{
  FUN_088f5790();
  FUN_088f4bd8(param_1);
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 0x40;
  *(undefined1 *)(param_1 + 0xe4) = 1;
  return;
}

