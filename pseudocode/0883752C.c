/* Entry 0x0883752C | file offset 0x00034504 | FUN_0883752c | bytes 88 */

undefined4 FUN_0883752c(int param_1)

{
  if ((*(byte *)(param_1 + 400) & 2) == 0) {
    if ((*(uint *)(param_1 + 900) & 0x1000) != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 0x542) != '\x03') {
      return 0;
    }
  }
  return 1;
}

