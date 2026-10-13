/* Entry 0x089313C0 | file offset 0x0012E398 | FUN_089313c0 | bytes 92 */

void FUN_089313c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  (**(code **)(*(int *)(param_1 + 0x24) + 0x44))
            (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x40),0);
  (**(code **)(*(int *)(param_1 + 0x24) + 0x34))
            (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x30));
  return;
}

