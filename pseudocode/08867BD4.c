/* Entry 0x08867BD4 | file offset 0x00064BAC | FUN_08867bd4 | bytes 156 */

void FUN_08867bd4(void)

{
  FUN_08862854(PTR_s_language_bin_089d5f28,&DAT_09b26ab8,0x54,1);
  DAT_089d5f1f = DAT_09b26ac6 != 0;
  DAT_089d6010 = &DAT_09b26acc;
  DAT_089d5f20 = DAT_09b26aca != 0;
  if (!(bool)DAT_089d5f1f) {
    DAT_089d5f1f = FUN_08860d88();
  }
  if (DAT_089d5f20 == '\0') {
    DAT_089d5f20 = FUN_08860dc0();
  }
  return;
}

