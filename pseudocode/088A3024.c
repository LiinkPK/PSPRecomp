/* Entry 0x088A3024 | file offset 0x0009FFFC | FUN_088a3024 | bytes 52 */

void FUN_088a3024(int param_1)

{
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,*(undefined4 *)(param_1 + 0x48));
  }
  return;
}

