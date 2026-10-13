/* Entry 0x088ECF48 | file offset 0x000E9F20 | FUN_088ecf48 | bytes 72 */

void FUN_088ecf48(void)

{
  if (DAT_089d7f0c == '\0') {
    sceUtilityLoadModule(0x303);
    DAT_089d7f0c = '\x01';
  }
  return;
}

