/* Entry 0x088A4C10 | file offset 0x000A1BE8 | FUN_088a4c10 | bytes 60 */

void FUN_088a4c10(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_2,param_3,*(undefined4 *)(param_1 + 0x3c));
  }
  return;
}

