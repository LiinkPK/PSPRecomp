/* Entry 0x088AC7EC | file offset 0x000A97C4 | FUN_088ac7ec | bytes 64 */

void FUN_088ac7ec(int param_1)

{
  *(undefined4 *)(param_1 + 0x210) = 7;
  *(undefined4 *)(param_1 + 0x7a8) = 1;
  *(undefined1 *)(param_1 + 0x761) = 0;
  *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffffd;
  FUN_088ac07c(param_1,0);
  return;
}

