/* Entry 0x08841FA4 | file offset 0x0003EF7C | FUN_08841fa4 | bytes 80 */

void FUN_08841fa4(int param_1)

{
  do {
    param_1 = FUN_08841f84(param_1);
    if (param_1 == 0) {
      return;
    }
  } while (*(char *)(param_1 + 0x542) != '\0');
  return;
}

