/* Entry 0x08864FC8 | file offset 0x00061FA0 | FUN_08864fc8 | bytes 40 */

void FUN_08864fc8(int param_1)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
  }
  return;
}

