/* Entry 0x08831EA8 | file offset 0x0002EE80 | FUN_08831ea8 | bytes 92 */

void FUN_08831ea8(int param_1,undefined4 param_2,char param_3)

{
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 8;
  if (param_3 == '\x01') {
    *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) | 0x400;
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x388);
  }
  return;
}

