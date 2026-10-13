/* Entry 0x088822E0 | file offset 0x0007F2B8 | FUN_088822e0 | bytes 76 */

void FUN_088822e0(int param_1)

{
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1);
  }
  FUN_0885c538(**(undefined4 **)(param_1 + 0x24),param_1,0);
  return;
}

