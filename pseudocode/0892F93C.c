/* Entry 0x0892F93C | file offset 0x0012C914 | FUN_0892f93c | bytes 100 */

void FUN_0892f93c(int param_1)

{
  if ((*(ushort *)(*(int *)(param_1 + 0x34) + 0x20) & 0x20) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0x2c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}

