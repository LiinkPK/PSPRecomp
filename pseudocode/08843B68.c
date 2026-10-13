/* Entry 0x08843B68 | file offset 0x00040B40 | FUN_08843b68 | bytes 60 */

void FUN_08843b68(int param_1)

{
  if (param_1 < 1) {
    *(undefined1 *)(DAT_089d4960 + 0x60) = 0xb;
    *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
  }
  else {
    *(undefined1 *)(DAT_089d4960 + 0x60) = 8;
    *(int *)(DAT_089d4960 + 0x58) = param_1;
  }
  return;
}

