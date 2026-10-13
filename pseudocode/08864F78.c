/* Entry 0x08864F78 | file offset 0x00061F50 | FUN_08864f78 | bytes 40 */

void FUN_08864f78(int param_1)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
  }
  return;
}

