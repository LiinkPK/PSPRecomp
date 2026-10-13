/* Entry 0x088A4B14 | file offset 0x000A1AEC | FUN_088a4b14 | bytes 60 */

void FUN_088a4b14(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd | 2;
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34));
  }
  return;
}

