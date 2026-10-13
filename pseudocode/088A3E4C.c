/* Entry 0x088A3E4C | file offset 0x000A0E24 | FUN_088a3e4c | bytes 80 */

void FUN_088a3e4c(int param_1)

{
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_0889f704(param_1 + 4);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

