/* Entry 0x08871A80 | file offset 0x0006EA58 | FUN_08871a80 | bytes 48 */

void FUN_08871a80(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    (**(code **)(param_1 + 0x68))(param_2,*(undefined4 *)(param_1 + 0x6c));
  }
  return;
}

