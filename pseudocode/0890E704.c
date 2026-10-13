/* Entry 0x0890E704 | file offset 0x0010B6DC | FUN_0890e704 | bytes 144 */

void FUN_0890e704(void)

{
  if (DAT_089d836c != '\0') {
    if (DAT_089d8368 != 0) {
      FUN_08882298(DAT_089d69a8,DAT_089d8368);
      DAT_089d8368 = 0;
    }
    FUN_0890e850();
    sceNetTerm();
    sceUtilityUnloadModule(0x101);
    sceUtilityUnloadModule(0x100);
    DAT_089d836c = '\0';
  }
  return;
}

