/* Entry 0x088A0C10 | file offset 0x0009DBE8 | FUN_088a0c10 | bytes 92 */

bool FUN_088a0c10(void)

{
  bool bVar1;
  
  DAT_089d6c78 = FUN_0888204c(0x237000);
  bVar1 = DAT_089d6c78 != 0;
  if (bVar1) {
    FUN_08867310(&DAT_09b4cf80,DAT_089d6c78,0x237000,0x40);
  }
  return bVar1;
}

