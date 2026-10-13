/* Entry 0x088ECF90 | file offset 0x000E9F68 | FUN_088ecf90 | bytes 68 */

void FUN_088ecf90(void)

{
  if (DAT_089d7f0c != '\0') {
    sceUtilityUnloadModule(0x303);
    DAT_089d7f0c = '\0';
  }
  return;
}

