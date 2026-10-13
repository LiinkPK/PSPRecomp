/* Entry 0x08932E74 | file offset 0x0012FE4C | FUN_08932e74 | bytes 84 */

void FUN_08932e74(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_088d9b28(*(int *)(param_1 + 0x34),0);
    (**(code **)(*(int *)(param_1 + 0x24) + 0x34))
              (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x30));
  }
  return;
}

