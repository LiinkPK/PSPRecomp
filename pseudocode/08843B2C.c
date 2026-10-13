/* Entry 0x08843B2C | file offset 0x00040B04 | FUN_08843b2c | bytes 60 */

void FUN_08843b2c(int param_1)

{
  if (param_1 < 1) {
    *(undefined1 *)(DAT_089d4960 + 0x60) = 0xb;
    *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
  }
  else {
    *(undefined1 *)(DAT_089d4960 + 0x60) = 6;
    *(int *)(DAT_089d4960 + 0x58) = param_1;
  }
  return;
}

