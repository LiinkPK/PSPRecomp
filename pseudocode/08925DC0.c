/* Entry 0x08925DC0 | file offset 0x00122D98 | FUN_08925dc0 | bytes 96 */

void FUN_08925dc0(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined2 *)(*(int *)(param_1 + 0x20) + *(char *)(*(int *)(param_1 + 0x20) + 0xb7) * 8 + 0xbc)
       = param_2;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + *(char *)(*(int *)(param_1 + 0x20) + 0xb7) * 8 + 0xbe)
       = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + *(char *)(*(int *)(param_1 + 0x20) + 0xb7) * 8 + 0xc0)
       = param_4;
  *(char *)(*(int *)(param_1 + 0x20) + 0xb7) = *(char *)(*(int *)(param_1 + 0x20) + 0xb7) + '\x01';
  return;
}

