/* Entry 0x088FE640 | file offset 0x000FB618 | FUN_088fe640 | bytes 96 */

undefined4 FUN_088fe640(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_089d7f9c == '\0') {
    uVar2 = 0;
  }
  else if ((DAT_089d69dc == '\0') && (iVar1 = FUN_08883340(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

