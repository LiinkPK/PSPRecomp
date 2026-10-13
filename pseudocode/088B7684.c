/* Entry 0x088B7684 | file offset 0x000B465C | FUN_088b7684 | bytes 20 */

void FUN_088b7684(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  param_1 = param_1 + param_2 * 2;
  *(undefined1 *)(param_1 + 0xbb) = param_3;
  *(undefined1 *)(param_1 + 0xbc) = param_4;
  return;
}

