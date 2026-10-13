/* Entry 0x088CAF74 | file offset 0x000C7F4C | FUN_088caf74 | bytes 28 */

void FUN_088caf74(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = param_2 + 0x10;
  }
  return;
}

