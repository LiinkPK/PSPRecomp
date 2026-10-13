/* Entry 0x0887066C | file offset 0x0006D644 | FUN_0887066c | bytes 124 */

bool FUN_0887066c(void)

{
  bool bVar1;
  int iVar2;
  
  if (*DAT_089d7280 == '\0') {
    iVar2 = FUN_088b1440(DAT_089d727c);
    bVar1 = iVar2 != 0 && iVar2 != -0x7feefffb;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    FUN_08872a18();
    FUN_088b1764(DAT_089d7280);
  }
  return bVar1;
}

