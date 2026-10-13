/* Entry 0x08834D8C | file offset 0x00031D64 | FUN_08834d8c | bytes 76 */

void FUN_08834d8c(undefined4 param_1,int param_2)

{
  FUN_08834d30(param_1,0);
  *(uint *)(param_2 + 0x38c) = *(uint *)(param_2 + 0x38c) | 0x200;
  *(undefined4 *)(param_2 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  return;
}

