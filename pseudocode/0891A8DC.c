/* Entry 0x0891A8DC | file offset 0x001178B4 | FUN_0891a8dc | bytes 64 */

void FUN_0891a8dc(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5)

{
  param_1 = param_1 + param_2 * 0x2e8;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  *(undefined2 *)(param_1 + 0x16) = param_4;
  *(undefined2 *)(param_1 + 0x18) = param_5;
  return;
}

