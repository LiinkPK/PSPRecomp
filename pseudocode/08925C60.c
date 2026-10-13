/* Entry 0x08925C60 | file offset 0x00122C38 | FUN_08925c60 | bytes 48 */

void FUN_08925c60(int param_1,undefined2 param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 0x20) + *(char *)(*(int *)(param_1 + 0x20) + 0xb6) * 2 + 0x8c)
       = param_2;
  *(char *)(*(int *)(param_1 + 0x20) + 0xb6) = *(char *)(*(int *)(param_1 + 0x20) + 0xb6) + '\x01';
  return;
}

