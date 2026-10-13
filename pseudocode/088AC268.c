/* Entry 0x088AC268 | file offset 0x000A9240 | FUN_088ac268 | bytes 44 */

void FUN_088ac268(int param_1)

{
  *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0xc000;
  FUN_088ac82c(param_1,1);
  return;
}

