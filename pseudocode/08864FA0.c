/* Entry 0x08864FA0 | file offset 0x00061F78 | FUN_08864fa0 | bytes 40 */

void FUN_08864fa0(int param_1)

{
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
  }
  return;
}

