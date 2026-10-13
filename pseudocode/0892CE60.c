/* Entry 0x0892CE60 | file offset 0x00129E38 | FUN_0892ce60 | bytes 84 */

void FUN_0892ce60(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_088d9b28(*(int *)(param_1 + 0x30),0);
    (**(code **)(*(int *)(param_1 + 0x24) + 0x34))
              (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x30));
  }
  return;
}

