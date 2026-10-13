/* Entry 0x0899286C | file offset 0x0018F844 | FUN_0899286c | bytes 64 */

void FUN_0899286c(int param_1,int param_2)

{
  sceAtracAddStreamData(*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_2;
  return;
}

