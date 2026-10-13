/* Entry 0x088F45FC | file offset 0x000F15D4 | FUN_088f45fc | bytes 60 */

void FUN_088f45fc(void)

{
  if (DAT_089d5fd1 == '\0') {
    *DAT_089d726c = *DAT_089d726c & 0xffffffbf;
  }
  else {
    *DAT_089d726c = *DAT_089d726c | 0x40;
  }
  return;
}

