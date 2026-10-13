/* Entry 0x0892A768 | file offset 0x00127740 | FUN_0892a768 | bytes 40 */

void FUN_0892a768(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  param_1 = param_1 + param_2 * 8;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  FUN_0892a654();
  return;
}

