/* Entry 0x08889904 | file offset 0x000868DC | FUN_08889904 | bytes 32 */

void FUN_08889904(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x7d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7f0) = 0xffffffff;
  return;
}

