/* Entry 0x08835CB8 | file offset 0x00032C90 | FUN_08835cb8 | bytes 64 */

void FUN_08835cb8(int param_1)

{
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x80;
  FUN_089a3efc(param_1 + 0x40);
  return;
}

