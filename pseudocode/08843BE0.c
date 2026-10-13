/* Entry 0x08843BE0 | file offset 0x00040BB8 | FUN_08843be0 | bytes 60 */

void FUN_08843be0(int param_1)

{
  if (param_1 < 1) {
    *(undefined1 *)(DAT_089d4960 + 0x60) = 0xb;
    *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
  }
  else {
    *(undefined1 *)(DAT_089d4960 + 0x60) = 4;
    *(int *)(DAT_089d4960 + 0x58) = param_1;
  }
  return;
}

