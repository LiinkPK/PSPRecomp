/* Entry 0x0892E5B4 | file offset 0x0012B58C | FUN_0892e5b4 | bytes 40 */

void FUN_0892e5b4(int param_1)

{
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return;
}

