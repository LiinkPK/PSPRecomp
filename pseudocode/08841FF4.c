/* Entry 0x08841FF4 | file offset 0x0003EFCC | FUN_08841ff4 | bytes 84 */

void FUN_08841ff4(int param_1)

{
  do {
    param_1 = FUN_08841f84(param_1);
    if (param_1 == 0) {
      return;
    }
  } while (*(char *)(param_1 + 0x542) != '\x01');
  return;
}

