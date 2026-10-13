/* Entry 0x088AC7C4 | file offset 0x000A979C | FUN_088ac7c4 | bytes 40 */

void FUN_088ac7c4(int param_1)

{
  *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x80;
  FUN_088ac82c(param_1,0);
  return;
}

